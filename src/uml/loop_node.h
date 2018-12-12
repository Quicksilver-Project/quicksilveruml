#include "structured_activity_node.h"
/**~action~
 * A_bodyOutput_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..*] (opposite LoopNode::bodyOutput)
**/
/**
 * A_bodyPart_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1] (opposite LoopNode::bodyPart)
**/
/**
 * A_decider_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1] (opposite LoopNode::decider)
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
 * A_structuredNodeInput_structuredActivityNode::structuredActivityNode} (opposite
 * LoopNode::loopVariableInput)
**/
/**
 * A_loopVariable_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1]{subsets Element::owner} (opposite LoopNode::loopVariable)
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
 *  loopNode : LoopNode [0..1]{subsets
 * A_structuredNodeOutput_structuredActivityNode::structuredActivityNode} (opposite LoopNode::result)
**/
/**
 * A_setupPart_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1] (opposite LoopNode::setupPart)
**/
/**
 * A_test_loopNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  loopNode : LoopNode [0..1] (opposite LoopNode::test)
**/