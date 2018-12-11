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
 * A_subgroup_superGroup [Association]
 * 
 * Diagrams
 * 
 * Activity Groups
 * 
 * Member Ends
 * 
 *  ActivityGroup::subgroup
 *  ActivityGroup::superGroup
**/