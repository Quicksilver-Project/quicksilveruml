/**~activity~
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
 * A_group_inActivity [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  Activity::group
 *  ActivityGroup::inActivity
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
 * A_partition_activity [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Owned Ends
 * 
 *  activity : Activity [0..1]{subsets ActivityGroup::inActivity} (opposite Activity::partition)
**/
/**
 * A_structuredNode_activity [Association]
 * 
 * Diagrams
 * 
 * Structured Actions
 * 
 * Member Ends
 * 
 *  Activity::structuredNode
 *  StructuredActivityNode::activity
**/
/**
 * A_variable_activityScope [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Member Ends
 * 
 *  Activity::variable
 *  Variable::activityScope
**/
