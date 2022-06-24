/**************************************************************************/
/*!
    @file     ThoraxSensorsADS7138.h

    Original by
    @author   Jesse Bosch

    @section  HISTORY

    v1.0  - First release
*/
/**************************************************************************/
#ifndef ADS7138_H
#define ADS7138_H

	#define CONVERSION_DELAY	(6)
/*=========================================================================
    I2C ADDRESS/BITS
    -----------------------------------------------------------------------*/
	#define I2C_ADDRESS_DEFAULT				(0x10)
	#define I2C_ADDRESS_DNP_DNP_10			(0x10)
	#define I2C_ADDRESS_DNP_11K_11			(0x11)
	#define I2C_ADDRESS_DNP_33K_12			(0x12)
	#define I2C_ADDRESS_DNP_100K_13			(0x13)
	#define I2C_ADDRESS_100K_DNP_14			(0x14)
	#define I2C_ADDRESS_33K_DNP_15			(0x15)
	#define I2C_ADDRESS_11K_DNP_16			(0x16)
	#define I2C_ADDRESS_0K_DNP_17			(0x17)
/*=========================================================================*/

/*=========================================================================
    OPCODES
    -----------------------------------------------------------------------*/
	#define SINGLE_REGISTER_READ			(0x10)
	#define SINGLE_REGISTER_WRITE			(0x08)
	#define SET_BIT							(0x18)
	#define CLEAR_BIT						(0x20)
	#define READING_CONTINUOUS_REGISTERS	(0x30)
	#define WRITING_CONTINUOUS_REGISTERS	(0x28)
/*=========================================================================*/

/*=========================================================================
	SYSTEM_STATUS Register
	-----------------------------------------------------------------------*/
	#define SYSTEM_STATUS_REG_MASKadd		(0x0)
	#define SYSTEM_STATUS_REG_MASK_RESET	(0x81)
	#define SYSTEM_STATUS_RSVD				(0x80)
	#define SYSTEM_STATUS_SEQ_STATUS		(0x40)
	#define	SYSTEM_STATUS_I2C_SPEED			(0x20)
	#define SYSTEM_STATUS_OSR_DONE			(0x08)
	#define SYSTEM_STATUS_OSR_CLEAR			(0x08)
	#define SYSTEM_STATUS_CRC_ERR_FUSE		(0x04)
	#define SYSTEM_STATUS_CRC_ERR_IN		(0x02)
	#define SYSTEM_STATUS_CRC_ERR_IN_CLEAR	(0x02)
	#define SYSTEM_STATUS_BOR				(0x01)
	#define SYSTEM_STATUS_BOR_CLEAR			(0x01)
/*=========================================================================*/

/*=========================================================================
	GENERAL_CFG Register
	-----------------------------------------------------------------------*/
	#define GENERAL_CFG_MASKadd				(0x1)
	#define	GENERAL_CFG_RESET				(0x00)
	#define GENERAL_CFG_CRC_EN				(0x40)
	#define GENERAL_CFG_STATS_EN			(0x20)
	#define GENERAL_CFG_DWC_EN				(0x10)
	#define GENERAL_CFG_CNVST				(0x08)
	#define GENERAL_CFG_CH_RST				(0x04)
	#define GENERAL_CFG_CAL					(0x02)
	#define GENERAL_CFG_RST					(0x01)
/*=========================================================================*/

/*=========================================================================
	DATA_CFG Register
	-----------------------------------------------------------------------*/
	#define DATA_CFG_MASKadd				(0x2)
	#define DATA_CFG_RESET					(0x00)
	#define DATA_CFG_FIX_PAT				(0x80)
	#define DATA_CFG_APPEND_STATUS_0		(0x00)
	#define DATA_CFG_APPEND_STATUS_1		(0x10)
	#define DATA_CFG_APPEND_STATUS_2		(0x20)
	#define DATA_CFG_APPEND_STATUS_3		(0x30)
/*=========================================================================*/

/*=========================================================================
	OSR_CFG Register
	-----------------------------------------------------------------------*/
	#define OSR_CFG_MASKadd					(0x3)
	#define OSR_CFG_RESET					(0x00)
	#define OSR_CFG_OSR_NO_AVG				(0x00)
	#define OSR_CFG_OSR_2_SAMPLES			(0x01)
	#define OSR_CFG_OSR_4_SAMPLES			(0x02)
	#define OSR_CFG_OSR_8_SAMPLES			(0x03)
	#define OSR_CFG_OSR_16_SAMPLES			(0x04)
	#define OSR_CFG_OSR_32_SAMPLES			(0x05)
	#define OSR_CFG_OSR_64_SAMPLES			(0x06)
	#define OSR_CFG_OSR_128_SAMPLES			(0x07)
