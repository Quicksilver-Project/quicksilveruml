/**~activity~ 
 * ForkNode [Class]
 * 
 * Description
 * 
 * A ForkNode is a ControlNode that splits a flow into multiple concurrent flows.
 * 
 * Diagrams
 * 
 * Control Nodes
 * 
 * Generalizations
 * 
 * ControlNode
 * 
 * Constraints
 * 
 *  edges
 * 
 * The ActivityEdges incoming to and outgoing from a ForkNode must be either all ObjectFlows or all
 * ControlFlows.
 * inv: let allEdges : Set(ActivityEdge) = incoming->union(outgoing) in
 * allEdges->forAll(oclIsKindOf(ControlFlow)) or allEdges->forAll(oclIsKindOf(ObjectFlow))
 * 
 *  one_incoming_edge
 * 
 * A ForkNode has one incoming ActivityEdge.
 * inv: incoming->size()=1
**/