/**
  ******************************************************************************
  * @file    mjpeg_reg.h
  * @version V1.2
  * @date    2020-03-30
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2019 Bouffalo Lab</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of Bouffalo Lab nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
#ifndef  __MJPEG_REG_H__
#define  __MJPEG_REG_H__

#include "bl702.h"

/* 0x0 : mjpeg_control_1 */
#define MJPEG_CONTROL_1_OFFSET                                  (0x0)
#define MJPEG_REG_MJPEG_ENABLE                                  MJPEG_REG_MJPEG_ENABLE
#define MJPEG_REG_MJPEG_ENABLE_POS                              (0U)
#define MJPEG_REG_MJPEG_ENABLE_LEN                              (1U)
#define MJPEG_REG_MJPEG_ENABLE_MSK                              (((1U<<MJPEG_REG_MJPEG_ENABLE_LEN)-1)<<MJPEG_REG_MJPEG_ENABLE_POS)
#define MJPEG_REG_MJPEG_ENABLE_UMSK                             (~(((1U<<MJPEG_REG_MJPEG_ENABLE_LEN)-1)<<MJPEG_REG_MJPEG_ENABLE_POS))
#define MJPEG_REG_MJPEG_BIT_ORDER                               MJPEG_REG_MJPEG_BIT_ORDER
#define MJPEG_REG_MJPEG_BIT_ORDER_POS                           (1U)
#define MJPEG_REG_MJPEG_BIT_ORDER_LEN                           (1U)
#define MJPEG_REG_MJPEG_BIT_ORDER_MSK                           (((1U<<MJPEG_REG_MJPEG_BIT_ORDER_LEN)-1)<<MJPEG_REG_MJPEG_BIT_ORDER_POS)
#define MJPEG_REG_MJPEG_BIT_ORDER_UMSK                          (~(((1U<<MJPEG_REG_MJPEG_BIT_ORDER_LEN)-1)<<MJPEG_REG_MJPEG_BIT_ORDER_POS))
#define MJPEG_REG_ORDER_U_EVEN                                  MJPEG_REG_ORDER_U_EVEN
#define MJPEG_REG_ORDER_U_EVEN_POS                              (2U)
#define MJPEG_REG_ORDER_U_EVEN_LEN                              (1U)
#define MJPEG_REG_ORDER_U_EVEN_MSK                              (((1U<<MJPEG_REG_ORDER_U_EVEN_LEN)-1)<<MJPEG_REG_ORDER_U_EVEN_POS)
#define MJPEG_REG_ORDER_U_EVEN_UMSK                             (~(((1U<<MJPEG_REG_ORDER_U_EVEN_LEN)-1)<<MJPEG_REG_ORDER_U_EVEN_POS))
#define MJPEG_REG_WR_OVER_STOP                                  MJPEG_REG_WR_OVER_STOP
#define MJPEG_REG_WR_OVER_STOP_POS                              (3U)
#define MJPEG_REG_WR_OVER_STOP_LEN                              (1U)
#define MJPEG_REG_WR_OVER_STOP_MSK                              (((1U<<MJPEG_REG_WR_OVER_STOP_LEN)-1)<<MJPEG_REG_WR_OVER_STOP_POS)
#define MJPEG_REG_WR_OVER_STOP_UMSK                             (~(((1U<<MJPEG_REG_WR_OVER_STOP_LEN)-1)<<MJPEG_REG_WR_OVER_STOP_POS))
#define MJPEG_REG_LAST_HF_WBLK_DMY                              MJPEG_REG_LAST_HF_WBLK_DMY
#define MJPEG_REG_LAST_HF_WBLK_DMY_POS                          (4U)
#define MJPEG_REG_LAST_HF_WBLK_DMY_LEN                          (1U)
#define MJPEG_REG_LAST_HF_WBLK_DMY_MSK                          (((1U<<MJPEG_REG_LAST_HF_WBLK_DMY_LEN)-1)<<MJPEG_REG_LAST_HF_WBLK_DMY_POS)
#define MJPEG_REG_LAST_HF_WBLK_DMY_UMSK                         (~(((1U<<MJPEG_REG_LAST_HF_WBLK_DMY_LEN)-1)<<MJPEG_REG_LAST_HF_WBLK_DMY_POS))
#define MJPEG_REG_LAST_HF_HBLK_DMY                              MJPEG_REG_LAST_HF_HBLK_DMY
#define MJPEG_REG_LAST_HF_HBLK_DMY_POS                          (5U)
#define MJPEG_REG_LAST_HF_HBLK_DMY_LEN                          (1U)
#define MJPEG_REG_LAST_HF_HBLK_DMY_MSK                          (((1U<<MJPEG_REG_LAST_HF_HBLK_DMY_LEN)-1)<<MJPEG_REG_LAST_HF_HBLK_DMY_POS)
#define MJPEG_REG_LAST_HF_HBLK_DMY_UMSK                         (~(((1U<<MJPEG_REG_LAST_HF_HBLK_DMY_LEN)-1)<<MJPEG_REG_LAST_HF_HBLK_DMY_POS))
#define MJPEG_REG_REFLECT_DMY                                   MJPEG_REG_REFLECT_DMY
#define MJPEG_REG_REFLECT_DMY_POS                               (6U)
#define MJPEG_REG_REFLECT_DMY_LEN                               (1U)
#define MJPEG_REG_REFLECT_DMY_MSK                               (((1U<<MJPEG_REG_REFLECT_DMY_LEN)-1)<<MJPEG_REG_REFLECT_DMY_POS)
#define MJPEG_REG_REFLECT_DMY_UMSK                              (~(((1U<<MJPEG_REG_REFLECT_DMY_LEN)-1)<<MJPEG_REG_REFLECT_DMY_POS))
#define MJPEG_REG_H_BUST                                        MJPEG_REG_H_BUST
#define MJPEG_REG_H_BUST_POS                                    (8U)
#define MJPEG_REG_H_BUST_LEN                                    (2U)
#define MJPEG_REG_H_BUST_MSK                                    (((1U<<MJPEG_REG_H_BUST_LEN)-1)<<MJPEG_REG_H_BUST_POS)
#define MJPEG_REG_H_BUST_UMSK                                   (~(((1U<<MJPEG_REG_H_BUST_LEN)-1)<<MJPEG_REG_H_BUST_POS))
#define MJPEG_REG_YUV_MODE                                      MJPEG_REG_YUV_MODE
#define MJPEG_REG_YUV_MODE_POS                                  (12U)
#define MJPEG_REG_YUV_MODE_LEN                                  (2U)
#define MJPEG_REG_YUV_MODE_MSK                                  (((1U<<MJPEG_REG_YUV_MODE_LEN)-1)<<MJPEG_REG_YUV_MODE_POS)
#define MJPEG_REG_YUV_MODE_UMSK                                 (~(((1U<<MJPEG_REG_YUV_MODE_LEN)-1)<<MJPEG_REG_YUV_MODE_POS))
#define MJPEG_REG_Q_MODE                                        MJPEG_REG_Q_MODE
#define MJPEG_REG_Q_MODE_POS                                    (16U)
#define MJPEG_REG_Q_MODE_LEN                                    (7U)
#define MJPEG_REG_Q_MODE_MSK                                    (((1U<<MJPEG_REG_Q_MODE_LEN)-1)<<MJPEG_REG_Q_MODE_POS)
#define MJPEG_REG_Q_MODE_UMSK                                   (~(((1U<<MJPEG_REG_Q_MODE_LEN)-1)<<MJPEG_REG_Q_MODE_POS))
#define MJPEG_REG_Y0_ORDER                                      MJPEG_REG_Y0_ORDER
#define MJPEG_REG_Y0_ORDER_POS                                  (24U)
#define MJPEG_REG_Y0_ORDER_LEN                                  (2U)
#define MJPEG_REG_Y0_ORDER_MSK                                  (((1U<<MJPEG_REG_Y0_ORDER_LEN)-1)<<MJPEG_REG_Y0_ORDER_POS)
#define MJPEG_REG_Y0_ORDER_UMSK                                 (~(((1U<<MJPEG_REG_Y0_ORDER_LEN)-1)<<MJPEG_REG_Y0_ORDER_POS))
#define MJPEG_REG_U0_ORDER                                      MJPEG_REG_U0_ORDER
#define MJPEG_REG_U0_ORDER_POS                                  (26U)
#define MJPEG_REG_U0_ORDER_LEN                                  (2U)
#define MJPEG_REG_U0_ORDER_MSK                                  (((1U<<MJPEG_REG_U0_ORDER_LEN)-1)<<MJPEG_REG_U0_ORDER_POS)
#define MJPEG_REG_U0_ORDER_UMSK                                 (~(((1U<<MJPEG_REG_U0_ORDER_LEN)-1)<<MJPEG_REG_U0_ORDER_POS))
#define MJPEG_REG_Y1_ORDER                                      MJPEG_REG_Y1_ORDER
#define MJPEG_REG_Y1_ORDER_POS                                  (28U)
#define MJPEG_REG_Y1_ORDER_LEN                                  (2U)
#define MJPEG_REG_Y1_ORDER_MSK                                  (((1U<<MJPEG_REG_Y1_ORDER_LEN)-1)<<MJPEG_REG_Y1_ORDER_POS)
#define MJPEG_REG_Y1_ORDER_UMSK                                 (~(((1U<<MJPEG_REG_Y1_ORDER_LEN)-1)<<MJPEG_REG_Y1_ORDER_POS))
#define MJPEG_REG_V0_ORDER                                      MJPEG_REG_V0_ORDER
#define MJPEG_REG_V0_ORDER_POS                                  (30U)
#define MJPEG_REG_V0_ORDER_LEN                                  (2U)
#define MJPEG_REG_V0_ORDER_MSK                                  (((1U<<MJPEG_REG_V0_ORDER_LEN)-1)<<MJPEG_REG_V0_ORDER_POS)
#define MJPEG_REG_V0_ORDER_UMSK                                 (~(((1U<<MJPEG_REG_V0_ORDER_LEN)-1)<<MJPEG_REG_V0_ORDER_POS))

/* 0x4 : mjpeg_control_2 */
#define MJPEG_CONTROL_2_OFFSET                                  (0x4)
#define MJPEG_REG_SW_FRAME                                      MJPEG_REG_SW_FRAME
#define MJPEG_REG_SW_FRAME_POS                                  (0U)
#define MJPEG_REG_SW_FRAME_LEN                                  (5U)
#define MJPEG_REG_SW_FRAME_MSK                                  (((1U<<MJPEG_REG_SW_FRAME_LEN)-1)<<MJPEG_REG_SW_FRAME_POS)
#define MJPEG_REG_SW_FRAME_UMSK                                 (~(((1U<<MJPEG_REG_SW_FRAME_LEN)-1)<<MJPEG_REG_SW_FRAME_POS))
#define MJPEG_REG_MJPEG_SW_MODE                                 MJPEG_REG_MJPEG_SW_MODE
#define MJPEG_REG_MJPEG_SW_MODE_POS                             (8U)
#define MJPEG_REG_MJPEG_SW_MODE_LEN                             (1U)
#define MJPEG_REG_MJPEG_SW_MODE_MSK                             (((1U<<MJPEG_REG_MJPEG_SW_MODE_LEN)-1)<<MJPEG_REG_MJPEG_SW_MODE_POS)
#define MJPEG_REG_MJPEG_SW_MODE_UMSK                            (~(((1U<<MJPEG_REG_MJPEG_SW_MODE_LEN)-1)<<MJPEG_REG_MJPEG_SW_MODE_POS))
#define MJPEG_REG_MJPEG_SW_RUN                                  MJPEG_REG_MJPEG_SW_RUN
#define MJPEG_REG_MJPEG_SW_RUN_POS                              (9U)
#define MJPEG_REG_MJPEG_SW_RUN_LEN                              (1U)
#define MJPEG_REG_MJPEG_SW_RUN_MSK                              (((1U<<MJPEG_REG_MJPEG_SW_RUN_LEN)-1)<<MJPEG_REG_MJPEG_SW_RUN_POS)
#define MJPEG_REG_MJPEG_SW_RUN_UMSK                             (~(((1U<<MJPEG_REG_MJPEG_SW_RUN_LEN)-1)<<MJPEG_REG_MJPEG_SW_RUN_POS))
#define MJPEG_REG_YY_DVP2AHB_LSEL                               MJPEG_REG_YY_DVP2AHB_LSEL
#define MJPEG_REG_YY_DVP2AHB_LSEL_POS                           (12U)
#define MJPEG_REG_YY_DVP2AHB_LSEL_LEN                           (1U)
#define MJPEG_REG_YY_DVP2AHB_LSEL_MSK                           (((1U<<MJPEG_REG_YY_DVP2AHB_LSEL_LEN)-1)<<MJPEG_REG_YY_DVP2AHB_LSEL_POS)
#define MJPEG_REG_YY_DVP2AHB_LSEL_UMSK                          (~(((1U<<MJPEG_REG_YY_DVP2AHB_LSEL_LEN)-1)<<MJPEG_REG_YY_DVP2AHB_LSEL_POS))
#define MJPEG_REG_YY_DVP2AHB_FSEL                               MJPEG_REG_YY_DVP2AHB_FSEL
#define MJPEG_REG_YY_DVP2AHB_FSEL_POS                           (13U)
#define MJPEG_REG_YY_DVP2AHB_FSEL_LEN                           (1U)
#define MJPEG_REG_YY_DVP2AHB_FSEL_MSK                           (((1U<<MJPEG_REG_YY_DVP2AHB_FSEL_LEN)-1)<<MJPEG_REG_YY_DVP2AHB_FSEL_POS)
#define MJPEG_REG_YY_DVP2AHB_FSEL_UMSK                          (~(((1U<<MJPEG_REG_YY_DVP2AHB_FSEL_LEN)-1)<<MJPEG_REG_YY_DVP2AHB_FSEL_POS))
#define MJPEG_REG_UV_DVP2AHB_LSEL                               MJPEG_REG_UV_DVP2AHB_LSEL
#define MJPEG_REG_UV_DVP2AHB_LSEL_POS                           (14U)
#define MJPEG_REG_UV_DVP2AHB_LSEL_LEN                           (1U)
#define MJPEG_REG_UV_DVP2AHB_LSEL_MSK                           (((1U<<MJPEG_REG_UV_DVP2AHB_LSEL_LEN)-1)<<MJPEG_REG_UV_DVP2AHB_LSEL_POS)
#define MJPEG_REG_UV_DVP2AHB_LSEL_UMSK                          (~(((1U<<MJPEG_REG_UV_DVP2AHB_LSEL_LEN)-1)<<MJPEG_REG_UV_DVP2AHB_LSEL_POS))
#define MJPEG_REG_UV_DVP2AHB_FSEL                               MJPEG_REG_UV_DVP2AHB_FSEL
#define MJPEG_REG_UV_DVP2AHB_FSEL_POS                           (15U)
#define MJPEG_REG_UV_DVP2AHB_FSEL_LEN                           (1U)
#define MJPEG_REG_UV_DVP2AHB_FSEL_MSK                           (((1U<<MJPEG_REG_UV_DVP2AHB_FSEL_LEN)-1)<<MJPEG_REG_UV_DVP2AHB_FSEL_POS)
#define MJPEG_REG_UV_DVP2AHB_FSEL_UMSK                          (~(((1U<<MJPEG_REG_UV_DVP2AHB_FSEL_LEN)-1)<<MJPEG_REG_UV_DVP2AHB_FSEL_POS))
#define MJPEG_REG_MJPEG_WAIT_CYCLE                              MJPEG_REG_MJPEG_WAIT_CYCLE
#define MJPEG_REG_MJPEG_WAIT_CYCLE_POS                          (16U)
#define MJPEG_REG_MJPEG_WAIT_CYCLE_LEN                          (16U)
#define MJPEG_REG_MJPEG_WAIT_CYCLE_MSK                          (((1U<<MJPEG_REG_MJPEG_WAIT_CYCLE_LEN)-1)<<MJPEG_REG_MJPEG_WAIT_CYCLE_POS)
#define MJPEG_REG_MJPEG_WAIT_CYCLE_UMSK                         (~(((1U<<MJPEG_REG_MJPEG_WAIT_CYCLE_LEN)-1)<<MJPEG_REG_MJPEG_WAIT_CYCLE_POS))

