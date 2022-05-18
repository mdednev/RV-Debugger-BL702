#include "hal_gpio.h"
#include "hal_clock.h"
#include "bl702_glb.h"
#include "pinmux_config.h"

struct pin_mux_cfg
{
    uint8_t pin;
    uint16_t func;
};

static const struct pin_mux_cfg af_pin_table[] = 
{
    {
        .pin = GPIO_PIN_0,
        .func = CONFIG_GPIO0_FUNC
    },
    {
        .pin = GPIO_PIN_1,
        .func = CONFIG_GPIO1_FUNC
    },
    {
        .pin = GPIO_PIN_2,
        .func = CONFIG_GPIO2_FUNC
    },
    {
        .pin = GPIO_PIN_3,
        .func = CONFIG_GPIO3_FUNC
    },
    {
        .pin = GPIO_PIN_4,
        .func = CONFIG_GPIO4_FUNC
    },
    {
        .pin = GPIO_PIN_5,
        .func = CONFIG_GPIO5_FUNC
    },
    {
        .pin = GPIO_PIN_6,
        .func = CONFIG_GPIO6_FUNC
    },
    {
        .pin = GPIO_PIN_7,
        .func = CONFIG_GPIO7_FUNC
    },
    {
        .pin = GPIO_PIN_8,
        .func = CONFIG_GPIO8_FUNC
    },
    {
        .pin = GPIO_PIN_9,
        .func = CONFIG_GPIO9_FUNC
    },
    {
        .pin = GPIO_PIN_10,
        .func = CONFIG_GPIO10_FUNC
    },
    {
        .pin = GPIO_PIN_11,
        .func = CONFIG_GPIO11_FUNC
    },
    {
        .pin = GPIO_PIN_12,
        .func = CONFIG_GPIO12_FUNC
    },
    {
        .pin = GPIO_PIN_13,
        .func = CONFIG_GPIO13_FUNC
    },
    {
        .pin = GPIO_PIN_14,
        .func = CONFIG_GPIO14_FUNC
    },
    {
        .pin = GPIO_PIN_15,
        .func = CONFIG_GPIO15_FUNC
    },
    {
        .pin = GPIO_PIN_16,
        .func = CONFIG_GPIO16_FUNC
    },
    {
        .pin = GPIO_PIN_17,
        .func = CONFIG_GPIO17_FUNC
    },
    {
        .pin = GPIO_PIN_18,
        .func = CONFIG_GPIO18_FUNC
    },
    {
        .pin = GPIO_PIN_19,
        .func = CONFIG_GPIO19_FUNC
    },
    {
        .pin = GPIO_PIN_20,
        .func = CONFIG_GPIO20_FUNC
    },
    {
        .pin = GPIO_PIN_21,
        .func = CONFIG_GPIO21_FUNC
    },
    {
        .pin = GPIO_PIN_22,
        .func = CONFIG_GPIO22_FUNC
    },
    {
        .pin = GPIO_PIN_23,
        .func = CONFIG_GPIO23_FUNC
    },
    {
        .pin = GPIO_PIN_24,
        .func = CONFIG_GPIO24_FUNC
    },
    {
        .pin = GPIO_PIN_25,
        .func = CONFIG_GPIO25_FUNC
    },
    {
        .pin = GPIO_PIN_26,
        .func = CONFIG_GPIO26_FUNC
    },
    {
        .pin = GPIO_PIN_27,
        .func = CONFIG_GPIO27_FUNC
    },
    {
        .pin = GPIO_PIN_28,
        .func = CONFIG_GPIO28_FUNC
    },
    {
        .pin = GPIO_PIN_29,
        .func = CONFIG_GPIO29_FUNC
    },
    {
        .pin = GPIO_PIN_30,
        .func = CONFIG_GPIO30_FUNC
    },
    {
        .pin = GPIO_PIN_31,
        .func = CONFIG_GPIO31_FUNC
    },
    {
        .pin = GPIO_PIN_32,
        .func = CONFIG_GPIO32_FUNC
    },
    {
        .pin = GPIO_PIN_33,
        .func = CONFIG_GPIO33_FUNC
    },
    {
        .pin = GPIO_PIN_34,
        .func = CONFIG_GPIO34_FUNC
    },
    {
        .pin = GPIO_PIN_35,
        .func = CONFIG_GPIO35_FUNC
    },
    {
        .pin = GPIO_PIN_36,
        .func = CONFIG_GPIO36_FUNC
    },
    {
        .pin = GPIO_PIN_37,
        .func = CONFIG_GPIO37_FUNC
    }

};

