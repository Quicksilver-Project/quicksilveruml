/**~activity~
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
 * A_represents_activityPartition [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Owned Ends
 * 
 *  activityPartition : ActivityPartition [0..*] (opposite ActivityPartition::represents)
**/
/**
 * A_subpartition_superPartition [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityPartition::subpartition
 *  ActivityPartition::superPartition
**/