/* 0x08 : mjpeg_yy_frame_addr */
#define MJPEG_YY_FRAME_ADDR_OFFSET                              (0x08)
#define MJPEG_REG_YY_ADDR_START                                 MJPEG_REG_YY_ADDR_START
#define MJPEG_REG_YY_ADDR_START_POS                             (0U)
#define MJPEG_REG_YY_ADDR_START_LEN                             (32U)
#define MJPEG_REG_YY_ADDR_START_MSK                             (((1U<<MJPEG_REG_YY_ADDR_START_LEN)-1)<<MJPEG_REG_YY_ADDR_START_POS)
#define MJPEG_REG_YY_ADDR_START_UMSK                            (~(((1U<<MJPEG_REG_YY_ADDR_START_LEN)-1)<<MJPEG_REG_YY_ADDR_START_POS))

/* 0x0C : mjpeg_uv_frame_addr */
#define MJPEG_UV_FRAME_ADDR_OFFSET                              (0x0C)
#define MJPEG_REG_UV_ADDR_START                                 MJPEG_REG_UV_ADDR_START
#define MJPEG_REG_UV_ADDR_START_POS                             (0U)
#define MJPEG_REG_UV_ADDR_START_LEN                             (32U)
#define MJPEG_REG_UV_ADDR_START_MSK                             (((1U<<MJPEG_REG_UV_ADDR_START_LEN)-1)<<MJPEG_REG_UV_ADDR_START_POS)
#define MJPEG_REG_UV_ADDR_START_UMSK                            (~(((1U<<MJPEG_REG_UV_ADDR_START_LEN)-1)<<MJPEG_REG_UV_ADDR_START_POS))

/* 0x10 : mjpeg_yuv_mem */
#define MJPEG_YUV_MEM_OFFSET                                    (0x10)
#define MJPEG_REG_YY_MEM_HBLK                                   MJPEG_REG_YY_MEM_HBLK
#define MJPEG_REG_YY_MEM_HBLK_POS                               (0U)
#define MJPEG_REG_YY_MEM_HBLK_LEN                               (13U)
#define MJPEG_REG_YY_MEM_HBLK_MSK                               (((1U<<MJPEG_REG_YY_MEM_HBLK_LEN)-1)<<MJPEG_REG_YY_MEM_HBLK_POS)
#define MJPEG_REG_YY_MEM_HBLK_UMSK                              (~(((1U<<MJPEG_REG_YY_MEM_HBLK_LEN)-1)<<MJPEG_REG_YY_MEM_HBLK_POS))
#define MJPEG_REG_UV_MEM_HBLK                                   MJPEG_REG_UV_MEM_HBLK
#define MJPEG_REG_UV_MEM_HBLK_POS                               (16U)
#define MJPEG_REG_UV_MEM_HBLK_LEN                               (13U)
#define MJPEG_REG_UV_MEM_HBLK_MSK                               (((1U<<MJPEG_REG_UV_MEM_HBLK_LEN)-1)<<MJPEG_REG_UV_MEM_HBLK_POS)
#define MJPEG_REG_UV_MEM_HBLK_UMSK                              (~(((1U<<MJPEG_REG_UV_MEM_HBLK_LEN)-1)<<MJPEG_REG_UV_MEM_HBLK_POS))

/* 0x14 : jpeg_frame_addr */
#define MJPEG_JPEG_FRAME_ADDR_OFFSET                            (0x14)
#define MJPEG_REG_W_ADDR_START                                  MJPEG_REG_W_ADDR_START
#define MJPEG_REG_W_ADDR_START_POS                              (0U)
#define MJPEG_REG_W_ADDR_START_LEN                              (32U)
#define MJPEG_REG_W_ADDR_START_MSK                              (((1U<<MJPEG_REG_W_ADDR_START_LEN)-1)<<MJPEG_REG_W_ADDR_START_POS)
#define MJPEG_REG_W_ADDR_START_UMSK                             (~(((1U<<MJPEG_REG_W_ADDR_START_LEN)-1)<<MJPEG_REG_W_ADDR_START_POS))

/* 0x18 : jpeg_store_memory */
#define MJPEG_JPEG_STORE_MEMORY_OFFSET                          (0x18)
#define MJPEG_REG_W_BURST_CNT                                   MJPEG_REG_W_BURST_CNT
#define MJPEG_REG_W_BURST_CNT_POS                               (0U)
#define MJPEG_REG_W_BURST_CNT_LEN                               (32U)
#define MJPEG_REG_W_BURST_CNT_MSK                               (((1U<<MJPEG_REG_W_BURST_CNT_LEN)-1)<<MJPEG_REG_W_BURST_CNT_POS)
#define MJPEG_REG_W_BURST_CNT_UMSK                              (~(((1U<<MJPEG_REG_W_BURST_CNT_LEN)-1)<<MJPEG_REG_W_BURST_CNT_POS))

/* 0x1C : mjpeg_control_3 */
#define MJPEG_CONTROL_3_OFFSET                                  (0x1C)
#define MJPEG_REG_INT_NORMAL_EN                                 MJPEG_REG_INT_NORMAL_EN
#define MJPEG_REG_INT_NORMAL_EN_POS                             (0U)
#define MJPEG_REG_INT_NORMAL_EN_LEN                             (1U)
#define MJPEG_REG_INT_NORMAL_EN_MSK                             (((1U<<MJPEG_REG_INT_NORMAL_EN_LEN)-1)<<MJPEG_REG_INT_NORMAL_EN_POS)
#define MJPEG_REG_INT_NORMAL_EN_UMSK                            (~(((1U<<MJPEG_REG_INT_NORMAL_EN_LEN)-1)<<MJPEG_REG_INT_NORMAL_EN_POS))
#define MJPEG_REG_INT_CAM_EN                                    MJPEG_REG_INT_CAM_EN
#define MJPEG_REG_INT_CAM_EN_POS                                (1U)
#define MJPEG_REG_INT_CAM_EN_LEN                                (1U)
#define MJPEG_REG_INT_CAM_EN_MSK                                (((1U<<MJPEG_REG_INT_CAM_EN_LEN)-1)<<MJPEG_REG_INT_CAM_EN_POS)
#define MJPEG_REG_INT_CAM_EN_UMSK                               (~(((1U<<MJPEG_REG_INT_CAM_EN_LEN)-1)<<MJPEG_REG_INT_CAM_EN_POS))
#define MJPEG_REG_INT_MEM_EN                                    MJPEG_REG_INT_MEM_EN
#define MJPEG_REG_INT_MEM_EN_POS                                (2U)
#define MJPEG_REG_INT_MEM_EN_LEN                                (1U)
#define MJPEG_REG_INT_MEM_EN_MSK                                (((1U<<MJPEG_REG_INT_MEM_EN_LEN)-1)<<MJPEG_REG_INT_MEM_EN_POS)
#define MJPEG_REG_INT_MEM_EN_UMSK                               (~(((1U<<MJPEG_REG_INT_MEM_EN_LEN)-1)<<MJPEG_REG_INT_MEM_EN_POS))
#define MJPEG_REG_INT_FRAME_EN                                  MJPEG_REG_INT_FRAME_EN
#define MJPEG_REG_INT_FRAME_EN_POS                              (3U)
#define MJPEG_REG_INT_FRAME_EN_LEN                              (1U)
#define MJPEG_REG_INT_FRAME_EN_MSK                              (((1U<<MJPEG_REG_INT_FRAME_EN_LEN)-1)<<MJPEG_REG_INT_FRAME_EN_POS)
#define MJPEG_REG_INT_FRAME_EN_UMSK                             (~(((1U<<MJPEG_REG_INT_FRAME_EN_LEN)-1)<<MJPEG_REG_INT_FRAME_EN_POS))
#define MJPEG_STS_NORMAL_INT                                    MJPEG_STS_NORMAL_INT
#define MJPEG_STS_NORMAL_INT_POS                                (4U)
#define MJPEG_STS_NORMAL_INT_LEN                                (1U)
#define MJPEG_STS_NORMAL_INT_MSK                                (((1U<<MJPEG_STS_NORMAL_INT_LEN)-1)<<MJPEG_STS_NORMAL_INT_POS)
#define MJPEG_STS_NORMAL_INT_UMSK                               (~(((1U<<MJPEG_STS_NORMAL_INT_LEN)-1)<<MJPEG_STS_NORMAL_INT_POS))
#define MJPEG_STS_CAM_INT                                       MJPEG_STS_CAM_INT
#define MJPEG_STS_CAM_INT_POS                                   (5U)
#define MJPEG_STS_CAM_INT_LEN                                   (1U)
#define MJPEG_STS_CAM_INT_MSK                                   (((1U<<MJPEG_STS_CAM_INT_LEN)-1)<<MJPEG_STS_CAM_INT_POS)
#define MJPEG_STS_CAM_INT_UMSK                                  (~(((1U<<MJPEG_STS_CAM_INT_LEN)-1)<<MJPEG_STS_CAM_INT_POS))
#define MJPEG_STS_MEM_INT                                       MJPEG_STS_MEM_INT
#define MJPEG_STS_MEM_INT_POS                                   (6U)
#define MJPEG_STS_MEM_INT_LEN                                   (1U)
#define MJPEG_STS_MEM_INT_MSK                                   (((1U<<MJPEG_STS_MEM_INT_LEN)-1)<<MJPEG_STS_MEM_INT_POS)
#define MJPEG_STS_MEM_INT_UMSK                                  (~(((1U<<MJPEG_STS_MEM_INT_LEN)-1)<<MJPEG_STS_MEM_INT_POS))
#define MJPEG_STS_FRAME_INT                                     MJPEG_STS_FRAME_INT
#define MJPEG_STS_FRAME_INT_POS                                 (7U)
#define MJPEG_STS_FRAME_INT_LEN                                 (1U)
#define MJPEG_STS_FRAME_INT_MSK                                 (((1U<<MJPEG_STS_FRAME_INT_LEN)-1)<<MJPEG_STS_FRAME_INT_POS)
#define MJPEG_STS_FRAME_INT_UMSK                                (~(((1U<<MJPEG_STS_FRAME_INT_LEN)-1)<<MJPEG_STS_FRAME_INT_POS))
#define MJPEG_IDLE                                              MJPEG_IDLE
#define MJPEG_IDLE_POS                                          (8U)
#define MJPEG_IDLE_LEN                                          (1U)
#define MJPEG_IDLE_MSK                                          (((1U<<MJPEG_IDLE_LEN)-1)<<MJPEG_IDLE_POS)
#define MJPEG_IDLE_UMSK                                         (~(((1U<<MJPEG_IDLE_LEN)-1)<<MJPEG_IDLE_POS))
#define MJPEG_FUNC                                              MJPEG_FUNC
#define MJPEG_FUNC_POS                                          (9U)
#define MJPEG_FUNC_LEN                                          (1U)
#define MJPEG_FUNC_MSK                                          (((1U<<MJPEG_FUNC_LEN)-1)<<MJPEG_FUNC_POS)
#define MJPEG_FUNC_UMSK                                         (~(((1U<<MJPEG_FUNC_LEN)-1)<<MJPEG_FUNC_POS))
#define MJPEG_WAIT                                              MJPEG_WAIT
#define MJPEG_WAIT_POS                                          (10U)
#define MJPEG_WAIT_LEN                                          (1U)
#define MJPEG_WAIT_MSK                                          (((1U<<MJPEG_WAIT_LEN)-1)<<MJPEG_WAIT_POS)
#define MJPEG_WAIT_UMSK                                         (~(((1U<<MJPEG_WAIT_LEN)-1)<<MJPEG_WAIT_POS))
#define MJPEG_FLSH                                              MJPEG_FLSH
#define MJPEG_FLSH_POS                                          (11U)
#define MJPEG_FLSH_LEN                                          (1U)
#define MJPEG_FLSH_MSK                                          (((1U<<MJPEG_FLSH_LEN)-1)<<MJPEG_FLSH_POS)
#define MJPEG_FLSH_UMSK                                         (~(((1U<<MJPEG_FLSH_LEN)-1)<<MJPEG_FLSH_POS))
#define MJPEG_MANS                                              MJPEG_MANS
#define MJPEG_MANS_POS                                          (12U)
#define MJPEG_MANS_LEN                                          (1U)
#define MJPEG_MANS_MSK                                          (((1U<<MJPEG_MANS_LEN)-1)<<MJPEG_MANS_POS)
#define MJPEG_MANS_UMSK                                         (~(((1U<<MJPEG_MANS_LEN)-1)<<MJPEG_MANS_POS))
#define MJPEG_MANF                                              MJPEG_MANF
#define MJPEG_MANF_POS                                          (13U)
#define MJPEG_MANF_LEN                                          (1U)
#define MJPEG_MANF_MSK                                          (((1U<<MJPEG_MANF_LEN)-1)<<MJPEG_MANF_POS)
#define MJPEG_MANF_UMSK                                         (~(((1U<<MJPEG_MANF_LEN)-1)<<MJPEG_MANF_POS))
#define MJPEG_AHB_IDLE                                          MJPEG_AHB_IDLE
#define MJPEG_AHB_IDLE_POS                                      (14U)
#define MJPEG_AHB_IDLE_LEN                                      (1U)
#define MJPEG_AHB_IDLE_MSK                                      (((1U<<MJPEG_AHB_IDLE_LEN)-1)<<MJPEG_AHB_IDLE_POS)
#define MJPEG_AHB_IDLE_UMSK                                     (~(((1U<<MJPEG_AHB_IDLE_LEN)-1)<<MJPEG_AHB_IDLE_POS))
#define MJPEG_REG_FRAME_CNT_TRGR_INT                            MJPEG_REG_FRAME_CNT_TRGR_INT
#define MJPEG_REG_FRAME_CNT_TRGR_INT_POS                        (16U)
#define MJPEG_REG_FRAME_CNT_TRGR_INT_LEN                        (5U)
#define MJPEG_REG_FRAME_CNT_TRGR_INT_MSK                        (((1U<<MJPEG_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<MJPEG_REG_FRAME_CNT_TRGR_INT_POS)
#define MJPEG_REG_FRAME_CNT_TRGR_INT_UMSK                       (~(((1U<<MJPEG_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<MJPEG_REG_FRAME_CNT_TRGR_INT_POS))
#define MJPEG_REG_INT_IDLE_EN                                   MJPEG_REG_INT_IDLE_EN
#define MJPEG_REG_INT_IDLE_EN_POS                               (21U)
#define MJPEG_REG_INT_IDLE_EN_LEN                               (1U)
#define MJPEG_REG_INT_IDLE_EN_MSK                               (((1U<<MJPEG_REG_INT_IDLE_EN_LEN)-1)<<MJPEG_REG_INT_IDLE_EN_POS)
#define MJPEG_REG_INT_IDLE_EN_UMSK                              (~(((1U<<MJPEG_REG_INT_IDLE_EN_LEN)-1)<<MJPEG_REG_INT_IDLE_EN_POS))
#define MJPEG_STS_IDLE_INT                                      MJPEG_STS_IDLE_INT
#define MJPEG_STS_IDLE_INT_POS                                  (22U)
#define MJPEG_STS_IDLE_INT_LEN                                  (1U)
#define MJPEG_STS_IDLE_INT_MSK                                  (((1U<<MJPEG_STS_IDLE_INT_LEN)-1)<<MJPEG_STS_IDLE_INT_POS)
#define MJPEG_STS_IDLE_INT_UMSK                                 (~(((1U<<MJPEG_STS_IDLE_INT_LEN)-1)<<MJPEG_STS_IDLE_INT_POS))
#define MJPEG_FRAME_VALID_CNT                                   MJPEG_FRAME_VALID_CNT
#define MJPEG_FRAME_VALID_CNT_POS                               (24U)
#define MJPEG_FRAME_VALID_CNT_LEN                               (5U)
#define MJPEG_FRAME_VALID_CNT_MSK                               (((1U<<MJPEG_FRAME_VALID_CNT_LEN)-1)<<MJPEG_FRAME_VALID_CNT_POS)
#define MJPEG_FRAME_VALID_CNT_UMSK                              (~(((1U<<MJPEG_FRAME_VALID_CNT_LEN)-1)<<MJPEG_FRAME_VALID_CNT_POS))
#define MJPEG_REG_INT_SWAP_EN                                   MJPEG_REG_INT_SWAP_EN
#define MJPEG_REG_INT_SWAP_EN_POS                               (29U)
#define MJPEG_REG_INT_SWAP_EN_LEN                               (1U)
#define MJPEG_REG_INT_SWAP_EN_MSK                               (((1U<<MJPEG_REG_INT_SWAP_EN_LEN)-1)<<MJPEG_REG_INT_SWAP_EN_POS)
#define MJPEG_REG_INT_SWAP_EN_UMSK                              (~(((1U<<MJPEG_REG_INT_SWAP_EN_LEN)-1)<<MJPEG_REG_INT_SWAP_EN_POS))
#define MJPEG_STS_SWAP_INT                                      MJPEG_STS_SWAP_INT
#define MJPEG_STS_SWAP_INT_POS                                  (30U)
#define MJPEG_STS_SWAP_INT_LEN                                  (1U)
#define MJPEG_STS_SWAP_INT_MSK                                  (((1U<<MJPEG_STS_SWAP_INT_LEN)-1)<<MJPEG_STS_SWAP_INT_POS)
#define MJPEG_STS_SWAP_INT_UMSK                                 (~(((1U<<MJPEG_STS_SWAP_INT_LEN)-1)<<MJPEG_STS_SWAP_INT_POS))

