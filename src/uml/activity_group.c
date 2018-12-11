/**~activity~
 * ActivityGroup [Abstract Class]
 * 
 * Description
 * 
 * ActivityGroup is an abstract class for defining sets of ActivityNodes and ActivityEdges in an Activity.
 * 
 * Diagrams
 * 
 * Activity Groups, Structured Actions
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * ActivityPartition, InterruptibleActivityRegion, StructuredActivityNode
 * 
 * Association Ends
 * 
 *  /containedEdge : ActivityEdge [0..*]{union} (opposite ActivityEdge::inGroup)
 * 
 * ActivityEdges immediately contained in the ActivityGroup.
 * 
 *  /containedNode : ActivityNode [0..*]{union} (opposite ActivityNode::inGroup)
 * 
 * ActivityNodes immediately contained in the ActivityGroup.
 * 
 *  inActivity : Activity [0..1]{subsets Element::owner} (opposite Activity::group)
 * 
 * The Activity containing the ActivityGroup, if it is directly owned by an Activity.
 * 
 *  ♦ /subgroup : ActivityGroup [0..*]{union, subsets Element::ownedElement} (opposite
 * ActivityGroup::superGroup)
 * 
 * Other ActivityGroups immediately contained in this ActivityGroup.
 * 
 *  /superGroup : ActivityGroup [0..1]{union, subsets Element::owner} (opposite ActivityGroup::subgroup)
 * 
 * The ActivityGroup immediately containing this ActivityGroup, if it is directly owned by another
 * ActivityGroup.
 * 
 * Operations
 * 
 *  containingActivity() : Activity [0..1]
 * 
 * The Activity that directly or indirectly contains this ActivityGroup.
 * body: if superGroup<>null then superGroup.containingActivity()
 * else inActivity
 * endif
 * 
 * Constraints
 * 
 *  nodes_and_edges
 * 
 * All containedNodes and containedEdges of an ActivityGroup must be in the same Activity as the group.
 * inv: containedNode->forAll(activity = self.containingActivity()) and
 * containedEdge->forAll(activity = self.containingActivity())
 * 
 *  not_contained
 * 
 * No containedNode or containedEdge of an ActivityGroup may be contained by its subgroups or its
 * superGroups, transitively.
 * inv: subgroup->closure(subgroup).containedNode->excludesAll(containedNode) and
 * superGroup->closure(superGroup).containedNode->excludesAll(containedNode) and
 * subgroup->closure(subgroup).containedEdge->excludesAll(containedEdge) and
 * superGroup->closure(superGroup).containedEdge->excludesAll(containedEdge)
**/