static void board_pin_mux_init(void)
{
    GLB_GPIO_Cfg_Type gpio_cfg;

    gpio_cfg.drive = 0;
    gpio_cfg.smtCtrl = 1;
    gpio_cfg.gpioMode = GPIO_MODE_AF;
    gpio_cfg.pullType = GPIO_PULL_UP;

    for (int i = 0; i < sizeof(af_pin_table)/sizeof(af_pin_table[0]); i++)
    {
        gpio_cfg.gpioPin = af_pin_table[i].pin;
        gpio_cfg.gpioFun = af_pin_table[i].func;

        if(af_pin_table[i].func == GPIO_FUN_UNUSED)
        {
            continue;
        }
        else if(af_pin_table[i].func == GPIO_FUN_PWM)
        {
            gpio_cfg.pullType = GPIO_PULL_DOWN;
        }
        else if((af_pin_table[i].func == GPIO_FUN_DAC)|| (af_pin_table[i].func == GPIO_FUN_DAC))
        {
            gpio_cfg.gpioFun  = GPIO_FUN_ANALOG;
            gpio_cfg.gpioMode = GPIO_MODE_ANALOG;
        }
        else if((af_pin_table[i].func & 0x70) == 0x70)
        {
            gpio_cfg.gpioFun = GPIO_FUN_UART;
            uint8_t sig = af_pin_table[i].func & 0x07;
            
            if (gpio_cfg.gpioPin > 31)
            {
                GLB_UART_Fun_Sel(((gpio_cfg.gpioPin-9) % 8), sig);
            }
            else
            {
                GLB_UART_Fun_Sel((gpio_cfg.gpioPin % 8), sig);
            }
        }
        GLB_GPIO_Init(&gpio_cfg);
    }
    
}

static void board_clock_init(void)
{
    system_clock_init();
    peripheral_clock_init();
}

void bl_show_info(void)
{
	MSG(" _____ ___________ _____ ___________ \r\n");
	MSG("/  ___|_   _| ___ \\  ___|  ___|  _  \\ \r\n");
	MSG("\\ `--.  | | | |_/ / |__ | |__ | | | |\r\n");
	MSG(" `--. \\ | | |  __/|  __||  __|| | | |\r\n");
	MSG("/\\__/ /_| |_| |   | |___| |___| |/ / \r\n");
	MSG("\\____/ \\___/\\_|   \\____/\\____/|___/  \r\n");
    MSG("\r\n");
    MSG("Build:%s,%s\r\n",__TIME__,__DATE__);
    MSG("Copyright (c) 2021 Sipeed team\r\n");

#if 0    
    MSG("root clock:%dM\r\n",system_clock_get(SYSTEM_CLOCK_ROOT_CLOCK)/1000000);
    MSG("fclk clock:%dM\r\n",system_clock_get(SYSTEM_CLOCK_FCLK)/1000000);
    MSG("bclk clock:%dM\r\n",system_clock_get(SYSTEM_CLOCK_BCLK)/1000000);

    MSG("uart clock:%dM\r\n",peripheral_clock_get(PERIPHERAL_CLOCK_UART)/1000000);
    MSG("spi clock:%dM\r\n",peripheral_clock_get(PERIPHERAL_CLOCK_SPI)/1000000);
    MSG("i2c clock:%dM\r\n",peripheral_clock_get(PERIPHERAL_CLOCK_I2C)/1000000);
#endif
}

void board_init(void)
{
    board_clock_init();
    board_pin_mux_init();
}