/*=========================================================================*/

/*=========================================================================
	OPMODE_CFG Register
	-----------------------------------------------------------------------*/
	#define OPMODE_CFG_MASKadd				(0x4)
	#define OPMODE_CFG_RESET				(0x00)
	#define OPMODE_CFG_CONV_ON_ERR			(0x80)
	#define OPMODE_CFG_CONV_MODE_MANUAL		(0x00)
	#define OPMODE_CFG_CONV_MODE_AUTO		(0x20)
	#define OPMODE_CFG_OSC_SEL_HIGHSPEED	(0x00)
	#define OPMODE_CFG_OSC_SEL_LOWSPEED		(0x10)
	#define OPMODE_CFG_CLK_DIV_1000			(0x00)
	#define OPMODE_CFG_CLK_DIV_666			(0x01)
	#define OPMODE_CFG_CLK_DIV_500			(0x02)
	#define OPMODE_CFG_CLK_DIV_333			(0x03)
	#define OPMODE_CFG_CLK_DIV_250			(0x04)
	#define OPMODE_CFG_CLK_DIV_166			(0x05)
	#define OPMODE_CFG_CLK_DIV_125			(0x06)
	#define OPMODE_CFG_CLK_DIV_83			(0x07)
	#define OPMODE_CFG_CLK_DIV_62			(0x08)
	#define OPMODE_CFG_CLK_DIV_41			(0x09)
	#define OPMODE_CFG_CLK_DIV_31			(0x0A)
	#define OPMODE_CFG_CLK_DIV_20			(0x0B)
	#define OPMODE_CFG_CLK_DIV_15			(0x0C)
	#define OPMODE_CFG_CLK_DIV_10			(0x0D)
	#define OPMODE_CFG_CLK_DIV_7			(0x0E)
	#define OPMODE_CFG_CLK_DIV_5			(0x0F)
/*=========================================================================*/

/*=========================================================================
	PIN_CNF Register
--------------------------------------------------------------------------*/
	#define PIN_CFG_MASKadd					(0x5)
	#define PIN_CFG_RESET					(0x00)
	#define PIN_CFG_GPIO_0					(0x01)
	#define PIN_CFG_GPIO_1					(0x02)
	#define PIN_CFG_GPIO_2					(0x04)
	#define PIN_CFG_GPIO_3					(0x08)
	#define PIN_CFG_GPIO_4					(0x10)
	#define PIN_CFG_GPIO_5					(0x20)
	#define PIN_CFG_GPIO_6					(0x40)
	#define PIN_CFG_GPIO_7					(0x80)
/*==========================================================================*/

/*=========================================================================
	GPIO_CNF Register
	-----------------------------------------------------------------------*/
	#define GPIO_CFG_MASKadd				(0X7)
	#define GPIO_CFG_RESET					(0x00)
	#define GPIO_CFG_0_OUTPUT				(0x01)
	#define GPIO_CFG_1_OUTPUT				(0x02)
	#define GPIO_CFG_2_OUTPUT				(0x04)
	#define GPIO_CFG_3_OUTPUT				(0x08)
	#define GPIO_CFG_4_OUTPUT				(0x10)
	#define GPIO_CFG_5_OUTPUT				(0x20)
	#define GPIO_CFG_6_OUTPUT				(0x40)
	#define GPIO_CFG_7_OUTPUT				(0x80)	
/*=========================================================================*/

/*=========================================================================
	GPO_DRIVE_CFG Register
	-----------------------------------------------------------------------*/
	#define GPO_DRIVE_CFG_MASKadd			(0x9)
	#define GPO_DRIVE_CFG_RESET				(0x00)
	#define GPO_DRIVE_CFG_GPO_0_PUSH_PULL	(0x01)
	#define GPO_DRIVE_CFG_GPO_1_PUSH_PULL	(0x02)
	#define GPO_DRIVE_CFG_GPO_2_PUSH_PULL	(0x04)
	#define GPO_DRIVE_CFG_GPO_3_PUSH_PULL	(0x08)
	#define GPO_DRIVE_CFG_GPO_4_PUSH_PULL	(0x10)
	#define GPO_DRIVE_CFG_GPO_5_PUSH_PULL	(0x20)
	#define GPO_DRIVE_CFG_GPO_6_PUSH_PULL	(0x40)
	#define GPO_DRIVE_CFG_GPO_7_PUSH_PULL	(0x80)	