/* 0x20 : mjpeg_frame_fifo_pop */
#define MJPEG_FRAME_FIFO_POP_OFFSET                             (0x20)
#define MJPEG_RFIFO_POP                                         MJPEG_RFIFO_POP
#define MJPEG_RFIFO_POP_POS                                     (0U)
#define MJPEG_RFIFO_POP_LEN                                     (1U)
#define MJPEG_RFIFO_POP_MSK                                     (((1U<<MJPEG_RFIFO_POP_LEN)-1)<<MJPEG_RFIFO_POP_POS)
#define MJPEG_RFIFO_POP_UMSK                                    (~(((1U<<MJPEG_RFIFO_POP_LEN)-1)<<MJPEG_RFIFO_POP_POS))
#define MJPEG_REG_W_SWAP_CLR                                    MJPEG_REG_W_SWAP_CLR
#define MJPEG_REG_W_SWAP_CLR_POS                                (1U)
#define MJPEG_REG_W_SWAP_CLR_LEN                                (1U)
#define MJPEG_REG_W_SWAP_CLR_MSK                                (((1U<<MJPEG_REG_W_SWAP_CLR_LEN)-1)<<MJPEG_REG_W_SWAP_CLR_POS)
#define MJPEG_REG_W_SWAP_CLR_UMSK                               (~(((1U<<MJPEG_REG_W_SWAP_CLR_LEN)-1)<<MJPEG_REG_W_SWAP_CLR_POS))
#define MJPEG_REG_INT_NORMAL_CLR                                MJPEG_REG_INT_NORMAL_CLR
#define MJPEG_REG_INT_NORMAL_CLR_POS                            (8U)
#define MJPEG_REG_INT_NORMAL_CLR_LEN                            (1U)
#define MJPEG_REG_INT_NORMAL_CLR_MSK                            (((1U<<MJPEG_REG_INT_NORMAL_CLR_LEN)-1)<<MJPEG_REG_INT_NORMAL_CLR_POS)
#define MJPEG_REG_INT_NORMAL_CLR_UMSK                           (~(((1U<<MJPEG_REG_INT_NORMAL_CLR_LEN)-1)<<MJPEG_REG_INT_NORMAL_CLR_POS))
#define MJPEG_REG_INT_CAM_CLR                                   MJPEG_REG_INT_CAM_CLR
#define MJPEG_REG_INT_CAM_CLR_POS                               (9U)
#define MJPEG_REG_INT_CAM_CLR_LEN                               (1U)
#define MJPEG_REG_INT_CAM_CLR_MSK                               (((1U<<MJPEG_REG_INT_CAM_CLR_LEN)-1)<<MJPEG_REG_INT_CAM_CLR_POS)
#define MJPEG_REG_INT_CAM_CLR_UMSK                              (~(((1U<<MJPEG_REG_INT_CAM_CLR_LEN)-1)<<MJPEG_REG_INT_CAM_CLR_POS))
#define MJPEG_REG_INT_MEM_CLR                                   MJPEG_REG_INT_MEM_CLR
#define MJPEG_REG_INT_MEM_CLR_POS                               (10U)
#define MJPEG_REG_INT_MEM_CLR_LEN                               (1U)
#define MJPEG_REG_INT_MEM_CLR_MSK                               (((1U<<MJPEG_REG_INT_MEM_CLR_LEN)-1)<<MJPEG_REG_INT_MEM_CLR_POS)
#define MJPEG_REG_INT_MEM_CLR_UMSK                              (~(((1U<<MJPEG_REG_INT_MEM_CLR_LEN)-1)<<MJPEG_REG_INT_MEM_CLR_POS))
#define MJPEG_REG_INT_FRAME_CLR                                 MJPEG_REG_INT_FRAME_CLR
#define MJPEG_REG_INT_FRAME_CLR_POS                             (11U)
#define MJPEG_REG_INT_FRAME_CLR_LEN                             (1U)
#define MJPEG_REG_INT_FRAME_CLR_MSK                             (((1U<<MJPEG_REG_INT_FRAME_CLR_LEN)-1)<<MJPEG_REG_INT_FRAME_CLR_POS)
#define MJPEG_REG_INT_FRAME_CLR_UMSK                            (~(((1U<<MJPEG_REG_INT_FRAME_CLR_LEN)-1)<<MJPEG_REG_INT_FRAME_CLR_POS))
#define MJPEG_REG_INT_IDLE_CLR                                  MJPEG_REG_INT_IDLE_CLR
#define MJPEG_REG_INT_IDLE_CLR_POS                              (12U)
#define MJPEG_REG_INT_IDLE_CLR_LEN                              (1U)
#define MJPEG_REG_INT_IDLE_CLR_MSK                              (((1U<<MJPEG_REG_INT_IDLE_CLR_LEN)-1)<<MJPEG_REG_INT_IDLE_CLR_POS)
#define MJPEG_REG_INT_IDLE_CLR_UMSK                             (~(((1U<<MJPEG_REG_INT_IDLE_CLR_LEN)-1)<<MJPEG_REG_INT_IDLE_CLR_POS))
#define MJPEG_REG_INT_SWAP_CLR                                  MJPEG_REG_INT_SWAP_CLR
#define MJPEG_REG_INT_SWAP_CLR_POS                              (13U)
#define MJPEG_REG_INT_SWAP_CLR_LEN                              (1U)
#define MJPEG_REG_INT_SWAP_CLR_MSK                              (((1U<<MJPEG_REG_INT_SWAP_CLR_LEN)-1)<<MJPEG_REG_INT_SWAP_CLR_POS)
#define MJPEG_REG_INT_SWAP_CLR_UMSK                             (~(((1U<<MJPEG_REG_INT_SWAP_CLR_LEN)-1)<<MJPEG_REG_INT_SWAP_CLR_POS))

/* 0x24 : mjpeg_frame_size */
#define MJPEG_FRAME_SIZE_OFFSET                                 (0x24)
#define MJPEG_REG_FRAME_WBLK                                    MJPEG_REG_FRAME_WBLK
#define MJPEG_REG_FRAME_WBLK_POS                                (0U)
#define MJPEG_REG_FRAME_WBLK_LEN                                (12U)
#define MJPEG_REG_FRAME_WBLK_MSK                                (((1U<<MJPEG_REG_FRAME_WBLK_LEN)-1)<<MJPEG_REG_FRAME_WBLK_POS)
#define MJPEG_REG_FRAME_WBLK_UMSK                               (~(((1U<<MJPEG_REG_FRAME_WBLK_LEN)-1)<<MJPEG_REG_FRAME_WBLK_POS))
#define MJPEG_REG_FRAME_HBLK                                    MJPEG_REG_FRAME_HBLK
#define MJPEG_REG_FRAME_HBLK_POS                                (16U)
#define MJPEG_REG_FRAME_HBLK_LEN                                (12U)
#define MJPEG_REG_FRAME_HBLK_MSK                                (((1U<<MJPEG_REG_FRAME_HBLK_LEN)-1)<<MJPEG_REG_FRAME_HBLK_POS)
#define MJPEG_REG_FRAME_HBLK_UMSK                               (~(((1U<<MJPEG_REG_FRAME_HBLK_LEN)-1)<<MJPEG_REG_FRAME_HBLK_POS))

