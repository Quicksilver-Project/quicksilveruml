/**~action~
 * SequenceNode [Class]
 * 
 * Description
 * 
 * A SequenceNode is a StructuredActivityNode
 * that executes a sequence of ExecutableNodes in order.
 * 
 * Diagrams
 * 
 * Generalizations
 * 
 * StructuredActivityNode
 * 
 * Association Ends
 * 
 *  ♦ executableNode : ExecutableNode [0..*]
 * {ordered, redefines StructuredActivityNode::node}
 * (opposite
 * A_executableNode_sequenceNode::sequenceNode)
 * 
 * The ordered set of ExecutableNodes to be sequenced.
**/