/*=========================================================================*/

/*=========================================================================
	GPO_VALUE Register
	-----------------------------------------------------------------------*/
	#define GPO_VALUE_MASKadd				(0xB)
	#define GPO_VALUE_RESET					(0x00)
	#define GPO_VALUE_GPO_0_LOGIC_HIGH		(0x01)
	#define GPO_VALUE_GPO_1_LOGIC_HIGH		(0x02)
	#define GPO_VALUE_GPO_2_LOGIC_HIGH		(0x04)
	#define GPO_VALUE_GPO_3_LOGIC_HIGH		(0x08)
	#define GPO_VALUE_GPO_4_LOGIC_HIGH		(0x10)
	#define GPO_VALUE_GPO_5_LOGIC_HIGH		(0x20)
	#define GPO_VALUE_GPO_6_LOGIC_HIGH		(0x40)
	#define GPO_VALUE_GPO_7_LOGIC_HIGH		(0x80)
/*=========================================================================*/

/*=========================================================================
	GPI_VALUE Register
	-----------------------------------------------------------------------*/
	#define GPI_VALUE_MASKadd				(0xD)
	#define GPI_VALUE_RESET					(0x00)
	#define GPI_VALUE_GPI_0_LOGIC_HIGH		(0x01)
	#define GPI_VALUE_GPI_1_LOGIC_HIGH		(0x02)
	#define GPI_VALUE_GPI_2_LOGIC_HIGH		(0x04)
	#define GPI_VALUE_GPI_3_LOGIC_HIGH		(0x08)
	#define GPI_VALUE_GPI_4_LOGIC_HIGH		(0x10)
	#define GPI_VALUE_GPI_5_LOGIC_HIGH		(0x20)
	#define GPI_VALUE_GPI_6_LOGIC_HIGH		(0x40)
	#define GPI_VALUE_GPI_7_LOGIC_HIGH		(0x80)
/*=========================================================================*/

/*=========================================================================
	SEQUENCE_CFG Register
	-----------------------------------------------------------------------*/
	#define SEQUENCE_CFG_MASKadd			(0x10)
	#define SEQUENCE_CFG_RESET				(0x00)
	#define SEQUENCE_CFG_SEQ_STOP			(0x00)
	#define SEQUENCE_CFG_SEQ_START			(0x10)
	#define SEQUENCE_CFG_SEQ_MODE_AUTO		(0x01)
	#define SEQUENCE_CFG_SEQ_MODE_MANUAL	(0x00)
/*=========================================================================*/

/*=========================================================================
	CHANNEL_SEL Register
	-----------------------------------------------------------------------*/
	#define CHANNEL_SEL_MASKadd				(0x11)
	#define CHANNEL_SEL_RESET				(0x00)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_0	(0x00)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_1	(0x01)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_2	(0x02)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_3	(0x03)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_4	(0x04)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_5	(0x05)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_6	(0x06)
	#define CHANNEL_SEL_MANUAL_CHID_AIN_7	(0x07)
/*=========================================================================*/

/*=========================================================================
	AUTO_SEQ_CH_SEL Register
	-----------------------------------------------------------------------*/
	#define AUTO_SEQ_CH_SEL_MASKadd			(0x12)
	#define AUTO_SEQ_CH_SEL_RESET			(0x00)
	#define AUTO_SEQ_CH_SEL_AIN_0			(0x01)
	#define AUTO_SEQ_CH_SEL_AIN_1			(0x02)
	#define AUTO_SEQ_CH_SEL_AIN_2			(0x04)
	#define AUTO_SEQ_CH_SEL_AIN_3			(0x08)
	#define AUTO_SEQ_CH_SEL_AIN_4			(0x10)
	#define AUTO_SEQ_CH_SEL_AIN_5			(0x20)
	#define AUTO_SEQ_CH_SEL_AIN_6			(0x40)
	#define AUTO_SEQ_CH_SEL_AIN_7			(0x80)
	#define AUTO_SEQ_CH_SEL_ALL				(0xFF)
