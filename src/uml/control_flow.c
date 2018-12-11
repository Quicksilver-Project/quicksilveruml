/**~activity~
 * ControlFlow [Class]
 * 
 * Description
 * 
 * A ControlFlow is an ActivityEdge traversed by control tokens or object tokens of control type, which are use to control
 * the execution of ExecutableNodes.
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Generalizations
 * 
 * ActivityEdge
 * 
 * Constraints
 * 
 *  object_nodes
 * 
 * ControlFlows may not have ObjectNodes at either end, except for ObjectNodes with control type.
 * inv: (source.oclIsKindOf(ObjectNode) implies source.oclAsType(ObjectNode).isControlType) and
 * (target.oclIsKindOf(ObjectNode) implies target.oclAsType(ObjectNode).isControlType)
**/