/* 0x28 : mjpeg_header_byte */
#define MJPEG_HEADER_BYTE_OFFSET                                (0x28)
#define MJPEG_REG_HEAD_BYTE                                     MJPEG_REG_HEAD_BYTE
#define MJPEG_REG_HEAD_BYTE_POS                                 (0U)
#define MJPEG_REG_HEAD_BYTE_LEN                                 (12U)
#define MJPEG_REG_HEAD_BYTE_MSK                                 (((1U<<MJPEG_REG_HEAD_BYTE_LEN)-1)<<MJPEG_REG_HEAD_BYTE_POS)
#define MJPEG_REG_HEAD_BYTE_UMSK                                (~(((1U<<MJPEG_REG_HEAD_BYTE_LEN)-1)<<MJPEG_REG_HEAD_BYTE_POS))
#define MJPEG_REG_TAIL_EXP                                      MJPEG_REG_TAIL_EXP
#define MJPEG_REG_TAIL_EXP_POS                                  (16U)
#define MJPEG_REG_TAIL_EXP_LEN                                  (1U)
#define MJPEG_REG_TAIL_EXP_MSK                                  (((1U<<MJPEG_REG_TAIL_EXP_LEN)-1)<<MJPEG_REG_TAIL_EXP_POS)
#define MJPEG_REG_TAIL_EXP_UMSK                                 (~(((1U<<MJPEG_REG_TAIL_EXP_LEN)-1)<<MJPEG_REG_TAIL_EXP_POS))

/* 0x30 : mjpeg_swap_mode */
#define MJPEG_SWAP_MODE_OFFSET                                  (0x30)
#define MJPEG_REG_W_SWAP_MODE                                   MJPEG_REG_W_SWAP_MODE
#define MJPEG_REG_W_SWAP_MODE_POS                               (0U)
#define MJPEG_REG_W_SWAP_MODE_LEN                               (1U)
#define MJPEG_REG_W_SWAP_MODE_MSK                               (((1U<<MJPEG_REG_W_SWAP_MODE_LEN)-1)<<MJPEG_REG_W_SWAP_MODE_POS)
#define MJPEG_REG_W_SWAP_MODE_UMSK                              (~(((1U<<MJPEG_REG_W_SWAP_MODE_LEN)-1)<<MJPEG_REG_W_SWAP_MODE_POS))
#define MJPEG_STS_SWAP0_FULL                                    MJPEG_STS_SWAP0_FULL
#define MJPEG_STS_SWAP0_FULL_POS                                (8U)
#define MJPEG_STS_SWAP0_FULL_LEN                                (1U)
#define MJPEG_STS_SWAP0_FULL_MSK                                (((1U<<MJPEG_STS_SWAP0_FULL_LEN)-1)<<MJPEG_STS_SWAP0_FULL_POS)
#define MJPEG_STS_SWAP0_FULL_UMSK                               (~(((1U<<MJPEG_STS_SWAP0_FULL_LEN)-1)<<MJPEG_STS_SWAP0_FULL_POS))
#define MJPEG_STS_SWAP1_FULL                                    MJPEG_STS_SWAP1_FULL
#define MJPEG_STS_SWAP1_FULL_POS                                (9U)
#define MJPEG_STS_SWAP1_FULL_LEN                                (1U)
#define MJPEG_STS_SWAP1_FULL_MSK                                (((1U<<MJPEG_STS_SWAP1_FULL_LEN)-1)<<MJPEG_STS_SWAP1_FULL_POS)
#define MJPEG_STS_SWAP1_FULL_UMSK                               (~(((1U<<MJPEG_STS_SWAP1_FULL_LEN)-1)<<MJPEG_STS_SWAP1_FULL_POS))
#define MJPEG_STS_READ_SWAP_IDX                                 MJPEG_STS_READ_SWAP_IDX
#define MJPEG_STS_READ_SWAP_IDX_POS                             (10U)
#define MJPEG_STS_READ_SWAP_IDX_LEN                             (1U)
#define MJPEG_STS_READ_SWAP_IDX_MSK                             (((1U<<MJPEG_STS_READ_SWAP_IDX_LEN)-1)<<MJPEG_STS_READ_SWAP_IDX_POS)
#define MJPEG_STS_READ_SWAP_IDX_UMSK                            (~(((1U<<MJPEG_STS_READ_SWAP_IDX_LEN)-1)<<MJPEG_STS_READ_SWAP_IDX_POS))
#define MJPEG_STS_SWAP_FSTART                                   MJPEG_STS_SWAP_FSTART
#define MJPEG_STS_SWAP_FSTART_POS                               (11U)
#define MJPEG_STS_SWAP_FSTART_LEN                               (1U)
#define MJPEG_STS_SWAP_FSTART_MSK                               (((1U<<MJPEG_STS_SWAP_FSTART_LEN)-1)<<MJPEG_STS_SWAP_FSTART_POS)
#define MJPEG_STS_SWAP_FSTART_UMSK                              (~(((1U<<MJPEG_STS_SWAP_FSTART_LEN)-1)<<MJPEG_STS_SWAP_FSTART_POS))
#define MJPEG_STS_SWAP_FEND                                     MJPEG_STS_SWAP_FEND
#define MJPEG_STS_SWAP_FEND_POS                                 (12U)
#define MJPEG_STS_SWAP_FEND_LEN                                 (1U)
#define MJPEG_STS_SWAP_FEND_MSK                                 (((1U<<MJPEG_STS_SWAP_FEND_LEN)-1)<<MJPEG_STS_SWAP_FEND_POS)
#define MJPEG_STS_SWAP_FEND_UMSK                                (~(((1U<<MJPEG_STS_SWAP_FEND_LEN)-1)<<MJPEG_STS_SWAP_FEND_POS))

/* 0x34 : mjpeg_swap_bit_cnt */
#define MJPEG_SWAP_BIT_CNT_OFFSET                               (0x34)
#define MJPEG_FRAME_SWAP_END_BIT_CNT                            MJPEG_FRAME_SWAP_END_BIT_CNT
#define MJPEG_FRAME_SWAP_END_BIT_CNT_POS                        (0U)
#define MJPEG_FRAME_SWAP_END_BIT_CNT_LEN                        (32U)
#define MJPEG_FRAME_SWAP_END_BIT_CNT_MSK                        (((1U<<MJPEG_FRAME_SWAP_END_BIT_CNT_LEN)-1)<<MJPEG_FRAME_SWAP_END_BIT_CNT_POS)
#define MJPEG_FRAME_SWAP_END_BIT_CNT_UMSK                       (~(((1U<<MJPEG_FRAME_SWAP_END_BIT_CNT_LEN)-1)<<MJPEG_FRAME_SWAP_END_BIT_CNT_POS))

/* 0x38 : mjpeg_paket_ctrl */
#define MJPEG_PAKET_CTRL_OFFSET                                 (0x38)
#define MJPEG_REG_PKET_EN                                       MJPEG_REG_PKET_EN
#define MJPEG_REG_PKET_EN_POS                                   (0U)
#define MJPEG_REG_PKET_EN_LEN                                   (1U)
#define MJPEG_REG_PKET_EN_MSK                                   (((1U<<MJPEG_REG_PKET_EN_LEN)-1)<<MJPEG_REG_PKET_EN_POS)
#define MJPEG_REG_PKET_EN_UMSK                                  (~(((1U<<MJPEG_REG_PKET_EN_LEN)-1)<<MJPEG_REG_PKET_EN_POS))
#define MJPEG_REG_JEND_TO_PEND                                  MJPEG_REG_JEND_TO_PEND
#define MJPEG_REG_JEND_TO_PEND_POS                              (1U)
#define MJPEG_REG_JEND_TO_PEND_LEN                              (1U)
#define MJPEG_REG_JEND_TO_PEND_MSK                              (((1U<<MJPEG_REG_JEND_TO_PEND_LEN)-1)<<MJPEG_REG_JEND_TO_PEND_POS)
#define MJPEG_REG_JEND_TO_PEND_UMSK                             (~(((1U<<MJPEG_REG_JEND_TO_PEND_LEN)-1)<<MJPEG_REG_JEND_TO_PEND_POS))
#define MJPEG_REG_PKET_BODY_BYTE                                MJPEG_REG_PKET_BODY_BYTE
#define MJPEG_REG_PKET_BODY_BYTE_POS                            (16U)
#define MJPEG_REG_PKET_BODY_BYTE_LEN                            (16U)
#define MJPEG_REG_PKET_BODY_BYTE_MSK                            (((1U<<MJPEG_REG_PKET_BODY_BYTE_LEN)-1)<<MJPEG_REG_PKET_BODY_BYTE_POS)
#define MJPEG_REG_PKET_BODY_BYTE_UMSK                           (~(((1U<<MJPEG_REG_PKET_BODY_BYTE_LEN)-1)<<MJPEG_REG_PKET_BODY_BYTE_POS))

/* 0x3C : mjpeg_paket_head_tail */
#define MJPEG_PAKET_HEAD_TAIL_OFFSET                            (0x3C)
#define MJPEG_REG_PKET_HEAD_BYTE                                MJPEG_REG_PKET_HEAD_BYTE
#define MJPEG_REG_PKET_HEAD_BYTE_POS                            (0U)
#define MJPEG_REG_PKET_HEAD_BYTE_LEN                            (12U)
#define MJPEG_REG_PKET_HEAD_BYTE_MSK                            (((1U<<MJPEG_REG_PKET_HEAD_BYTE_LEN)-1)<<MJPEG_REG_PKET_HEAD_BYTE_POS)
#define MJPEG_REG_PKET_HEAD_BYTE_UMSK                           (~(((1U<<MJPEG_REG_PKET_HEAD_BYTE_LEN)-1)<<MJPEG_REG_PKET_HEAD_BYTE_POS))
#define MJPEG_REG_PKET_TAIL_BYTE                                MJPEG_REG_PKET_TAIL_BYTE
#define MJPEG_REG_PKET_TAIL_BYTE_POS                            (16U)
#define MJPEG_REG_PKET_TAIL_BYTE_LEN                            (12U)
#define MJPEG_REG_PKET_TAIL_BYTE_MSK                            (((1U<<MJPEG_REG_PKET_TAIL_BYTE_LEN)-1)<<MJPEG_REG_PKET_TAIL_BYTE_POS)
#define MJPEG_REG_PKET_TAIL_BYTE_UMSK                           (~(((1U<<MJPEG_REG_PKET_TAIL_BYTE_LEN)-1)<<MJPEG_REG_PKET_TAIL_BYTE_POS))

/* 0x40 : mjpeg_Y_frame_read_status_1 */
#define MJPEG_Y_FRAME_READ_STATUS_1_OFFSET                      (0x40)
#define MJPEG_YY_MEM_HBLK_R                                     MJPEG_YY_MEM_HBLK_R
#define MJPEG_YY_MEM_HBLK_R_POS                                 (0U)
#define MJPEG_YY_MEM_HBLK_R_LEN                                 (13U)
#define MJPEG_YY_MEM_HBLK_R_MSK                                 (((1U<<MJPEG_YY_MEM_HBLK_R_LEN)-1)<<MJPEG_YY_MEM_HBLK_R_POS)
#define MJPEG_YY_MEM_HBLK_R_UMSK                                (~(((1U<<MJPEG_YY_MEM_HBLK_R_LEN)-1)<<MJPEG_YY_MEM_HBLK_R_POS))
#define MJPEG_YY_FRM_HBLK_R                                     MJPEG_YY_FRM_HBLK_R
#define MJPEG_YY_FRM_HBLK_R_POS                                 (16U)
#define MJPEG_YY_FRM_HBLK_R_LEN                                 (13U)
#define MJPEG_YY_FRM_HBLK_R_MSK                                 (((1U<<MJPEG_YY_FRM_HBLK_R_LEN)-1)<<MJPEG_YY_FRM_HBLK_R_POS)
#define MJPEG_YY_FRM_HBLK_R_UMSK                                (~(((1U<<MJPEG_YY_FRM_HBLK_R_LEN)-1)<<MJPEG_YY_FRM_HBLK_R_POS))

/* 0x44 : mjpeg_Y_frame_read_status_2 */
#define MJPEG_Y_FRAME_READ_STATUS_2_OFFSET                      (0x44)
#define MJPEG_YY_WBLK_R                                         MJPEG_YY_WBLK_R
#define MJPEG_YY_WBLK_R_POS                                     (0U)
#define MJPEG_YY_WBLK_R_LEN                                     (13U)
#define MJPEG_YY_WBLK_R_MSK                                     (((1U<<MJPEG_YY_WBLK_R_LEN)-1)<<MJPEG_YY_WBLK_R_POS)
#define MJPEG_YY_WBLK_R_UMSK                                    (~(((1U<<MJPEG_YY_WBLK_R_LEN)-1)<<MJPEG_YY_WBLK_R_POS))
#define MJPEG_YY_MEM_RND_R                                      MJPEG_YY_MEM_RND_R
#define MJPEG_YY_MEM_RND_R_POS                                  (16U)
#define MJPEG_YY_MEM_RND_R_LEN                                  (8U)
#define MJPEG_YY_MEM_RND_R_MSK                                  (((1U<<MJPEG_YY_MEM_RND_R_LEN)-1)<<MJPEG_YY_MEM_RND_R_POS)
#define MJPEG_YY_MEM_RND_R_UMSK                                 (~(((1U<<MJPEG_YY_MEM_RND_R_LEN)-1)<<MJPEG_YY_MEM_RND_R_POS))
#define MJPEG_YY_FRM_CNT_R                                      MJPEG_YY_FRM_CNT_R
#define MJPEG_YY_FRM_CNT_R_POS                                  (24U)
#define MJPEG_YY_FRM_CNT_R_LEN                                  (8U)
#define MJPEG_YY_FRM_CNT_R_MSK                                  (((1U<<MJPEG_YY_FRM_CNT_R_LEN)-1)<<MJPEG_YY_FRM_CNT_R_POS)
#define MJPEG_YY_FRM_CNT_R_UMSK                                 (~(((1U<<MJPEG_YY_FRM_CNT_R_LEN)-1)<<MJPEG_YY_FRM_CNT_R_POS))

