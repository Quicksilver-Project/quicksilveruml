/**~activity~ 
 * A_exceptionInput_exceptionHandler [Association]
 * 
 * Diagrams
 * 
 * Executable Nodes
 * 
 * Owned Ends
 * 
 *  exceptionHandler : ExceptionHandler [0..*] (opposite ExceptionHandler::exceptionInput)
**/
/**
 * A_exceptionType_exceptionHandler [Association]
 * 
 * Diagrams
 * 
 * Executable Nodes
 * 
 * Owned Ends
 * 
 *  exceptionHandler : ExceptionHandler [0..*] (opposite ExceptionHandler::exceptionType)
**/
/**
 * A_handlerBody_exceptionHandler [Association]
 * 
 * Diagrams
 * 
 * Executable Nodes
 * 
 * Owned Ends
 * 
 *  exceptionHandler : ExceptionHandler [0..*] (opposite ExceptionHandler::handlerBody)
**/
/**
 * A_handler_protectedNode [Association]
 * 
 * Diagrams
 * 
 * Executable Nodes
 * 
 * Member Ends
 * 
 *  ExecutableNode::handler
 *  ExceptionHandler::protectedNode
**/