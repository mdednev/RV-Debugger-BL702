#ifndef __SHELL_H__
#define __SHELL_H__

#include "stdint.h"
#include "string.h"
#include "shell_config.h"
#include "bflb_platform.h"

#define SHELL_PRINTF bflb_platform_printf

typedef int (*syscall_func)(void);
typedef int (*cmd_function_t)(int argc, char **argv);

enum input_stat
{
    WAIT_NORMAL,
    WAIT_SPEC_KEY,
    WAIT_FUNC_KEY,
};

struct shell
{
    enum input_stat stat;

    uint16_t current_history;
    uint16_t history_count;
    char cmd_history[SHELL_HISTORY_LINES][SHELL_CMD_SIZE];

    char line[SHELL_CMD_SIZE];
    uint16_t line_position;
    uint16_t line_curpos;

#ifdef SHELL_USING_AUTH
    char password[SHELL_PASSWORD_MAX];
#endif

#if defined(SHELL_USING_FS)

#endif
};

/* system call table */
struct shell_syscall
{
    const char*     name;       /* the name of system call */
#if defined(SHELL_USING_DESCRIPTION)
    const char*     desc;       /* description of system call */
#endif
    syscall_func func;      /* the function address of system call */
};

/* system variable table */
struct shell_sysvar
{
    const char*     name;       /* the name of variable */
#if defined(SHELL_USING_DESCRIPTION)
    const char*     desc;       /* description of system variable */
#endif
    uint8_t      type;      /* the type of variable */
    void*        var ;      /* the address of variable */
};

#ifdef SHELL_USING_DESCRIPTION
#define SHELL_FUNCTION_EXPORT_CMD(name, cmd, desc)                      \
    const char __fsym_##cmd##_name[] __attribute__((section(".rodata.name"))) = #cmd;    \
    const char __fsym_##cmd##_desc[] __attribute__((section(".rodata.name"))) = #desc;   \
    __attribute__((used)) const struct shell_syscall __fsym_##cmd __attribute__((section("FSymTab"))) = \
    {                           \
        __fsym_##cmd##_name,    \
        __fsym_##cmd##_desc,    \
        (syscall_func)&name     \
    };

#define SHELL_VAR_EXPORT(name, type, desc)                              \
    const char __vsym_##name##_name[] __attribute__((section(".rodata.name"))) = #name;  \
    const char __vsym_##name##_desc[] __attribute__((section(".rodata.name"))) = #desc;  \
    __attribute__((used)) const struct shell_sysvar __vsym_##name __attribute__((section("VSymTab"))) = \
    {                           \
        __vsym_##name##_name,   \
        __vsym_##name##_desc,   \
        type,                   \
        (void*)&name            \
    };
#else
#define SHELL_FUNCTION_EXPORT_CMD(name, cmd, desc)                      \
    const char __fsym_##cmd##_name[] = #cmd;                            \
    __attribute__((used)) const struct shell_syscall __fsym_##cmd __attribute__((section("FSymTab"))) = \
    {                                                                   \
        __fsym_##cmd##_name,                                            \
        (syscall_func)&name                                             \
    };

#define SHELL_VAR_EXPORT(name, type, desc)                              \
    const char __vsym_##name##_name[] = #name;                          \
    __attribute__((used)) const struct shell_sysvar __vsym_##name __attribute__((section("VSymTab"))) = \
    {                                                                   \
        __vsym_##name##_name,                                           \
        type,                                                           \
        (void*)&name                                                    \
    };
#endif /* end of SHELL_USING_DESCRIPTION */

/**
 * @ingroup shell
 *
 * This macro exports a command to module shell.
 *
 * @param command the name of command.
 * @param desc the description of command, which will show in help.
 */
#define SHELL_CMD_EXPORT(command, desc)   \
    SHELL_FUNCTION_EXPORT_CMD(command, __cmd_##command, desc)
#define SHELL_CMD_EXPORT_ALIAS(command, alias, desc)  \
    SHELL_FUNCTION_EXPORT_CMD(command, __cmd_##alias, desc)

void shell_handler(uint8_t data);
void shell_system_init(void);
#endif