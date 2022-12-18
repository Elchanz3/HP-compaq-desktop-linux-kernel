/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef __GAUDI_ASYNC_EVENTS_H_
#define __GAUDI_ASYNC_EVENTS_H_

enum gaudi_async_event_id {
	GAUDI_EVENT_PCIE_CORE_SERR = 32,
	GAUDI_EVENT_PCIE_CORE_DERR = 33,
	GAUDI_EVENT_PCIE_IF_SERR = 34,
	GAUDI_EVENT_PCIE_IF_DERR = 35,
	GAUDI_EVENT_PCIE_PHY_SERR = 36,
	GAUDI_EVENT_PCIE_PHY_DERR = 37,
	GAUDI_EVENT_TPC0_SERR = 38,
	GAUDI_EVENT_TPC1_SERR = 39,
	GAUDI_EVENT_TPC2_SERR = 40,
	GAUDI_EVENT_TPC3_SERR = 41,
	GAUDI_EVENT_TPC4_SERR = 42,
	GAUDI_EVENT_TPC5_SERR = 43,
	GAUDI_EVENT_TPC6_SERR = 44,
	GAUDI_EVENT_TPC7_SERR = 45,
	GAUDI_EVENT_TPC0_DERR = 46,
	GAUDI_EVENT_TPC1_DERR = 47,
	GAUDI_EVENT_TPC2_DERR = 48,
	GAUDI_EVENT_TPC3_DERR = 49,
	GAUDI_EVENT_TPC4_DERR = 50,
	GAUDI_EVENT_TPC5_DERR = 51,
	GAUDI_EVENT_TPC6_DERR = 52,
	GAUDI_EVENT_TPC7_DERR = 53,
	GAUDI_EVENT_MME0_ACC_SERR = 54,
	GAUDI_EVENT_MME0_ACC_DERR = 55,
	GAUDI_EVENT_MME0_SBAB_SERR = 56,
	GAUDI_EVENT_MME0_SBAB_DERR = 57,
	GAUDI_EVENT_MME1_ACC_SERR = 58,
	GAUDI_EVENT_MME1_ACC_DERR = 59,
	GAUDI_EVENT_MME1_SBAB_SERR = 60,
	GAUDI_EVENT_MME1_SBAB_DERR = 61,
	GAUDI_EVENT_MME2_ACC_SERR = 62,
	GAUDI_EVENT_MME2_ACC_DERR = 63,
	GAUDI_EVENT_MME2_SBAB_SERR = 64,
	GAUDI_EVENT_MME2_SBAB_DERR = 65,
	GAUDI_EVENT_MME3_ACC_SERR = 66,
	GAUDI_EVENT_MME3_ACC_DERR = 67,
	GAUDI_EVENT_MME3_SBAB_SERR = 68,
	GAUDI_EVENT_MME3_SBAB_DERR = 69,
	GAUDI_EVENT_DMA0_SERR_ECC = 70,
	GAUDI_EVENT_DMA1_SERR_ECC = 71,
	GAUDI_EVENT_DMA2_SERR_ECC = 72,
	GAUDI_EVENT_DMA3_SERR_ECC = 73,
	GAUDI_EVENT_DMA4_SERR_ECC = 74,
	GAUDI_EVENT_DMA5_SERR_ECC = 75,
	GAUDI_EVENT_DMA6_SERR_ECC = 76,
	GAUDI_EVENT_DMA7_SERR_ECC = 77,
	GAUDI_EVENT_DMA0_DERR_ECC = 78,
	GAUDI_EVENT_DMA1_DERR_ECC = 79,
	GAUDI_EVENT_DMA2_DERR_ECC = 80,
	GAUDI_EVENT_DMA3_DERR_ECC = 81,
	GAUDI_EVENT_DMA4_DERR_ECC = 82,
	GAUDI_EVENT_DMA5_DERR_ECC = 83,
	GAUDI_EVENT_DMA6_DERR_ECC = 84,
	GAUDI_EVENT_DMA7_DERR_ECC = 85,
	GAUDI_EVENT_CPU_IF_ECC_SERR = 86,
	GAUDI_EVENT_CPU_IF_ECC_DERR = 87,
	GAUDI_EVENT_PSOC_MEM_SERR = 88,
	GAUDI_EVENT_PSOC_CORESIGHT_SERR = 89,
	GAUDI_EVENT_PSOC_MEM_DERR = 90,
	GAUDI_EVENT_PSOC_CORESIGHT_DERR = 91,
	GAUDI_EVENT_SRAM0_SERR = 92,
	GAUDI_EVENT_SRAM1_SERR = 93,
	GAUDI_EVENT_SRAM2_SERR = 94,
	GAUDI_EVENT_SRAM3_SERR = 95,
	GAUDI_EVENT_SRAM7_SERR = 96,
	GAUDI_EVENT_SRAM6_SERR = 97,
	GAUDI_EVENT_SRAM5_SERR = 98,
	GAUDI_EVENT_SRAM4_SERR = 99,
	GAUDI_EVENT_SRAM8_SERR = 100,
	GAUDI_EVENT_SRAM9_SERR = 101,
	GAUDI_EVENT_SRAM10_SERR = 102,
	GAUDI_EVENT_SRAM11_SERR = 103,
	GAUDI_EVENT_SRAM15_SERR = 104,
	GAUDI_EVENT_SRAM14_SERR = 105,
	GAUDI_EVENT_SRAM13_SERR = 106,
	GAUDI_EVENT_SRAM12_SERR = 107,
	GAUDI_EVENT_SRAM16_SERR = 108,
	GAUDI_EVENT_SRAM17_SERR = 109,
	GAUDI_EVENT_SRAM18_SERR = 110,
	GAUDI_EVENT_SRAM19_SERR = 111,
	GAUDI_EVENT_SRAM23_SERR = 112,
	GAUDI_EVENT_SRAM22_SERR = 113,
	GAUDI_EVENT_SRAM21_SERR = 114,
	GAUDI_EVENT_SRAM20_SERR = 115,
	GAUDI_EVENT_SRAM24_SERR = 116,
	GAUDI_EVENT_SRAM25_SERR = 117,
	GAUDI_EVENT_SRAM26_SERR = 118,
	GAUDI_EVENT_SRAM27_SERR = 119,
	GAUDI_EVENT_SRAM31_SERR = 120,
	GAUDI_EVENT_SRAM30_SERR = 121,
	GAUDI_EVENT_SRAM29_SERR = 122,
	GAUDI_EVENT_SRAM28_SERR = 123,
	GAUDI_EVENT_SRAM0_DERR = 124,
	GAUDI_EVENT_SRAM1_DERR = 125,
	GAUDI_EVENT_SRAM2_DERR = 126,
	GAUDI_EVENT_SRAM3_DERR = 127,
	GAUDI_EVENT_SRAM7_DERR = 128,
	GAUDI_EVENT_SRAM6_DERR = 129,
	GAUDI_EVENT_SRAM5_DERR = 130,
	GAUDI_EVENT_SRAM4_DERR = 131,
	GAUDI_EVENT_SRAM8_DERR = 132,
	GAUDI_EVENT_SRAM9_DERR = 133,
	GAUDI_EVENT_SRAM10_DERR = 134,
	GAUDI_EVENT_SRAM11_DERR = 135,
	GAUDI_EVENT_SRAM15_DERR = 136,
	GAUDI_EVENT_SRAM14_DERR = 137,
	GAUDI_EVENT_SRAM13_DERR = 138,
	GAUDI_EVENT_SRAM12_DERR = 139,
	GAUDI_EVENT_SRAM16_DERR = 140,
	GAUDI_EVENT_SRAM17_DERR = 141,
	GAUDI_EVENT_SRAM18_DERR = 142,
	GAUDI_EVENT_SRAM19_DERR = 143,
	GAUDI_EVENT_SRAM23_DERR = 144,
	GAUDI_EVENT_SRAM22_DERR = 145,
	GAUDI_EVENT_SRAM21_DERR = 146,
	GAUDI_EVENT_SRAM20_DERR = 147,
	GAUDI_EVENT_SRAM24_DERR = 148,
	GAUDI_EVENT_SRAM25_DERR = 149,
	GAUDI_EVENT_SRAM26_DERR = 150,
	GAUDI_EVENT_SRAM27_DERR = 151,
	GAUDI_EVENT_SRAM31_DERR = 152,
	GAUDI_EVENT_SRAM30_DERR = 153,
	GAUDI_EVENT_SRAM29_DERR = 154,
	GAUDI_EVENT_SRAM28_DERR = 155,
	GAUDI_EVENT_NIC0_SERR = 156,
	GAUDI_EVENT_NIC1_SERR = 157,
	GAUDI_EVENT_NIC2_SERR = 158,
	GAUDI_EVENT_NIC3_SERR = 159,
	GAUDI_EVENT_NIC4_SERR = 160,
	GAUDI_EVENT_NIC0_DERR = 166,
	GAUDI_EVENT_NIC1_DERR = 167,
	GAUDI_EVENT_NIC2_DERR = 168,
	GAUDI_EVENT_NIC3_DERR = 169,
	GAUDI_EVENT_NIC4_DERR = 170,
	GAUDI_EVENT_DMA_IF0_SERR = 176,
	GAUDI_EVENT_DMA_IF1_SERR = 177,
	GAUDI_EVENT_DMA_IF2_SERR = 178,
	GAUDI_EVENT_DMA_IF3_SERR = 179,
	GAUDI_EVENT_DMA_IF0_DERR = 180,
	GAUDI_EVENT_DMA_IF1_DERR = 181,
	GAUDI_EVENT_DMA_IF2_DERR = 182,
	GAUDI_EVENT_DMA_IF3_DERR = 183,
	GAUDI_EVENT_GIC500 = 184,
	GAUDI_EVENT_HBM_0_SERR = 185,
	GAUDI_EVENT_HBM_1_SERR = 186,
	GAUDI_EVENT_HBM_2_SERR = 187,
	GAUDI_EVENT_HBM_3_SERR = 188,
	GAUDI_EVENT_HBM_0_DERR = 189,
	GAUDI_EVENT_HBM_1_DERR = 190,
	GAUDI_EVENT_HBM_2_DERR = 191,
	GAUDI_EVENT_HBM_3_DERR = 192,
	GAUDI_EVENT_MMU_SERR = 193,
	GAUDI_EVENT_MMU_DERR = 194,
	GAUDI_EVENT_PCIE_DEC = 200,
	GAUDI_EVENT_TPC0_DEC = 201,
	GAUDI_EVENT_TPC1_DEC = 203,
	GAUDI_EVENT_TPC2_DEC = 205,
	GAUDI_EVENT_TPC3_DEC = 207,
	GAUDI_EVENT_TPC4_DEC = 209,
	GAUDI_EVENT_TPC5_DEC = 211,
	GAUDI_EVENT_TPC6_DEC = 213,
	GAUDI_EVENT_TPC7_DEC = 215,
	GAUDI_EVENT_AXI_ECC = 217,
	GAUDI_EVENT_L2_RAM_ECC = 218,
	GAUDI_EVENT_MME0_WBC_RSP = 219,
	GAUDI_EVENT_MME0_SBAB0_RSP = 220,
	GAUDI_EVENT_MME1_WBC_RSP = 224,
	GAUDI_EVENT_MME1_SBAB0_RSP = 225,
	GAUDI_EVENT_MME2_WBC_RSP = 229,
	GAUDI_EVENT_MME2_SBAB0_RSP = 230,
	GAUDI_EVENT_MME3_WBC_RSP = 234,
	GAUDI_EVENT_MME3_SBAB0_RSP = 235,
	GAUDI_EVENT_PLL0 = 239,
	GAUDI_EVENT_PLL1 = 240,
	GAUDI_EVENT_PLL2 = 241,
	GAUDI_EVENT_PLL3 = 242,
	GAUDI_EVENT_PLL4 = 243,
	GAUDI_EVENT_PLL5 = 244,
	GAUDI_EVENT_PLL6 = 245,
	GAUDI_EVENT_PLL7 = 246,
	GAUDI_EVENT_PLL8 = 247,
	GAUDI_EVENT_PLL9 = 248,
	GAUDI_EVENT_PLL10 = 249,
	GAUDI_EVENT_PLL11 = 250,
	GAUDI_EVENT_PLL12 = 251,
	GAUDI_EVENT_PLL13 = 252,
	GAUDI_EVENT_PLL14 = 253,
	GAUDI_EVENT_PLL15 = 254,
	GAUDI_EVENT_PLL16 = 255,
	GAUDI_EVENT_PLL17 = 256,
	GAUDI_EVENT_CPU_AXI_SPLITTER = 257,
	GAUDI_EVENT_PSOC_AXI_DEC = 262,
	GAUDI_EVENT_PSOC_PRSTN_FALL = 263,
	GAUDI_EVENT_NIC_SEI_0 = 264,
	GAUDI_EVENT_NIC_SEI_1 = 265,
	GAUDI_EVENT_NIC_SEI_2 = 266,
	GAUDI_EVENT_NIC_SEI_3 = 267,
	GAUDI_EVENT_NIC_SEI_4 = 268,
	GAUDI_EVENT_DMA_IF_SEI_0 = 277,
	GAUDI_EVENT_DMA_IF_SEI_1 = 278,
	GAUDI_EVENT_DMA_IF_SEI_2 = 279,
	GAUDI_EVENT_DMA_IF_SEI_3 = 280,
	GAUDI_EVENT_PCIE_FLR = 290,
	GAUDI_EVENT_TPC0_BMON_SPMU = 300,
	GAUDI_EVENT_TPC0_KRN_ERR = 301,
	GAUDI_EVENT_TPC1_BMON_SPMU = 306,
	GAUDI_EVENT_TPC1_KRN_ERR = 307,
	GAUDI_EVENT_TPC2_BMON_SPMU = 312,
	GAUDI_EVENT_TPC2_KRN_ERR = 313,
	GAUDI_EVENT_TPC3_BMON_SPMU = 318,
	GAUDI_EVENT_TPC3_KRN_ERR = 319,
	GAUDI_EVENT_TPC4_BMON_SPMU = 324,
	GAUDI_EVENT_TPC4_KRN_ERR = 325,
	GAUDI_EVENT_TPC5_BMON_SPMU = 330,
	GAUDI_EVENT_TPC5_KRN_ERR = 331,
	GAUDI_EVENT_TPC6_BMON_SPMU = 336,
	GAUDI_EVENT_TPC6_KRN_ERR = 337,
	GAUDI_EVENT_TPC7_BMON_SPMU = 342,
	GAUDI_EVENT_TPC7_KRN_ERR = 343,
	GAUDI_EVENT_MMU_PAGE_FAULT = 380,
	GAUDI_EVENT_MMU_WR_PERM = 381,
	GAUDI_EVENT_DMA_BM_CH0 = 383,
	GAUDI_EVENT_DMA_BM_CH1 = 384,
	GAUDI_EVENT_DMA_BM_CH2 = 385,
	GAUDI_EVENT_DMA_BM_CH3 = 386,
	GAUDI_EVENT_DMA_BM_CH4 = 387,
	GAUDI_EVENT_DMA_BM_CH5 = 388,
	GAUDI_EVENT_DMA_BM_CH6 = 389,
	GAUDI_EVENT_DMA_BM_CH7 = 390,
	GAUDI_EVENT_HBM0_SPI_0 = 395,
	GAUDI_EVENT_HBM0_SPI_1 = 396,
	GAUDI_EVENT_HBM1_SPI_0 = 399,
	GAUDI_EVENT_HBM1_SPI_1 = 400,
	GAUDI_EVENT_HBM2_SPI_0 = 403,
	GAUDI_EVENT_HBM2_SPI_1 = 404,
	GAUDI_EVENT_HBM3_SPI_0 = 407,
	GAUDI_EVENT_HBM3_SPI_1 = 408,
	GAUDI_EVENT_PSOC_GPIO_U16_0 = 421,
	GAUDI_EVENT_NIC0_CS_DBG_DERR = 483,
	GAUDI_EVENT_NIC1_CS_DBG_DERR = 487,
	GAUDI_EVENT_NIC2_CS_DBG_DERR = 491,
	GAUDI_EVENT_NIC3_CS_DBG_DERR = 495,
	GAUDI_EVENT_NIC4_CS_DBG_DERR = 499,
	GAUDI_EVENT_RAZWI_OR_ADC = 548,
	GAUDI_EVENT_TPC0_QM = 572,
	GAUDI_EVENT_TPC1_QM = 573,
	GAUDI_EVENT_TPC2_QM = 574,
	GAUDI_EVENT_TPC3_QM = 575,
	GAUDI_EVENT_TPC4_QM = 576,
	GAUDI_EVENT_TPC5_QM = 577,
	GAUDI_EVENT_TPC6_QM = 578,
	GAUDI_EVENT_TPC7_QM = 579,
	GAUDI_EVENT_MME0_QM = 581,
	GAUDI_EVENT_MME2_QM = 582,
	GAUDI_EVENT_DMA0_QM = 583,
	GAUDI_EVENT_DMA1_QM = 584,
	GAUDI_EVENT_DMA2_QM = 585,
	GAUDI_EVENT_DMA3_QM = 586,
	GAUDI_EVENT_DMA4_QM = 587,
	GAUDI_EVENT_DMA5_QM = 588,
	GAUDI_EVENT_DMA6_QM = 589,
	GAUDI_EVENT_DMA7_QM = 590,
	GAUDI_EVENT_NIC0_QM0 = 594,
	GAUDI_EVENT_NIC0_QM1 = 595,
	GAUDI_EVENT_NIC1_QM0 = 596,
	GAUDI_EVENT_NIC1_QM1 = 597,
	GAUDI_EVENT_NIC2_QM0 = 598,
	GAUDI_EVENT_NIC2_QM1 = 599,
	GAUDI_EVENT_NIC3_QM0 = 600,
	GAUDI_EVENT_NIC3_QM1 = 601,
	GAUDI_EVENT_NIC4_QM0 = 602,
	GAUDI_EVENT_NIC4_QM1 = 603,
	GAUDI_EVENT_DMA0_CORE = 604,
	GAUDI_EVENT_DMA1_CORE = 605,
	GAUDI_EVENT_DMA2_CORE = 606,
	GAUDI_EVENT_DMA3_CORE = 607,
	GAUDI_EVENT_DMA4_CORE = 608,
	GAUDI_EVENT_DMA5_CORE = 609,
	GAUDI_EVENT_DMA6_CORE = 610,
	GAUDI_EVENT_DMA7_CORE = 611,
	GAUDI_EVENT_NIC0_QP0 = 612,
	GAUDI_EVENT_NIC0_QP1 = 613,
	GAUDI_EVENT_NIC1_QP0 = 614,
	GAUDI_EVENT_NIC1_QP1 = 615,
	GAUDI_EVENT_NIC2_QP0 = 616,
	GAUDI_EVENT_NIC2_QP1 = 617,
	GAUDI_EVENT_NIC3_QP0 = 618,
	GAUDI_EVENT_NIC3_QP1 = 619,
	GAUDI_EVENT_NIC4_QP0 = 620,
	GAUDI_EVENT_NIC4_QP1 = 621,
	GAUDI_EVENT_PI_UPDATE = 635,
	GAUDI_EVENT_HALT_MACHINE = 636,
	GAUDI_EVENT_INTS_REGISTER = 637,
	GAUDI_EVENT_SOFT_RESET = 638,
	GAUDI_EVENT_FW_ALIVE_S = 645,
	GAUDI_EVENT_DEV_RESET_REQ = 646,
	GAUDI_EVENT_PKT_QUEUE_OUT_SYNC = 647,
	GAUDI_EVENT_STATUS_NIC0_ENG0 = 648,
	GAUDI_EVENT_STATUS_NIC0_ENG1 = 649,
	GAUDI_EVENT_STATUS_NIC1_ENG0 = 650,
	GAUDI_EVENT_STATUS_NIC1_ENG1 = 651,
	GAUDI_EVENT_STATUS_NIC2_ENG0 = 652,
	GAUDI_EVENT_STATUS_NIC2_ENG1 = 653,
	GAUDI_EVENT_STATUS_NIC3_ENG0 = 654,
	GAUDI_EVENT_STATUS_NIC3_ENG1 = 655,
	GAUDI_EVENT_STATUS_NIC4_ENG0 = 656,
	GAUDI_EVENT_STATUS_NIC4_ENG1 = 657,
	GAUDI_EVENT_FIX_POWER_ENV_S = 658,
	GAUDI_EVENT_FIX_POWER_ENV_E = 659,
	GAUDI_EVENT_FIX_THERMAL_ENV_S = 660,
	GAUDI_EVENT_FIX_THERMAL_ENV_E = 661,
	GAUDI_EVENT_RAZWI_OR_ADC_SW = 662,
	GAUDI_EVENT_SIZE,
};

#endif /* __GAUDI_ASYNC_EVENTS_H_ */
