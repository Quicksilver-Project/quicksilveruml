/**~activity~ 
 * FinalNode [Abstract Class]
 * 
 * Description
 * 
 * A FinalNode is an abstract ControlNode at which a flow in an Activity stops.
 * 
 * Diagrams
 * 
 * Control Nodes
 * 
 * Generalizations
 * 
 * ControlNode
 * 
 * Specializations
 * 
 * ActivityFinalNode, FlowFinalNode
 * 
 * Constraints
 * 
 *  no_outgoing_edges
 * 
 * A FinalNode has no outgoing ActivityEdges.
 * 
 * inv: outgoing->isEmpty()
**/