/* 0x48 : mjpeg_Y_frame_write_status */
#define MJPEG_Y_FRAME_WRITE_STATUS_OFFSET                       (0x48)
#define MJPEG_YY_MEM_HBLK_W                                     MJPEG_YY_MEM_HBLK_W
#define MJPEG_YY_MEM_HBLK_W_POS                                 (0U)
#define MJPEG_YY_MEM_HBLK_W_LEN                                 (13U)
#define MJPEG_YY_MEM_HBLK_W_MSK                                 (((1U<<MJPEG_YY_MEM_HBLK_W_LEN)-1)<<MJPEG_YY_MEM_HBLK_W_POS)
#define MJPEG_YY_MEM_HBLK_W_UMSK                                (~(((1U<<MJPEG_YY_MEM_HBLK_W_LEN)-1)<<MJPEG_YY_MEM_HBLK_W_POS))
#define MJPEG_YY_MEM_RND_W                                      MJPEG_YY_MEM_RND_W
#define MJPEG_YY_MEM_RND_W_POS                                  (16U)
#define MJPEG_YY_MEM_RND_W_LEN                                  (8U)
#define MJPEG_YY_MEM_RND_W_MSK                                  (((1U<<MJPEG_YY_MEM_RND_W_LEN)-1)<<MJPEG_YY_MEM_RND_W_POS)
#define MJPEG_YY_MEM_RND_W_UMSK                                 (~(((1U<<MJPEG_YY_MEM_RND_W_LEN)-1)<<MJPEG_YY_MEM_RND_W_POS))
#define MJPEG_YY_FRM_CNT_W                                      MJPEG_YY_FRM_CNT_W
#define MJPEG_YY_FRM_CNT_W_POS                                  (24U)
#define MJPEG_YY_FRM_CNT_W_LEN                                  (8U)
#define MJPEG_YY_FRM_CNT_W_MSK                                  (((1U<<MJPEG_YY_FRM_CNT_W_LEN)-1)<<MJPEG_YY_FRM_CNT_W_POS)
#define MJPEG_YY_FRM_CNT_W_UMSK                                 (~(((1U<<MJPEG_YY_FRM_CNT_W_LEN)-1)<<MJPEG_YY_FRM_CNT_W_POS))

/* 0x4C : mjpeg_UV_frame_read_status_1 */
#define MJPEG_UV_FRAME_READ_STATUS_1_OFFSET                     (0x4C)
#define MJPEG_UV_MEM_HBLK_R                                     MJPEG_UV_MEM_HBLK_R
#define MJPEG_UV_MEM_HBLK_R_POS                                 (0U)
#define MJPEG_UV_MEM_HBLK_R_LEN                                 (13U)
#define MJPEG_UV_MEM_HBLK_R_MSK                                 (((1U<<MJPEG_UV_MEM_HBLK_R_LEN)-1)<<MJPEG_UV_MEM_HBLK_R_POS)
#define MJPEG_UV_MEM_HBLK_R_UMSK                                (~(((1U<<MJPEG_UV_MEM_HBLK_R_LEN)-1)<<MJPEG_UV_MEM_HBLK_R_POS))
#define MJPEG_UV_FRM_HBLK_R                                     MJPEG_UV_FRM_HBLK_R
#define MJPEG_UV_FRM_HBLK_R_POS                                 (16U)
#define MJPEG_UV_FRM_HBLK_R_LEN                                 (13U)
#define MJPEG_UV_FRM_HBLK_R_MSK                                 (((1U<<MJPEG_UV_FRM_HBLK_R_LEN)-1)<<MJPEG_UV_FRM_HBLK_R_POS)
#define MJPEG_UV_FRM_HBLK_R_UMSK                                (~(((1U<<MJPEG_UV_FRM_HBLK_R_LEN)-1)<<MJPEG_UV_FRM_HBLK_R_POS))

/* 0x50 : mjpeg_UV_frame_read_status_2 */
#define MJPEG_UV_FRAME_READ_STATUS_2_OFFSET                     (0x50)
#define MJPEG_UV_WBLK_R                                         MJPEG_UV_WBLK_R
#define MJPEG_UV_WBLK_R_POS                                     (0U)
#define MJPEG_UV_WBLK_R_LEN                                     (13U)
#define MJPEG_UV_WBLK_R_MSK                                     (((1U<<MJPEG_UV_WBLK_R_LEN)-1)<<MJPEG_UV_WBLK_R_POS)
#define MJPEG_UV_WBLK_R_UMSK                                    (~(((1U<<MJPEG_UV_WBLK_R_LEN)-1)<<MJPEG_UV_WBLK_R_POS))
#define MJPEG_UV_MEM_RND_R                                      MJPEG_UV_MEM_RND_R
#define MJPEG_UV_MEM_RND_R_POS                                  (16U)
#define MJPEG_UV_MEM_RND_R_LEN                                  (8U)
#define MJPEG_UV_MEM_RND_R_MSK                                  (((1U<<MJPEG_UV_MEM_RND_R_LEN)-1)<<MJPEG_UV_MEM_RND_R_POS)
#define MJPEG_UV_MEM_RND_R_UMSK                                 (~(((1U<<MJPEG_UV_MEM_RND_R_LEN)-1)<<MJPEG_UV_MEM_RND_R_POS))
#define MJPEG_UV_FRM_CNT_R                                      MJPEG_UV_FRM_CNT_R
#define MJPEG_UV_FRM_CNT_R_POS                                  (24U)
#define MJPEG_UV_FRM_CNT_R_LEN                                  (8U)
#define MJPEG_UV_FRM_CNT_R_MSK                                  (((1U<<MJPEG_UV_FRM_CNT_R_LEN)-1)<<MJPEG_UV_FRM_CNT_R_POS)
#define MJPEG_UV_FRM_CNT_R_UMSK                                 (~(((1U<<MJPEG_UV_FRM_CNT_R_LEN)-1)<<MJPEG_UV_FRM_CNT_R_POS))

/* 0x54 : mjpeg_UV_frame_write_status */
#define MJPEG_UV_FRAME_WRITE_STATUS_OFFSET                      (0x54)
#define MJPEG_UV_MEM_HBLK_W                                     MJPEG_UV_MEM_HBLK_W
#define MJPEG_UV_MEM_HBLK_W_POS                                 (0U)
#define MJPEG_UV_MEM_HBLK_W_LEN                                 (13U)
#define MJPEG_UV_MEM_HBLK_W_MSK                                 (((1U<<MJPEG_UV_MEM_HBLK_W_LEN)-1)<<MJPEG_UV_MEM_HBLK_W_POS)
#define MJPEG_UV_MEM_HBLK_W_UMSK                                (~(((1U<<MJPEG_UV_MEM_HBLK_W_LEN)-1)<<MJPEG_UV_MEM_HBLK_W_POS))
#define MJPEG_UV_MEM_RND_W                                      MJPEG_UV_MEM_RND_W
#define MJPEG_UV_MEM_RND_W_POS                                  (16U)
#define MJPEG_UV_MEM_RND_W_LEN                                  (8U)
#define MJPEG_UV_MEM_RND_W_MSK                                  (((1U<<MJPEG_UV_MEM_RND_W_LEN)-1)<<MJPEG_UV_MEM_RND_W_POS)
#define MJPEG_UV_MEM_RND_W_UMSK                                 (~(((1U<<MJPEG_UV_MEM_RND_W_LEN)-1)<<MJPEG_UV_MEM_RND_W_POS))
#define MJPEG_UV_FRM_CNT_W                                      MJPEG_UV_FRM_CNT_W
#define MJPEG_UV_FRM_CNT_W_POS                                  (24U)
#define MJPEG_UV_FRM_CNT_W_LEN                                  (8U)
#define MJPEG_UV_FRM_CNT_W_MSK                                  (((1U<<MJPEG_UV_FRM_CNT_W_LEN)-1)<<MJPEG_UV_FRM_CNT_W_POS)
#define MJPEG_UV_FRM_CNT_W_UMSK                                 (~(((1U<<MJPEG_UV_FRM_CNT_W_LEN)-1)<<MJPEG_UV_FRM_CNT_W_POS))

/* 0x80 : mjpeg_start_addr0 */
#define MJPEG_START_ADDR0_OFFSET                                (0x80)
#define MJPEG_FRAME_START_ADDR_0                                MJPEG_FRAME_START_ADDR_0
#define MJPEG_FRAME_START_ADDR_0_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_0_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_0_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_0_LEN)-1)<<MJPEG_FRAME_START_ADDR_0_POS)
#define MJPEG_FRAME_START_ADDR_0_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_0_LEN)-1)<<MJPEG_FRAME_START_ADDR_0_POS))

/* 0x84 : mjpeg_bit_cnt0 */
#define MJPEG_BIT_CNT0_OFFSET                                   (0x84)
#define MJPEG_FRAME_BIT_CNT_0                                   MJPEG_FRAME_BIT_CNT_0
#define MJPEG_FRAME_BIT_CNT_0_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_0_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_0_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_0_LEN)-1)<<MJPEG_FRAME_BIT_CNT_0_POS)
#define MJPEG_FRAME_BIT_CNT_0_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_0_LEN)-1)<<MJPEG_FRAME_BIT_CNT_0_POS))

/* 0x88 : mjpeg_start_addr1 */
#define MJPEG_START_ADDR1_OFFSET                                (0x88)
#define MJPEG_FRAME_START_ADDR_1                                MJPEG_FRAME_START_ADDR_1
#define MJPEG_FRAME_START_ADDR_1_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_1_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_1_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_1_LEN)-1)<<MJPEG_FRAME_START_ADDR_1_POS)
#define MJPEG_FRAME_START_ADDR_1_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_1_LEN)-1)<<MJPEG_FRAME_START_ADDR_1_POS))

/* 0x8C : mjpeg_bit_cnt1 */
#define MJPEG_BIT_CNT1_OFFSET                                   (0x8C)
#define MJPEG_FRAME_BIT_CNT_1                                   MJPEG_FRAME_BIT_CNT_1
#define MJPEG_FRAME_BIT_CNT_1_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_1_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_1_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_1_LEN)-1)<<MJPEG_FRAME_BIT_CNT_1_POS)
#define MJPEG_FRAME_BIT_CNT_1_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_1_LEN)-1)<<MJPEG_FRAME_BIT_CNT_1_POS))

/* 0x90 : mjpeg_start_addr2 */
#define MJPEG_START_ADDR2_OFFSET                                (0x90)
#define MJPEG_FRAME_START_ADDR_2                                MJPEG_FRAME_START_ADDR_2
#define MJPEG_FRAME_START_ADDR_2_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_2_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_2_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_2_LEN)-1)<<MJPEG_FRAME_START_ADDR_2_POS)
#define MJPEG_FRAME_START_ADDR_2_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_2_LEN)-1)<<MJPEG_FRAME_START_ADDR_2_POS))

/* 0x94 : mjpeg_bit_cnt2 */
#define MJPEG_BIT_CNT2_OFFSET                                   (0x94)
#define MJPEG_FRAME_BIT_CNT_2                                   MJPEG_FRAME_BIT_CNT_2
#define MJPEG_FRAME_BIT_CNT_2_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_2_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_2_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_2_LEN)-1)<<MJPEG_FRAME_BIT_CNT_2_POS)
#define MJPEG_FRAME_BIT_CNT_2_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_2_LEN)-1)<<MJPEG_FRAME_BIT_CNT_2_POS))

/* 0x98 : mjpeg_start_addr3 */
#define MJPEG_START_ADDR3_OFFSET                                (0x98)
#define MJPEG_FRAME_START_ADDR_3                                MJPEG_FRAME_START_ADDR_3
#define MJPEG_FRAME_START_ADDR_3_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_3_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_3_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_3_LEN)-1)<<MJPEG_FRAME_START_ADDR_3_POS)
#define MJPEG_FRAME_START_ADDR_3_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_3_LEN)-1)<<MJPEG_FRAME_START_ADDR_3_POS))

/* 0x9C : mjpeg_bit_cnt3 */
#define MJPEG_BIT_CNT3_OFFSET                                   (0x9C)
#define MJPEG_FRAME_BIT_CNT_3                                   MJPEG_FRAME_BIT_CNT_3
#define MJPEG_FRAME_BIT_CNT_3_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_3_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_3_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_3_LEN)-1)<<MJPEG_FRAME_BIT_CNT_3_POS)
#define MJPEG_FRAME_BIT_CNT_3_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_3_LEN)-1)<<MJPEG_FRAME_BIT_CNT_3_POS))

/* 0xA0 : mjpeg_start_addr4 */
#define MJPEG_START_ADDR4_OFFSET                                (0xA0)
#define MJPEG_FRAME_START_ADDR_4                                MJPEG_FRAME_START_ADDR_4
#define MJPEG_FRAME_START_ADDR_4_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_4_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_4_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_4_LEN)-1)<<MJPEG_FRAME_START_ADDR_4_POS)
#define MJPEG_FRAME_START_ADDR_4_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_4_LEN)-1)<<MJPEG_FRAME_START_ADDR_4_POS))

/* 0xA4 : mjpeg_bit_cnt4 */
#define MJPEG_BIT_CNT4_OFFSET                                   (0xA4)
#define MJPEG_FRAME_BIT_CNT_4                                   MJPEG_FRAME_BIT_CNT_4
#define MJPEG_FRAME_BIT_CNT_4_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_4_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_4_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_4_LEN)-1)<<MJPEG_FRAME_BIT_CNT_4_POS)
#define MJPEG_FRAME_BIT_CNT_4_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_4_LEN)-1)<<MJPEG_FRAME_BIT_CNT_4_POS))

/* 0xA8 : mjpeg_start_addr5 */
#define MJPEG_START_ADDR5_OFFSET                                (0xA8)
#define MJPEG_FRAME_START_ADDR_5                                MJPEG_FRAME_START_ADDR_5
#define MJPEG_FRAME_START_ADDR_5_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_5_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_5_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_5_LEN)-1)<<MJPEG_FRAME_START_ADDR_5_POS)
#define MJPEG_FRAME_START_ADDR_5_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_5_LEN)-1)<<MJPEG_FRAME_START_ADDR_5_POS))

