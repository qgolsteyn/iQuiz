#ifndef AikoNode_h
#define AikoNode_h
 
#ifndef DEFAULT_NODE_NAME
#define DEFAULT_NODE_NAME "aiko_node"
#endif
 
void nodeHandler(void); 
void nodeCommand(void);
void sendMessage(const char* message);

#endif
