/**~action~
 * InputPin [Class]
 * 
 * Description
 * 
 * An InputPin is a Pin that holds input values to be consumed by an Action.
 * 
 * Diagrams
 * 
 * Actions, Invocation Actions, Link End Data, Link Actions, Link Object Actions, Structural Feature Actions,
 * Accept Event Actions, Other Actions, Variable Actions, Structured Actions, Object Actions
 * 
 * Generalizations
 * 
 * Pin
 * 
 * Specializations
 * 
 * ActionInputPin, ValuePin
 * 
 * Constraints
 * 
 *  outgoing_edges_structured_only
 * 
 * An InputPin may have outgoing ActivityEdges only when it is owned by a StructuredActivityNode, and these
 * edges must target a node contained (directly or indirectly) in the owning StructuredActivityNode.
 * 
 * inv: outgoing->notEmpty() implies
 * action<>null and
 * action.oclIsKindOf(StructuredActivityNode) and
 * action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(outgoing.target)
**/