/* 0xAC : mjpeg_bit_cnt5 */
#define MJPEG_BIT_CNT5_OFFSET                                   (0xAC)
#define MJPEG_FRAME_BIT_CNT_5                                   MJPEG_FRAME_BIT_CNT_5
#define MJPEG_FRAME_BIT_CNT_5_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_5_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_5_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_5_LEN)-1)<<MJPEG_FRAME_BIT_CNT_5_POS)
#define MJPEG_FRAME_BIT_CNT_5_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_5_LEN)-1)<<MJPEG_FRAME_BIT_CNT_5_POS))

/* 0xB0 : mjpeg_start_addr6 */
#define MJPEG_START_ADDR6_OFFSET                                (0xB0)
#define MJPEG_FRAME_START_ADDR_6                                MJPEG_FRAME_START_ADDR_6
#define MJPEG_FRAME_START_ADDR_6_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_6_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_6_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_6_LEN)-1)<<MJPEG_FRAME_START_ADDR_6_POS)
#define MJPEG_FRAME_START_ADDR_6_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_6_LEN)-1)<<MJPEG_FRAME_START_ADDR_6_POS))

/* 0xB4 : mjpeg_bit_cnt6 */
#define MJPEG_BIT_CNT6_OFFSET                                   (0xB4)
#define MJPEG_FRAME_BIT_CNT_6                                   MJPEG_FRAME_BIT_CNT_6
#define MJPEG_FRAME_BIT_CNT_6_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_6_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_6_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_6_LEN)-1)<<MJPEG_FRAME_BIT_CNT_6_POS)
#define MJPEG_FRAME_BIT_CNT_6_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_6_LEN)-1)<<MJPEG_FRAME_BIT_CNT_6_POS))

/* 0xB8 : mjpeg_start_addr7 */
#define MJPEG_START_ADDR7_OFFSET                                (0xB8)
#define MJPEG_FRAME_START_ADDR_7                                MJPEG_FRAME_START_ADDR_7
#define MJPEG_FRAME_START_ADDR_7_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_7_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_7_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_7_LEN)-1)<<MJPEG_FRAME_START_ADDR_7_POS)
#define MJPEG_FRAME_START_ADDR_7_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_7_LEN)-1)<<MJPEG_FRAME_START_ADDR_7_POS))

/* 0xBC : mjpeg_bit_cnt7 */
#define MJPEG_BIT_CNT7_OFFSET                                   (0xBC)
#define MJPEG_FRAME_BIT_CNT_7                                   MJPEG_FRAME_BIT_CNT_7
#define MJPEG_FRAME_BIT_CNT_7_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_7_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_7_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_7_LEN)-1)<<MJPEG_FRAME_BIT_CNT_7_POS)
#define MJPEG_FRAME_BIT_CNT_7_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_7_LEN)-1)<<MJPEG_FRAME_BIT_CNT_7_POS))

/* 0xC0 : mjpeg_start_addr_8 */
#define MJPEG_START_ADDR_8_OFFSET                               (0xC0)
#define MJPEG_FRAME_START_ADDR_8                                MJPEG_FRAME_START_ADDR_8
#define MJPEG_FRAME_START_ADDR_8_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_8_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_8_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_8_LEN)-1)<<MJPEG_FRAME_START_ADDR_8_POS)
#define MJPEG_FRAME_START_ADDR_8_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_8_LEN)-1)<<MJPEG_FRAME_START_ADDR_8_POS))

/* 0xC4 : mjpeg_bit_cnt_8 */
#define MJPEG_BIT_CNT_8_OFFSET                                  (0xC4)
#define MJPEG_FRAME_BIT_CNT_8                                   MJPEG_FRAME_BIT_CNT_8
#define MJPEG_FRAME_BIT_CNT_8_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_8_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_8_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_8_LEN)-1)<<MJPEG_FRAME_BIT_CNT_8_POS)
#define MJPEG_FRAME_BIT_CNT_8_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_8_LEN)-1)<<MJPEG_FRAME_BIT_CNT_8_POS))

/* 0xC8 : mjpeg_start_addr_9 */
#define MJPEG_START_ADDR_9_OFFSET                               (0xC8)
#define MJPEG_FRAME_START_ADDR_9                                MJPEG_FRAME_START_ADDR_9
#define MJPEG_FRAME_START_ADDR_9_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_9_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_9_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_9_LEN)-1)<<MJPEG_FRAME_START_ADDR_9_POS)
#define MJPEG_FRAME_START_ADDR_9_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_9_LEN)-1)<<MJPEG_FRAME_START_ADDR_9_POS))

/* 0xCC : mjpeg_bit_cnt_9 */
#define MJPEG_BIT_CNT_9_OFFSET                                  (0xCC)
#define MJPEG_FRAME_BIT_CNT_9                                   MJPEG_FRAME_BIT_CNT_9
#define MJPEG_FRAME_BIT_CNT_9_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_9_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_9_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_9_LEN)-1)<<MJPEG_FRAME_BIT_CNT_9_POS)
#define MJPEG_FRAME_BIT_CNT_9_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_9_LEN)-1)<<MJPEG_FRAME_BIT_CNT_9_POS))

/* 0xD0 : mjpeg_start_addr_a */
#define MJPEG_START_ADDR_A_OFFSET                               (0xD0)
#define MJPEG_FRAME_START_ADDR_A                                MJPEG_FRAME_START_ADDR_A
#define MJPEG_FRAME_START_ADDR_A_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_A_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_A_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_A_LEN)-1)<<MJPEG_FRAME_START_ADDR_A_POS)
#define MJPEG_FRAME_START_ADDR_A_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_A_LEN)-1)<<MJPEG_FRAME_START_ADDR_A_POS))

/* 0xD4 : mjpeg_bit_cnt_a */
#define MJPEG_BIT_CNT_A_OFFSET                                  (0xD4)
#define MJPEG_FRAME_BIT_CNT_A                                   MJPEG_FRAME_BIT_CNT_A
#define MJPEG_FRAME_BIT_CNT_A_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_A_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_A_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_A_LEN)-1)<<MJPEG_FRAME_BIT_CNT_A_POS)
#define MJPEG_FRAME_BIT_CNT_A_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_A_LEN)-1)<<MJPEG_FRAME_BIT_CNT_A_POS))

/* 0xD8 : mjpeg_start_addr_b */
#define MJPEG_START_ADDR_B_OFFSET                               (0xD8)
#define MJPEG_FRAME_START_ADDR_B                                MJPEG_FRAME_START_ADDR_B
#define MJPEG_FRAME_START_ADDR_B_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_B_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_B_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_B_LEN)-1)<<MJPEG_FRAME_START_ADDR_B_POS)
#define MJPEG_FRAME_START_ADDR_B_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_B_LEN)-1)<<MJPEG_FRAME_START_ADDR_B_POS))

/* 0xDC : mjpeg_bit_cnt_b */
#define MJPEG_BIT_CNT_B_OFFSET                                  (0xDC)
#define MJPEG_FRAME_BIT_CNT_B                                   MJPEG_FRAME_BIT_CNT_B
#define MJPEG_FRAME_BIT_CNT_B_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_B_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_B_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_B_LEN)-1)<<MJPEG_FRAME_BIT_CNT_B_POS)
#define MJPEG_FRAME_BIT_CNT_B_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_B_LEN)-1)<<MJPEG_FRAME_BIT_CNT_B_POS))

/* 0xE0 : mjpeg_start_addr_c */
#define MJPEG_START_ADDR_C_OFFSET                               (0xE0)
#define MJPEG_FRAME_START_ADDR_C                                MJPEG_FRAME_START_ADDR_C
#define MJPEG_FRAME_START_ADDR_C_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_C_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_C_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_C_LEN)-1)<<MJPEG_FRAME_START_ADDR_C_POS)
#define MJPEG_FRAME_START_ADDR_C_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_C_LEN)-1)<<MJPEG_FRAME_START_ADDR_C_POS))

/* 0xE4 : mjpeg_bit_cnt_c */
#define MJPEG_BIT_CNT_C_OFFSET                                  (0xE4)
#define MJPEG_FRAME_BIT_CNT_C                                   MJPEG_FRAME_BIT_CNT_C
#define MJPEG_FRAME_BIT_CNT_C_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_C_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_C_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_C_LEN)-1)<<MJPEG_FRAME_BIT_CNT_C_POS)
#define MJPEG_FRAME_BIT_CNT_C_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_C_LEN)-1)<<MJPEG_FRAME_BIT_CNT_C_POS))

/* 0xE8 : mjpeg_start_addr_d */
#define MJPEG_START_ADDR_D_OFFSET                               (0xE8)
#define MJPEG_FRAME_START_ADDR_D                                MJPEG_FRAME_START_ADDR_D
#define MJPEG_FRAME_START_ADDR_D_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_D_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_D_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_D_LEN)-1)<<MJPEG_FRAME_START_ADDR_D_POS)
#define MJPEG_FRAME_START_ADDR_D_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_D_LEN)-1)<<MJPEG_FRAME_START_ADDR_D_POS))

/* 0xEC : mjpeg_bit_cnt_d */
#define MJPEG_BIT_CNT_D_OFFSET                                  (0xEC)
#define MJPEG_FRAME_BIT_CNT_D                                   MJPEG_FRAME_BIT_CNT_D
#define MJPEG_FRAME_BIT_CNT_D_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_D_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_D_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_D_LEN)-1)<<MJPEG_FRAME_BIT_CNT_D_POS)
#define MJPEG_FRAME_BIT_CNT_D_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_D_LEN)-1)<<MJPEG_FRAME_BIT_CNT_D_POS))

/* 0xF0 : mjpeg_start_addr_e */
#define MJPEG_START_ADDR_E_OFFSET                               (0xF0)
#define MJPEG_FRAME_START_ADDR_E                                MJPEG_FRAME_START_ADDR_E
#define MJPEG_FRAME_START_ADDR_E_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_E_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_E_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_E_LEN)-1)<<MJPEG_FRAME_START_ADDR_E_POS)
#define MJPEG_FRAME_START_ADDR_E_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_E_LEN)-1)<<MJPEG_FRAME_START_ADDR_E_POS))

/* 0xF4 : mjpeg_bit_cnt_e */
#define MJPEG_BIT_CNT_E_OFFSET                                  (0xF4)
#define MJPEG_FRAME_BIT_CNT_E                                   MJPEG_FRAME_BIT_CNT_E
#define MJPEG_FRAME_BIT_CNT_E_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_E_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_E_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_E_LEN)-1)<<MJPEG_FRAME_BIT_CNT_E_POS)
#define MJPEG_FRAME_BIT_CNT_E_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_E_LEN)-1)<<MJPEG_FRAME_BIT_CNT_E_POS))

/* 0xF8 : mjpeg_start_addr_f */
#define MJPEG_START_ADDR_F_OFFSET                               (0xF8)
#define MJPEG_FRAME_START_ADDR_F                                MJPEG_FRAME_START_ADDR_F
#define MJPEG_FRAME_START_ADDR_F_POS                            (0U)
#define MJPEG_FRAME_START_ADDR_F_LEN                            (32U)
#define MJPEG_FRAME_START_ADDR_F_MSK                            (((1U<<MJPEG_FRAME_START_ADDR_F_LEN)-1)<<MJPEG_FRAME_START_ADDR_F_POS)
#define MJPEG_FRAME_START_ADDR_F_UMSK                           (~(((1U<<MJPEG_FRAME_START_ADDR_F_LEN)-1)<<MJPEG_FRAME_START_ADDR_F_POS))

/* 0xFC : mjpeg_bit_cnt_f */
#define MJPEG_BIT_CNT_F_OFFSET                                  (0xFC)
#define MJPEG_FRAME_BIT_CNT_F                                   MJPEG_FRAME_BIT_CNT_F
#define MJPEG_FRAME_BIT_CNT_F_POS                               (0U)
#define MJPEG_FRAME_BIT_CNT_F_LEN                               (32U)
#define MJPEG_FRAME_BIT_CNT_F_MSK                               (((1U<<MJPEG_FRAME_BIT_CNT_F_LEN)-1)<<MJPEG_FRAME_BIT_CNT_F_POS)
#define MJPEG_FRAME_BIT_CNT_F_UMSK                              (~(((1U<<MJPEG_FRAME_BIT_CNT_F_LEN)-1)<<MJPEG_FRAME_BIT_CNT_F_POS))

/* 0x100 : mjpeg_q_mode0 */
#define MJPEG_Q_MODE0_OFFSET                                    (0x100)
#define MJPEG_FRAME_Q_MODE_0                                    MJPEG_FRAME_Q_MODE_0
#define MJPEG_FRAME_Q_MODE_0_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_0_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_0_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_0_LEN)-1)<<MJPEG_FRAME_Q_MODE_0_POS)
#define MJPEG_FRAME_Q_MODE_0_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_0_LEN)-1)<<MJPEG_FRAME_Q_MODE_0_POS))

/* 0x104 : mjpeg_q_mode1 */
#define MJPEG_Q_MODE1_OFFSET                                    (0x104)
#define MJPEG_FRAME_Q_MODE_1                                    MJPEG_FRAME_Q_MODE_1
#define MJPEG_FRAME_Q_MODE_1_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_1_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_1_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_1_LEN)-1)<<MJPEG_FRAME_Q_MODE_1_POS)
#define MJPEG_FRAME_Q_MODE_1_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_1_LEN)-1)<<MJPEG_FRAME_Q_MODE_1_POS))

/* 0x108 : mjpeg_q_mode2 */
#define MJPEG_Q_MODE2_OFFSET                                    (0x108)
#define MJPEG_FRAME_Q_MODE_2                                    MJPEG_FRAME_Q_MODE_2
#define MJPEG_FRAME_Q_MODE_2_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_2_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_2_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_2_LEN)-1)<<MJPEG_FRAME_Q_MODE_2_POS)
#define MJPEG_FRAME_Q_MODE_2_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_2_LEN)-1)<<MJPEG_FRAME_Q_MODE_2_POS))

