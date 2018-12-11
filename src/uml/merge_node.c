/**~activity~ 
 * MergeNode [Class]
 * 
 * Description
 * 
 * A merge node is a control node that brings together multiple alternate flows. It is not used to synchronize concurrent
 * flows but to accept one among several alternate flows.
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
 *  one_outgoing_edge
 * 
 * A MergeNode has one outgoing ActivityEdge.
 * inv: outgoing->size()=1
 * 
 *  edges
 * 
 * The ActivityEdges incoming to and outgoing from a MergeNode must be either all ObjectFlows or all
 * ControlFlows.
 * inv: let allEdges : Set(ActivityEdge) = incoming->union(outgoing) in
 * allEdges->forAll(oclIsKindOf(ControlFlow)) or allEdges->forAll(oclIsKindOf(ObjectFlow))
**/