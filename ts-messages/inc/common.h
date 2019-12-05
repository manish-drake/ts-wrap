/// \file common.h
/// \brief  <Description>

#ifndef __common__h
#define __common__h


#include <time.h>
#include <math.h>
#include <stdint.h>
#include "inc/json.h"


typedef uint32_t dword; 
typedef uint16_t word; 
typedef uint8_t byte;
typedef double freq;

typedef int (*COMMANDHANDLER)(Json::Value &msgRoot, Json::Value &respRoot);
typedef int (*COMMANDHANDLERV2)(Json::Value &msgRoot, Json::Value &respRoot,int sourceaddress);



template <class T>
struct MessageHandlerEntry
{
    int cmdid;
    int (T::*commandhandler)(Json::Value&,Json::Value&, int);
};




struct HandlerEntry
{
    int cmdid;
    COMMANDHANDLER commandhandler;
};

struct HandlerEntryV2
{
    int cmdid;
    COMMANDHANDLERV2 commandhandler;
};

typedef uint16_t FPGARegisterAddress;
typedef uint16_t FPGARegisterValue;



static const int FPGA_MEMORY_MAP_SIZE= 2 << 17;

static unsigned char lookup[16] = {
	0x0, 0x8, 0x4, 0xc, 0x2, 0xa, 0x6, 0xe,
	0x1, 0x9, 0x5, 0xd, 0x3, 0xb, 0x7, 0xf, };

inline unsigned char nibbleReverse(unsigned char n){
	return lookup[n&0x0f];
}

inline unsigned char reverse(unsigned char n) {

   // Reverse the top and bottom nibble then swap them.
   return (lookup[n&0x0f] << 4) | lookup[n>>4];
}



#endif