/* 0x10C : mjpeg_q_mode3 */
#define MJPEG_Q_MODE3_OFFSET                                    (0x10C)
#define MJPEG_FRAME_Q_MODE_3                                    MJPEG_FRAME_Q_MODE_3
#define MJPEG_FRAME_Q_MODE_3_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_3_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_3_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_3_LEN)-1)<<MJPEG_FRAME_Q_MODE_3_POS)
#define MJPEG_FRAME_Q_MODE_3_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_3_LEN)-1)<<MJPEG_FRAME_Q_MODE_3_POS))

/* 0x110 : mjpeg_q_mode4 */
#define MJPEG_Q_MODE4_OFFSET                                    (0x110)
#define MJPEG_FRAME_Q_MODE_4                                    MJPEG_FRAME_Q_MODE_4
#define MJPEG_FRAME_Q_MODE_4_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_4_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_4_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_4_LEN)-1)<<MJPEG_FRAME_Q_MODE_4_POS)
#define MJPEG_FRAME_Q_MODE_4_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_4_LEN)-1)<<MJPEG_FRAME_Q_MODE_4_POS))

/* 0x114 : mjpeg_q_mode5 */
#define MJPEG_Q_MODE5_OFFSET                                    (0x114)
#define MJPEG_FRAME_Q_MODE_5                                    MJPEG_FRAME_Q_MODE_5
#define MJPEG_FRAME_Q_MODE_5_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_5_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_5_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_5_LEN)-1)<<MJPEG_FRAME_Q_MODE_5_POS)
#define MJPEG_FRAME_Q_MODE_5_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_5_LEN)-1)<<MJPEG_FRAME_Q_MODE_5_POS))

/* 0x118 : mjpeg_q_mode6 */
#define MJPEG_Q_MODE6_OFFSET                                    (0x118)
#define MJPEG_FRAME_Q_MODE_6                                    MJPEG_FRAME_Q_MODE_6
#define MJPEG_FRAME_Q_MODE_6_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_6_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_6_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_6_LEN)-1)<<MJPEG_FRAME_Q_MODE_6_POS)
#define MJPEG_FRAME_Q_MODE_6_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_6_LEN)-1)<<MJPEG_FRAME_Q_MODE_6_POS))

/* 0x11C : mjpeg_q_mode7 */
#define MJPEG_Q_MODE7_OFFSET                                    (0x11C)
#define MJPEG_FRAME_Q_MODE_7                                    MJPEG_FRAME_Q_MODE_7
#define MJPEG_FRAME_Q_MODE_7_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_7_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_7_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_7_LEN)-1)<<MJPEG_FRAME_Q_MODE_7_POS)
#define MJPEG_FRAME_Q_MODE_7_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_7_LEN)-1)<<MJPEG_FRAME_Q_MODE_7_POS))

/* 0x120 : mjpeg_q_mode_8 */
#define MJPEG_Q_MODE_8_OFFSET                                   (0x120)
#define MJPEG_FRAME_Q_MODE_8                                    MJPEG_FRAME_Q_MODE_8
#define MJPEG_FRAME_Q_MODE_8_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_8_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_8_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_8_LEN)-1)<<MJPEG_FRAME_Q_MODE_8_POS)
#define MJPEG_FRAME_Q_MODE_8_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_8_LEN)-1)<<MJPEG_FRAME_Q_MODE_8_POS))

/* 0x124 : mjpeg_q_mode_9 */
#define MJPEG_Q_MODE_9_OFFSET                                   (0x124)
#define MJPEG_FRAME_Q_MODE_9                                    MJPEG_FRAME_Q_MODE_9
#define MJPEG_FRAME_Q_MODE_9_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_9_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_9_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_9_LEN)-1)<<MJPEG_FRAME_Q_MODE_9_POS)
#define MJPEG_FRAME_Q_MODE_9_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_9_LEN)-1)<<MJPEG_FRAME_Q_MODE_9_POS))

/* 0x128 : mjpeg_q_mode_a */
#define MJPEG_Q_MODE_A_OFFSET                                   (0x128)
#define MJPEG_FRAME_Q_MODE_A                                    MJPEG_FRAME_Q_MODE_A
#define MJPEG_FRAME_Q_MODE_A_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_A_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_A_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_A_LEN)-1)<<MJPEG_FRAME_Q_MODE_A_POS)
#define MJPEG_FRAME_Q_MODE_A_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_A_LEN)-1)<<MJPEG_FRAME_Q_MODE_A_POS))

/* 0x12C : mjpeg_q_mode_b */
#define MJPEG_Q_MODE_B_OFFSET                                   (0x12C)
#define MJPEG_FRAME_Q_MODE_B                                    MJPEG_FRAME_Q_MODE_B
#define MJPEG_FRAME_Q_MODE_B_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_B_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_B_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_B_LEN)-1)<<MJPEG_FRAME_Q_MODE_B_POS)
#define MJPEG_FRAME_Q_MODE_B_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_B_LEN)-1)<<MJPEG_FRAME_Q_MODE_B_POS))

/* 0x130 : mjpeg_q_mode_c */
#define MJPEG_Q_MODE_C_OFFSET                                   (0x130)
#define MJPEG_FRAME_Q_MODE_C                                    MJPEG_FRAME_Q_MODE_C
#define MJPEG_FRAME_Q_MODE_C_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_C_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_C_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_C_LEN)-1)<<MJPEG_FRAME_Q_MODE_C_POS)
#define MJPEG_FRAME_Q_MODE_C_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_C_LEN)-1)<<MJPEG_FRAME_Q_MODE_C_POS))

/* 0x134 : mjpeg_q_mode_d */
#define MJPEG_Q_MODE_D_OFFSET                                   (0x134)
#define MJPEG_FRAME_Q_MODE_D                                    MJPEG_FRAME_Q_MODE_D
#define MJPEG_FRAME_Q_MODE_D_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_D_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_D_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_D_LEN)-1)<<MJPEG_FRAME_Q_MODE_D_POS)
#define MJPEG_FRAME_Q_MODE_D_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_D_LEN)-1)<<MJPEG_FRAME_Q_MODE_D_POS))

/* 0x138 : mjpeg_q_mode_e */
#define MJPEG_Q_MODE_E_OFFSET                                   (0x138)
#define MJPEG_FRAME_Q_MODE_E                                    MJPEG_FRAME_Q_MODE_E
#define MJPEG_FRAME_Q_MODE_E_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_E_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_E_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_E_LEN)-1)<<MJPEG_FRAME_Q_MODE_E_POS)
#define MJPEG_FRAME_Q_MODE_E_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_E_LEN)-1)<<MJPEG_FRAME_Q_MODE_E_POS))

/* 0x13C : mjpeg_q_mode_f */
#define MJPEG_Q_MODE_F_OFFSET                                   (0x13C)
#define MJPEG_FRAME_Q_MODE_F                                    MJPEG_FRAME_Q_MODE_F
#define MJPEG_FRAME_Q_MODE_F_POS                                (0U)
#define MJPEG_FRAME_Q_MODE_F_LEN                                (7U)
#define MJPEG_FRAME_Q_MODE_F_MSK                                (((1U<<MJPEG_FRAME_Q_MODE_F_LEN)-1)<<MJPEG_FRAME_Q_MODE_F_POS)
#define MJPEG_FRAME_Q_MODE_F_UMSK                               (~(((1U<<MJPEG_FRAME_Q_MODE_F_LEN)-1)<<MJPEG_FRAME_Q_MODE_F_POS))

/* 0x1F0 : mjpeg_debug */
#define MJPEG_DEBUG_OFFSET                                      (0x1F0)
#define MJPEG_REG_MJPEG_DBG_EN                                  MJPEG_REG_MJPEG_DBG_EN
#define MJPEG_REG_MJPEG_DBG_EN_POS                              (0U)
#define MJPEG_REG_MJPEG_DBG_EN_LEN                              (1U)
#define MJPEG_REG_MJPEG_DBG_EN_MSK                              (((1U<<MJPEG_REG_MJPEG_DBG_EN_LEN)-1)<<MJPEG_REG_MJPEG_DBG_EN_POS)
#define MJPEG_REG_MJPEG_DBG_EN_UMSK                             (~(((1U<<MJPEG_REG_MJPEG_DBG_EN_LEN)-1)<<MJPEG_REG_MJPEG_DBG_EN_POS))
#define MJPEG_REG_MJPEG_DBG_SEL                                 MJPEG_REG_MJPEG_DBG_SEL
#define MJPEG_REG_MJPEG_DBG_SEL_POS                             (4U)
#define MJPEG_REG_MJPEG_DBG_SEL_LEN                             (4U)
#define MJPEG_REG_MJPEG_DBG_SEL_MSK                             (((1U<<MJPEG_REG_MJPEG_DBG_SEL_LEN)-1)<<MJPEG_REG_MJPEG_DBG_SEL_POS)
#define MJPEG_REG_MJPEG_DBG_SEL_UMSK                            (~(((1U<<MJPEG_REG_MJPEG_DBG_SEL_LEN)-1)<<MJPEG_REG_MJPEG_DBG_SEL_POS))

/* 0x1FC : mjpeg_dummy_reg */
#define MJPEG_DUMMY_REG_OFFSET                                  (0x1FC)
#define MJPEG_DUMMY_REG                                         MJPEG_DUMMY_REG
#define MJPEG_DUMMY_REG_POS                                     (0U)
#define MJPEG_DUMMY_REG_LEN                                     (32U)
#define MJPEG_DUMMY_REG_MSK                                     (((1U<<MJPEG_DUMMY_REG_LEN)-1)<<MJPEG_DUMMY_REG_POS)
#define MJPEG_DUMMY_REG_UMSK                                    (~(((1U<<MJPEG_DUMMY_REG_LEN)-1)<<MJPEG_DUMMY_REG_POS))


struct  mjpeg_reg {
    /* 0x0 : mjpeg_control_1 */
    union {
        struct {
            uint32_t reg_mjpeg_enable               :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_mjpeg_bit_order            :  1; /* [    1],        r/w,        0x1 */
            uint32_t reg_order_u_even               :  1; /* [    2],        r/w,        0x1 */
            uint32_t reg_wr_over_stop               :  1; /* [    3],        r/w,        0x0 */
            uint32_t reg_last_hf_wblk_dmy           :  1; /* [    4],        r/w,        0x0 */
            uint32_t reg_last_hf_hblk_dmy           :  1; /* [    5],        r/w,        0x0 */
            uint32_t reg_reflect_dmy                :  1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_h_bust                     :  2; /* [ 9: 8],        r/w,        0x3 */
            uint32_t reserved_10_11                 :  2; /* [11:10],       rsvd,        0x0 */
            uint32_t reg_yuv_mode                   :  2; /* [13:12],        r/w,        0x0 */
            uint32_t reserved_14_15                 :  2; /* [15:14],       rsvd,        0x0 */
            uint32_t reg_q_mode                     :  7; /* [22:16],        r/w,       0x32 */
            uint32_t reserved_23                    :  1; /* [   23],       rsvd,        0x0 */
            uint32_t reg_y0_order                   :  2; /* [25:24],        r/w,        0x0 */
            uint32_t reg_u0_order                   :  2; /* [27:26],        r/w,        0x1 */
            uint32_t reg_y1_order                   :  2; /* [29:28],        r/w,        0x2 */
            uint32_t reg_v0_order                   :  2; /* [31:30],        r/w,        0x3 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_1;

    /* 0x4 : mjpeg_control_2 */
    union {
        struct {
            uint32_t reg_sw_frame                   :  5; /* [ 4: 0],        r/w,        0x0 */
            uint32_t reserved_5_7                   :  3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t reg_mjpeg_sw_mode              :  1; /* [    8],        r/w,        0x0 */
            uint32_t reg_mjpeg_sw_run               :  1; /* [    9],        r/w,        0x0 */
            uint32_t reserved_10_11                 :  2; /* [11:10],       rsvd,        0x0 */
            uint32_t reg_yy_dvp2ahb_lsel            :  1; /* [   12],        r/w,        0x0 */
            uint32_t reg_yy_dvp2ahb_fsel            :  1; /* [   13],        r/w,        0x0 */
            uint32_t reg_uv_dvp2ahb_lsel            :  1; /* [   14],        r/w,        0x0 */
            uint32_t reg_uv_dvp2ahb_fsel            :  1; /* [   15],        r/w,        0x0 */
            uint32_t reg_mjpeg_wait_cycle           : 16; /* [31:16],        r/w,      0x400 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_2;

    /* 0x08 : mjpeg_yy_frame_addr */
    union {
        struct {
            uint32_t reg_yy_addr_start              : 32; /* [31: 0],        r/w, 0x80000000L */
        }BF;
        uint32_t WORD;
    } mjpeg_yy_frame_addr;

    /* 0x0C : mjpeg_uv_frame_addr */
    union {
        struct {
            uint32_t reg_uv_addr_start              : 32; /* [31: 0],        r/w, 0x80000000L */
        }BF;
        uint32_t WORD;
    } mjpeg_uv_frame_addr;

    /* 0x10 : mjpeg_yuv_mem */
    union {
        struct {
            uint32_t reg_yy_mem_hblk                : 13; /* [12: 0],        r/w,        0x2 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_uv_mem_hblk                : 13; /* [28:16],        r/w,        0x2 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_yuv_mem;

    /* 0x14 : jpeg_frame_addr */
    union {
        struct {
            uint32_t reg_w_addr_start               : 32; /* [31: 0],        r/w, 0x80400000L */
        }BF;
        uint32_t WORD;
    } jpeg_frame_addr;

    /* 0x18 : jpeg_store_memory */
    union {
        struct {
            uint32_t reg_w_burst_cnt                : 32; /* [31: 0],        r/w,     0x4000 */
        }BF;
        uint32_t WORD;
    } jpeg_store_memory;

