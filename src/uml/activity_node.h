/**~activity~
 * A_containedNode_inGroup [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityGroup::containedNode
 *  ActivityNode::inGroup
**/
/**
 * A_inInterruptibleRegion_node [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityNode::inInterruptibleRegion
 *  InterruptibleActivityRegion::node
**/
/**
 * A_inPartition_node [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityNode::inPartition
 *  ActivityPartition::node
**/
/**
 * A_incoming_target_node [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 * 
 *  ActivityNode::incoming
 *  ActivityEdge::target
**/
/**
 * A_node_activity [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 * 
 *  Activity::node
 *  ActivityNode::activity
**/
/**
 * A_outgoing_source_node [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 *  ActivityNode::outgoing
 *  ActivityEdge::source
**/
/**
 * A_redefinedNode_activityNode [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityNode : ActivityNode [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement}
 * (opposite ActivityNode::redefinedNode)
**/
/**
 * A_node_inStructuredNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::node
 *  ActivityNode::inStructuredNode
**/