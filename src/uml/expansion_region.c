/**~action~
 * ExpansionRegion [Class]
 * 
 * Description
 * 
 * An ExpansionRegion is a StructuredActivityNode that executes its content multiple times corresponding to elements of
 * input collection(s).
 * 
 * Diagrams
 * 
 * Expansion Regions
 * 
 * Generalizations
 * 
 * StructuredActivityNode
 * 
 * Attributes
 * 
 *  mode : ExpansionKind [1..1] = iterative
 * 
 * The mode in which the ExpansionRegion executes its contents. If parallel, executions are concurrent. If
 * iterative, executions are sequential. If stream, a stream of values flows into a single execution.
 * 
 * Association Ends
 * 
 *  inputElement : ExpansionNode [1..*] (opposite ExpansionNode::regionAsInput)
 * 
 * The ExpansionNodes that hold the input collections for the ExpansionRegion.
 * 
 *  outputElement : ExpansionNode [0..*] (opposite ExpansionNode::regionAsOutput)
 * 
 * The ExpansionNodes that form the output collections of the ExpansionRegion.
**/