    /* 0x1C : mjpeg_control_3 */
    union {
        struct {
            uint32_t reg_int_normal_en              :  1; /* [    0],        r/w,        0x1 */
            uint32_t reg_int_cam_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t reg_int_mem_en                 :  1; /* [    2],        r/w,        0x0 */
            uint32_t reg_int_frame_en               :  1; /* [    3],        r/w,        0x0 */
            uint32_t sts_normal_int                 :  1; /* [    4],          r,        0x0 */
            uint32_t sts_cam_int                    :  1; /* [    5],          r,        0x0 */
            uint32_t sts_mem_int                    :  1; /* [    6],          r,        0x0 */
            uint32_t sts_frame_int                  :  1; /* [    7],          r,        0x0 */
            uint32_t mjpeg_idle                     :  1; /* [    8],          r,        0x1 */
            uint32_t mjpeg_func                     :  1; /* [    9],          r,        0x0 */
            uint32_t mjpeg_wait                     :  1; /* [   10],          r,        0x0 */
            uint32_t mjpeg_flsh                     :  1; /* [   11],          r,        0x0 */
            uint32_t mjpeg_mans                     :  1; /* [   12],          r,        0x0 */
            uint32_t mjpeg_manf                     :  1; /* [   13],          r,        0x0 */
            uint32_t ahb_idle                       :  1; /* [   14],          r,        0x0 */
            uint32_t reserved_15                    :  1; /* [   15],       rsvd,        0x0 */
            uint32_t reg_frame_cnt_trgr_int         :  5; /* [20:16],        r/w,        0x0 */
            uint32_t reg_int_idle_en                :  1; /* [   21],        r/w,        0x0 */
            uint32_t sts_idle_int                   :  1; /* [   22],          r,        0x0 */
            uint32_t reserved_23                    :  1; /* [   23],       rsvd,        0x0 */
            uint32_t frame_valid_cnt                :  5; /* [28:24],          r,        0x0 */
            uint32_t reg_int_swap_en                :  1; /* [   29],        r/w,        0x0 */
            uint32_t sts_swap_int                   :  1; /* [   30],          r,        0x0 */
            uint32_t reserved_31                    :  1; /* [   31],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_3;

    /* 0x20 : mjpeg_frame_fifo_pop */
    union {
        struct {
            uint32_t rfifo_pop                      :  1; /* [    0],        w1p,        0x0 */
            uint32_t reg_w_swap_clr                 :  1; /* [    1],        w1p,        0x0 */
            uint32_t reserved_2_7                   :  6; /* [ 7: 2],       rsvd,        0x0 */
            uint32_t reg_int_normal_clr             :  1; /* [    8],        w1p,        0x0 */
            uint32_t reg_int_cam_clr                :  1; /* [    9],        w1p,        0x0 */
            uint32_t reg_int_mem_clr                :  1; /* [   10],        w1p,        0x0 */
            uint32_t reg_int_frame_clr              :  1; /* [   11],        w1p,        0x0 */
            uint32_t reg_int_idle_clr               :  1; /* [   12],        w1p,        0x0 */
            uint32_t reg_int_swap_clr               :  1; /* [   13],        w1p,        0x0 */
            uint32_t reserved_14_31                 : 18; /* [31:14],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_frame_fifo_pop;

    /* 0x24 : mjpeg_frame_size */
    union {
        struct {
            uint32_t reg_frame_wblk                 : 12; /* [11: 0],        r/w,        0xf */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t reg_frame_hblk                 : 12; /* [27:16],        r/w,       0x14 */
            uint32_t reserved_28_31                 :  4; /* [31:28],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_frame_size;

    /* 0x28 : mjpeg_header_byte */
    union {
        struct {
            uint32_t reg_head_byte                  : 12; /* [11: 0],        r/w,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t reg_tail_exp                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t reserved_17_31                 : 15; /* [31:17],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_header_byte;

    /* 0x2c  reserved */
    uint8_t RESERVED0x2c[4];

    /* 0x30 : mjpeg_swap_mode */
    union {
        struct {
            uint32_t reg_w_swap_mode                :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_7                   :  7; /* [ 7: 1],       rsvd,        0x0 */
            uint32_t sts_swap0_full                 :  1; /* [    8],          r,        0x0 */
            uint32_t sts_swap1_full                 :  1; /* [    9],          r,        0x0 */
            uint32_t sts_read_swap_idx              :  1; /* [   10],          r,        0x0 */
            uint32_t sts_swap_fstart                :  1; /* [   11],          r,        0x0 */
            uint32_t sts_swap_fend                  :  1; /* [   12],          r,        0x0 */
            uint32_t reserved_13_31                 : 19; /* [31:13],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_swap_mode;

    /* 0x34 : mjpeg_swap_bit_cnt */
    union {
        struct {
            uint32_t frame_swap_end_bit_cnt         : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_swap_bit_cnt;

    /* 0x38 : mjpeg_paket_ctrl */
    union {
        struct {
            uint32_t reg_pket_en                    :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_jend_to_pend               :  1; /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_15                  : 14; /* [15: 2],       rsvd,        0x0 */
            uint32_t reg_pket_body_byte             : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_paket_ctrl;

    /* 0x3C : mjpeg_paket_head_tail */
    union {
        struct {
            uint32_t reg_pket_head_byte             : 12; /* [11: 0],        r/w,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t reg_pket_tail_byte             : 12; /* [27:16],        r/w,        0x0 */
            uint32_t reserved_28_31                 :  4; /* [31:28],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_paket_head_tail;

    /* 0x40 : mjpeg_Y_frame_read_status_1 */
    union {
        struct {
            uint32_t yy_mem_hblk_r                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_frm_hblk_r                  : 13; /* [28:16],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_read_status_1;

    /* 0x44 : mjpeg_Y_frame_read_status_2 */
    union {
        struct {
            uint32_t yy_wblk_r                      : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_mem_rnd_r                   :  8; /* [23:16],          r,        0x0 */
            uint32_t yy_frm_cnt_r                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_read_status_2;

    /* 0x48 : mjpeg_Y_frame_write_status */
    union {
        struct {
            uint32_t yy_mem_hblk_w                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_mem_rnd_w                   :  8; /* [23:16],          r,        0x0 */
            uint32_t yy_frm_cnt_w                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_write_status;

    /* 0x4C : mjpeg_UV_frame_read_status_1 */
    union {
        struct {
            uint32_t uv_mem_hblk_r                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_frm_hblk_r                  : 13; /* [28:16],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_read_status_1;

    /* 0x50 : mjpeg_UV_frame_read_status_2 */
    union {
        struct {
            uint32_t uv_wblk_r                      : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_mem_rnd_r                   :  8; /* [23:16],          r,        0x0 */
            uint32_t uv_frm_cnt_r                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_read_status_2;

    /* 0x54 : mjpeg_UV_frame_write_status */
    union {
        struct {
            uint32_t uv_mem_hblk_w                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_mem_rnd_w                   :  8; /* [23:16],          r,        0x0 */
            uint32_t uv_frm_cnt_w                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_write_status;

    /* 0x58  reserved */
    uint8_t RESERVED0x58[40];

    /* 0x80 : mjpeg_start_addr0 */
    union {
        struct {
            uint32_t frame_start_addr_0             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr0;

    /* 0x84 : mjpeg_bit_cnt0 */
    union {
        struct {
            uint32_t frame_bit_cnt_0                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt0;

    /* 0x88 : mjpeg_start_addr1 */
    union {
        struct {
            uint32_t frame_start_addr_1             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr1;

    /* 0x8C : mjpeg_bit_cnt1 */
    union {
        struct {
            uint32_t frame_bit_cnt_1                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt1;

    /* 0x90 : mjpeg_start_addr2 */
    union {
        struct {
            uint32_t frame_start_addr_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr2;

    /* 0x94 : mjpeg_bit_cnt2 */
    union {
        struct {
            uint32_t frame_bit_cnt_2                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt2;

    /* 0x98 : mjpeg_start_addr3 */
    union {
        struct {
            uint32_t frame_start_addr_3             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr3;

    /* 0x9C : mjpeg_bit_cnt3 */
    union {
        struct {
            uint32_t frame_bit_cnt_3                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt3;

    /* 0xA0 : mjpeg_start_addr4 */
    union {
        struct {
            uint32_t frame_start_addr_4             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr4;

    /* 0xA4 : mjpeg_bit_cnt4 */
    union {
        struct {
            uint32_t frame_bit_cnt_4                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt4;

    /* 0xA8 : mjpeg_start_addr5 */
    union {
        struct {
            uint32_t frame_start_addr_5             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr5;

    /* 0xAC : mjpeg_bit_cnt5 */
    union {
        struct {
            uint32_t frame_bit_cnt_5                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt5;

    /* 0xB0 : mjpeg_start_addr6 */
    union {
        struct {
            uint32_t frame_start_addr_6             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr6;

    /* 0xB4 : mjpeg_bit_cnt6 */
    union {
        struct {
            uint32_t frame_bit_cnt_6                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt6;

    /* 0xB8 : mjpeg_start_addr7 */
    union {
        struct {
            uint32_t frame_start_addr_7             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr7;

    /* 0xBC : mjpeg_bit_cnt7 */
    union {
        struct {
            uint32_t frame_bit_cnt_7                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt7;

    /* 0xC0 : mjpeg_start_addr_8 */
    union {
        struct {
            uint32_t frame_start_addr_8             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_8;

    /* 0xC4 : mjpeg_bit_cnt_8 */
    union {
        struct {
            uint32_t frame_bit_cnt_8                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_8;

    /* 0xC8 : mjpeg_start_addr_9 */
    union {
        struct {
            uint32_t frame_start_addr_9             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_9;

    /* 0xCC : mjpeg_bit_cnt_9 */
    union {
        struct {
            uint32_t frame_bit_cnt_9                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_9;

    /* 0xD0 : mjpeg_start_addr_a */
    union {
        struct {
            uint32_t frame_start_addr_a             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_a;

    /* 0xD4 : mjpeg_bit_cnt_a */
    union {
        struct {
            uint32_t frame_bit_cnt_a                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_a;

    /* 0xD8 : mjpeg_start_addr_b */
    union {
        struct {
            uint32_t frame_start_addr_b             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_b;

    /* 0xDC : mjpeg_bit_cnt_b */
    union {
        struct {
            uint32_t frame_bit_cnt_b                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_b;

    /* 0xE0 : mjpeg_start_addr_c */
    union {
        struct {
            uint32_t frame_start_addr_c             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_c;

    /* 0xE4 : mjpeg_bit_cnt_c */
    union {
        struct {
            uint32_t frame_bit_cnt_c                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_c;

    /* 0xE8 : mjpeg_start_addr_d */
    union {
        struct {
            uint32_t frame_start_addr_d             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_d;

    /* 0xEC : mjpeg_bit_cnt_d */
    union {
        struct {
            uint32_t frame_bit_cnt_d                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_d;

    /* 0xF0 : mjpeg_start_addr_e */
    union {
        struct {
            uint32_t frame_start_addr_e             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_e;

    /* 0xF4 : mjpeg_bit_cnt_e */
    union {
        struct {
            uint32_t frame_bit_cnt_e                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_e;

    /* 0xF8 : mjpeg_start_addr_f */
    union {
        struct {
            uint32_t frame_start_addr_f             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_f;

    /* 0xFC : mjpeg_bit_cnt_f */
    union {
        struct {
            uint32_t frame_bit_cnt_f                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_f;

    /* 0x100 : mjpeg_q_mode0 */
    union {
        struct {
            uint32_t frame_q_mode_0                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode0;

    /* 0x104 : mjpeg_q_mode1 */
    union {
        struct {
            uint32_t frame_q_mode_1                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode1;

    /* 0x108 : mjpeg_q_mode2 */
    union {
        struct {
            uint32_t frame_q_mode_2                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode2;

    /* 0x10C : mjpeg_q_mode3 */
    union {
        struct {
            uint32_t frame_q_mode_3                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode3;

    /* 0x110 : mjpeg_q_mode4 */
    union {
        struct {
            uint32_t frame_q_mode_4                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode4;

    /* 0x114 : mjpeg_q_mode5 */
    union {
        struct {
            uint32_t frame_q_mode_5                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode5;

    /* 0x118 : mjpeg_q_mode6 */
    union {
        struct {
            uint32_t frame_q_mode_6                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode6;

    /* 0x11C : mjpeg_q_mode7 */
    union {
        struct {
            uint32_t frame_q_mode_7                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode7;

    /* 0x120 : mjpeg_q_mode_8 */
    union {
        struct {
            uint32_t frame_q_mode_8                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_8;

    /* 0x124 : mjpeg_q_mode_9 */
    union {
        struct {
            uint32_t frame_q_mode_9                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_9;

    /* 0x128 : mjpeg_q_mode_a */
    union {
        struct {
            uint32_t frame_q_mode_a                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_a;

    /* 0x12C : mjpeg_q_mode_b */
    union {
        struct {
            uint32_t frame_q_mode_b                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_b;

    /* 0x130 : mjpeg_q_mode_c */
    union {
        struct {
            uint32_t frame_q_mode_c                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_c;

    /* 0x134 : mjpeg_q_mode_d */
    union {
        struct {
            uint32_t frame_q_mode_d                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_d;

    /* 0x138 : mjpeg_q_mode_e */
    union {
        struct {
            uint32_t frame_q_mode_e                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_e;

    /* 0x13C : mjpeg_q_mode_f */
    union {
        struct {
            uint32_t frame_q_mode_f                 :  7; /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_q_mode_f;

    /* 0x140  reserved */
    uint8_t RESERVED0x140[176];

    /* 0x1F0 : mjpeg_debug */
    union {
        struct {
            uint32_t reg_mjpeg_dbg_en               :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3                   :  3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t reg_mjpeg_dbg_sel              :  4; /* [ 7: 4],        r/w,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_debug;

    /* 0x1f4  reserved */
    uint8_t RESERVED0x1f4[8];

    /* 0x1FC : mjpeg_dummy_reg */
    union {
        struct {
            uint32_t mjpeg_dummy_reg                : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_dummy_reg;

};

typedef volatile struct mjpeg_reg mjpeg_reg_t;


#endif  /* __MJPEG_REG_H__ */
