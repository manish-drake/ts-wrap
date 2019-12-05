#ifndef TEST_SERVER_COMMOM_H_INCLUDED
#define TEST_SERVER_COMMOM_H_INCLUDED

#include "errorcodes.h"
#define SERVER_REQ_PORT				6000
#define MESSAGE_ALIGNMENT			4
/*
typedef enum tagMessageTypeEnum{JSON}MessageType;
typedef struct MESSAGE_T{
	MessageType		type;
	unsigned int 	message_length;
	char			message[MESSAGE_ALIGNMENT];

}MESSAGE,*PMESSAGE;*/

#define MAX_QUEUE_MESSAGE_SIZE 	(64*1024)
//#define MESSAGE_STRUCT_SIZE		(sizeof(MESSAGE)-MESSAGE_ALIGNMENT)
//#define MAX_MESSAGE_SIZE 		(MAX_QUEUE_MESSAGE_SIZE-MESSAGE_STRUCT_SIZE)


//message versions
#define UAT_V1_MESSAGE_VER			0x01
#define UAT_V2_MESSAGE_VER			0x02


//Messages
#define UAT_V2_MESSAGE_FPGA_CMD_ID  			0x1001


#define UAT_V2_MESSAGE_UATOUT_START_SCAN_CMD_ID		0x2001
#define UAT_V2_MESSAGE_UATOUT_STOP_CMD_ID  			0x2002
#define UAT_V2_MESSAGE_UATOUT_START_TEST_CMD_ID 	0x2003
#define UAT_V2_MESSAGE_UATOUT_GET_RESULTS_CMD_ID  	0x2004
#define UAT_V2_MESSAGE_UATOUT_GET_RESULTS_CMD_ID  	0x2004


#define SERVICE_ID_RF_CONTROL                10
#define SERVICE_ID_UAT                       11
#define SERVICE_ID_SYSTEM                    12
#define SERVICE_ID_HARDWARE                  13
#define SERVICE_ID_CALBIT                    14
#define SERVICE_ID_VSWR                      15
#define SERVICE_ID_SIFADSB                   16
#define SERVICE_ID_SIF	                   	 17
#define SERVICE_ID_GICB	                   	 18
#define SERVICE_ID_PART43                    19



#define UAT_V2_MESSAGE_MESSAGE_ID 	0x02
#define UAT_V2_MESSAGE_LIST_MODES 	0x01


#define UAT_V2_MESSAGE_START_TEST 0x01
#define TEST_ID_UAT_STATE_VECTOR_OUT_TEST 0x01


#define TEST_MODE_CONFIG    0
#define TEST_MODE_UAT_OUT   1
#define TEST_MODE_UAT_IN    2
#define TEST_MODE_ADSB_OUT  3   //1090 ADSB
#define TEST_MODE_ADSB_IN   4   //1090 ADSB
#define TEST_MODE_SIF       5
#define AIRNAV              6   //VOR/LOG/GS/DME(Tacan)
#define TEST_MODE_COMM      7   //FM/AM voice communications testging
#define TEST_MODE_P25       8  	//APCO P25 digital radio testing
#define SINCGARS            9
#define HAVEQUICK           10



#endif
