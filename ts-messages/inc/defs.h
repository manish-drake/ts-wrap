/*
 * defs.h
 *
 *  Created on: Jan 18, 2018
 *      Author: claganga
 */

#ifndef SRC_INC_DEFS_H_
#define SRC_INC_DEFS_H_

#include <inttypes.h>

#ifndef STATUS_CODE
#define STATUS_CODE int
#endif

#ifndef TRUE
#define TRUE true
#endif

#ifndef FALSE
#define FALSE false
#endif

#ifndef INT64
#define INT64 int64_t
#endif

#ifndef UINT64
#define UINT64 uint64_t
#endif

#ifndef INT32
#define INT32  int
#endif

#ifndef UINT32
#define UINT32 unsigned int
#endif


#ifndef INT16
#define INT16  short
#endif


#ifndef UINT16
#define UINT16 unsigned short
#endif

#ifndef INT8
#define INT8  char
#endif

#ifndef UINT8
#define UINT8 unsigned char
#endif

#ifndef LBOOL
#define LBOOL UINT32
#endif

#ifndef __min
#define __min(a,b) (((a)<(b))?(a):(b))
#endif

#ifndef __max
#define __max(a,b) (((a)>(b))?(a):(b))
#endif



#endif /* SRC_INC_DEFS_H_ */
