/**~action~
 * A_clause_conditionalNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  conditionalNode : ConditionalNode [1..1]{subsets Element::owner} (opposite ConditionalNode::clause)
**/
/**
 * A_result_conditionalNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Owned Ends
 * 
 *  conditionalNode : ConditionalNode [0..1]{subsets
 * A_structuredNodeOutput_structuredActivityNode::structuredActivityNode} (opposite
 * ConditionalNode::result)
**/