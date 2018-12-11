/**~action~
 * OutputPin [Class]
 * 
 * Description
 * 
 * An OutputPin is a Pin that holds output values produced by an Action.
 * 
 * Diagrams
 * 
 * Actions, Invocation Actions, Link Actions, Link Object Actions, Structural Feature Actions, Accept Event
 * Actions, Other Actions, Variable Actions, Structured Actions, Object Actions
 * 
 * Generalizations
 * 
 * Pin
 * 
 * Constraints
 * 
 *  incoming_edges_structured_only
 * 
 * An OutputPin may have incoming ActivityEdges only when it is owned by a StructuredActivityNode, and
 * these edges must have sources contained (directly or indirectly) in the owning StructuredActivityNode.
 * 
 * inv: incoming->notEmpty() implies
 * action<>null and
 * action.oclIsKindOf(StructuredActivityNode) and
 * action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(incoming.source)
**/