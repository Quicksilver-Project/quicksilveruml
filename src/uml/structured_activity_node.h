#include "action.h"
#include "activity_group.h"
#include "namespace.h"
/**~action~
 * A_edge_inStructuredNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::edge
 *  ActivityEdge::inStructuredNode
**/
/**
 * 
 * A_loopVariableInput_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1]{subsets
 * A_structuredNodeInput_structuredActivityNode
 * ::structuredActivityNode} (opposite
 * LoopNode::loopVariableInput)
**/
/**
 * A_node_inStructuredNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::node
 *  ActivityNode::inStructuredNode
**/
/**
 * A_result_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1]
 * {subsets
 * A_structuredNodeOutput_structuredActivityNode
 * ::structuredActivityNode}
 * (opposite LoopNode::result)
**/
/**
 * A_structuredNodeInput_structuredActivityNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  structuredActivityNode : StructuredActivityNode
 * [0..1]{subsets A_input_action::action}
 * (opposite
 * StructuredActivityNode::structuredNodeInput)
**/
/**
 * A_structuredNodeOutput_structuredActivityNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  structuredActivityNode : StructuredActivityNode
 * [0..1]{subsets A_output_action::action}
 * (opposite
 * StructuredActivityNode::structuredNodeOutput)
**/
/**
 * A_variable_scope [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::variable
 *  Variable::scope
**/