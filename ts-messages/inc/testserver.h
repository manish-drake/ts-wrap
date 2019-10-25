#ifndef TEST_SERVER_H_INCLUDED
#define TEST_SERVER_H_INCLUDED
#include <sys/types.h>
#include "json.h"
#include "utilities/refcountedbase.h"

extern const char* const szAppName;


typedef enum tagEnumMessageHandlerType{V2JSON_HANDLER}MessageHandlerType;
typedef int (*V2MESSAGEHANDLER)(int nMessageId,Json::Value &requestRoot, Json::Value &responseRoot);

typedef struct _HANDLER_ENTRY: ReferenceCountedBase{

	V2MESSAGEHANDLER pHandler;

}HANDLERENTRY,*PHANDLERENTRY;

void 			registerMessageHandler(int messageNumber,MessageHandlerType type,V2MESSAGEHANDLER pHandler);
void 			unregisterMessageHandler(int messageNumber,MessageHandlerType type,V2MESSAGEHANDLER pHandler);
PHANDLERENTRY 	getMessageHandler(int messageNumber,MessageHandlerType type);
void 			message_server(void );

#endif
