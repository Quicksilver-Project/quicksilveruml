/**~activity~ 
 * InitialNode [Class]
 * 
 * Description
 * 
 * An InitialNode is a ControlNode that offers a single control token when initially enabled.
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
 *  no_incoming_edges
 * 
 * An InitialNode has no incoming ActivityEdges.
 * 
 * inv: incoming->isEmpty()
 * 
 *  control_edges
 * 
 * All the outgoing ActivityEdges from an InitialNode must be ControlFlows.
 * 
 * inv: outgoing->forAll(oclIsKindOf(ControlFlow))
**/