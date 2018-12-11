/**~activity~ 
 * JoinNode [Class]
 * 
 * Description
 * 
 * A JoinNode is a ControlNode that synchronizes multiple flows.
 * 
 * Diagrams
 * 
 * Control Nodes
 * 
 * Generalizations
 * 
 * ControlNode
 * 
 * Attributes
 * 
 *  isCombineDuplicate : Boolean [1..1] = true
 * 
 * Indicates whether incoming tokens having objects with the same identity are combined into one by the
 * JoinNode.
 * 
 * Association Ends
 * 
 *  ♦ joinSpec : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_joinSpec_joinNode::joinNode)
 * 
 * A ValueSpecification giving the condition under which the JoinNode will offer a token on its outgoing
 * ActivityEdge. If no joinSpec is specified, then the JoinNode will offer an outgoing token if tokens are offered
 * on all of its incoming ActivityEdges (an "and" condition).
 * 
 * Constraints
 * 
 *  one_outgoing_edge
 * 
 * A JoinNode has one outgoing ActivityEdge.
 * inv: outgoing->size() = 1
 * 
 *  incoming_object_flow
 * 
 * If one of the incoming ActivityEdges of a JoinNode is an ObjectFlow, then its outgoing ActivityEdge must be
 * an ObjectFlow. Otherwise its outgoing ActivityEdge must be a ControlFlow.
 * inv: if incoming->exists(oclIsKindOf(ObjectFlow)) then outgoing-
 * >forAll(oclIsKindOf(ObjectFlow))
 * else outgoing->forAll(oclIsKindOf(ControlFlow))
 * endif
**/