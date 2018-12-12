#include "redefinable_element.h"

/**~activity~
 * A_containedEdge_inGroup [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityGroup::containedEdge
 *  ActivityEdge::inGroup
**/
/**
 * A_edge_activity [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 * 
 *  Activity::edge
 *  ActivityEdge::activity
**/
/**
 * A_edge_inPartition [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityPartition::edge
 *  ActivityEdge::inPartition
**/
/**
 * A_guard_activityEdge [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityEdge : ActivityEdge [0..1]{subsets Element::owner} (opposite ActivityEdge::guard)
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
 * A_interruptingEdge_interrupts [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  InterruptibleActivityRegion::interruptingEdge
 *  ActivityEdge::interrupts
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
 * A_redefinedEdge_activityEdge [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityEdge : ActivityEdge [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement}
 * (opposite ActivityEdge::redefinedEdge)
**/
/**
 * A_weight_activityEdge [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityEdge : ActivityEdge [0..1]{subsets Element::owner} (opposite ActivityEdge::weight)
**/
/**
 * A_edge_inStructuredNode [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  StructuredActivityNode::edge
 *  ActivityEdge::inStructuredNode
**/