/*=========================================================================*/

/*=========================================================================
	ALERT_CH_SEL Register
	----------------------------------------------------------------------*/
	#define ALERT_CH_SEL_MASKadd			(0x14)
	#define ALERT_CH_SEL_RESET				(0x00)
/*=========================================================================*/

/*=========================================================================
	ALERT_MAP Register
	-----------------------------------------------------------------------*/
	#define ALERT_MAP_MASKadd				(0x16)
	#define ALERT_MAP_RESET					(0x00)
	#define	ALERT_MAP_ALERT_CRCIN			(0x01)
/*=========================================================================*/

/*=========================================================================
	ALERT_PIN_CFG Register
	-----------------------------------------------------------------------*/
	#define ALERT_PIN_CFG_MASKadd			(0x17)
	#define ALERT_PIN_CFG_RESET				(0x00)
	#define ALERT_PIN_CFG_ALERT_DRIVE		(0x04)
	#define ALERT_PIN_CFG_ALERT_LOGIC		(0x03)
/*=========================================================================*/

/*=========================================================================
	EVENT_FLAG Register
	-----------------------------------------------------------------------*/
	#define EVENT_FLAG_MASKadd				(0x18)
	#define EVENT_FLAG_RESET				(0x00)
/*=========================================================================*/

/*=========================================================================
	EVENT_HIGH_FLAG Register
	-----------------------------------------------------------------------*/
	#define EVENT_HIGH_FLAG_MASKadd			(0x1A)
	#define EVENT_HIGH_FLAG_RESET			(0x00)
/*=========================================================================*/

/*=========================================================================
	EVENT_LOW_FLAG Register
	-----------------------------------------------------------------------*/
	#define EVENT_LOW_FLAG_MASKadd			(0x1C)
	#define EVENT_LOW_FLAG_RESET			(0x00)
/*=========================================================================*/

