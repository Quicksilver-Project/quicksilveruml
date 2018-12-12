#include "activity_node.h"

/**~activity~ 
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
/**
 * A_executableNode_sequenceNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  sequenceNode : SequenceNode [0..1]{subsets ActivityNode::inStructuredNode} (opposite
 * SequenceNode::executableNode)
**/