/*=========================================================================
	EVENT_RGN Register
	-----------------------------------------------------------------------*/
	#define EVENT_RGN_MASKadd				(0x1E)
	#define EVENT_RGN_RESET					(0x00)
	
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH0 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH0_MASKadd					(0x20)
	#define HYSTERESIS_CH0_RESET					(0xF0)
	#define HYSTERESIS_CH0_HIGH_THRESHOLD_CH0_LSB	(0x00)
	#define HYSTERESIS_CH0							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH0 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH0_MASKadd						(0x21)
	#define HIGH_TH_CH0_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH0 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH0_MASKadd					(0x22)
	#define EVENT_COUNT_CH0_RESET					(0x00)
	#define EVENT_COUNT_CH0_LOW_THRESHOLD_CH0_LSB	(0xF0)
	#define EVENT_COUNT_CH0							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH0 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH0_MASKadd						(0x23)
	#define LOW_TH_CH0_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH1 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH1_MASKadd					(0x24)
	#define HYSTERESIS_CH1_RESET					(0xF0)
	#define HYSTERESIS_CH1_HIGH_THRESHOLD_CH1_LSB	(0x00)
	#define HYSTERESIS_CH1							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH1 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH1_MASKadd						(0x25)
	#define HIGH_TH_CH1_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH1 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH1_MASKadd					(0x26)
	#define EVENT_COUNT_CH1_RESET					(0x00)
	#define EVENT_COUNT_CH1_LOW_THRESHOLD_CH1_LSB	(0xF0)
	#define EVENT_COUNT_CH1							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH1 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH1_MASKadd						(0x27)
	#define LOW_TH_CH1_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH2 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH2_MASKadd					(0x28)
	#define HYSTERESIS_CH2_RESET					(0xF0)
	#define HYSTERESIS_CH2_HIGH_THRESHOLD_CH2_LSB	(0x00)
	#define HYSTERESIS_CH2							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH2 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH2_MASKadd						(0x23)
	#define HIGH_TH_CH2_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH2 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH2_MASKadd					(0x2A)
	#define EVENT_COUNT_CH2_RESET					(0x00)
	#define EVENT_COUNT_CH2_LOW_THRESHOLD_CH0_LSB	(0xF0)
	#define EVENT_COUNT_CH2							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH2 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH2_MASKadd						(0x2B)
	#define LOW_TH_CH2_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH3 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH3_MASKadd					(0x2C)
	#define HYSTERESIS_CH3_RESET					(0xF0)
	#define HYSTERESIS_CH3_HIGH_THRESHOLD_CH0_LSB	(0x00)
	#define HYSTERESIS_CH3							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH3 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH3_MASKadd						(0x2D)
	#define HIGH_TH_CH3_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH3 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH3_MASKadd					(0x2E)
	#define EVENT_COUNT_CH3_RESET					(0x00)
	#define EVENT_COUNT_CH3_LOW_THRESHOLD_CH3_LSB	(0xF0)
	#define EVENT_COUNT_CH3							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH3 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH3_MASKadd						(0x2F)
	#define LOW_TH_CH3_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH4 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH4_MASKadd					(0x30)
	#define HYSTERESIS_CH4_RESET					(0xF0)
	#define HYSTERESIS_CH4_HIGH_THRESHOLD_CH4_LSB	(0x00)
	#define HYSTERESIS_CH4							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH4 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH4_MASKadd						(0x31)
	#define HIGH_TH_CH4_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH4 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH4_MASKadd					(0x32)
	#define EVENT_COUNT_CH4_RESET					(0x00)
	#define EVENT_COUNT_CH4_LOW_THRESHOLD_CH0_LSB	(0xF0)
	#define EVENT_COUNT_CH4							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH4 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH4_MASKadd						(0x33)
	#define LOW_TH_CH4_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH5 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH5_MASKadd					(0x34)
	#define HYSTERESIS_CH5_RESET					(0xF0)
	#define HYSTERESIS_CH5_HIGH_THRESHOLD_CH5_LSB	(0x00)
	#define HYSTERESIS_CH5							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH5 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH5_MASKadd						(0x35)
	#define HIGH_TH_CH5_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH5 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH5_MASKadd					(0x36)
	#define EVENT_COUNT_CH5_RESET					(0x00)
	#define EVENT_COUNT_CH5_LOW_THRESHOLD_CH5_LSB	(0xF0)
	#define EVENT_COUNT_CH5							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH5 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH5_MASKadd						(0x37)
	#define LOW_TH_CH5_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH6 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH6_MASKadd					(0x38)
	#define HYSTERESIS_CH6_RESET					(0xF0)
	#define HYSTERESIS_CH6_HIGH_THRESHOLD_CH6_LSB	(0x00)
	#define HYSTERESIS_CH6							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH6 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH6_MASKadd						(0x39)
	#define HIGH_TH_CH6_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH6 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH6_MASKadd					(0x3A)
	#define EVENT_COUNT_CH6_RESET					(0x00)
	#define EVENT_COUNT_CH6_LOW_THRESHOLD_CH6_LSB	(0xF0)
	#define EVENT_COUNT_CH6							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH6 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH6_MASKadd						(0x3B)
	#define LOW_TH_CH6_RESET						(0x00)
/*=========================================================================*/

/*=========================================================================
	HYSTERESIS_CH7 Register
	-----------------------------------------------------------------------*/
	#define HYSTERESIS_CH7_MASKadd					(0x3C)
	#define HYSTERESIS_CH7_RESET					(0xF0)
	#define HYSTERESIS_CH7_HIGH_THRESHOLD_CH7_LSB	(0x00)
	#define HYSTERESIS_CH7							(0x0F)
/*=========================================================================*/

/*=========================================================================
	HIGH_TH_CH7 Register
	-----------------------------------------------------------------------*/
	#define HIGH_TH_CH7_MASKadd						(0x3D)
	#define HIGH_TH_CH7_RESET						(0xFF)
/*=========================================================================*/

/*=========================================================================
	EVENT_COUNT_CH7 Register
	-----------------------------------------------------------------------*/
	#define EVENT_COUNT_CH7_MASKadd					(0x3E)
	#define EVENT_COUNT_CH7_RESET					(0x00)
	#define EVENT_COUNT_CH7_LOW_THRESHOLD_CH7_LSB	(0xF0)
	#define EVENT_COUNT_CH7							(0x0F)
/*=========================================================================*/

/*=========================================================================
	LOW_TH_CH7 Register
	-----------------------------------------------------------------------*/
	#define LOW_TH_CH7_MASKadd						(0x3F)
	#define LOW_TH_CH7_RESET						(0x00)
/*=========================================================================*/

#endif