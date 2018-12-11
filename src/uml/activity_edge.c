/**~activity~
 * ActivityEdge [Abstract Class]
 * 
 * Description
 * 
 * An ActivityEdge is an abstract class for directed connections between two ActivityNodes.
 * 
 * Diagrams
 * 
 * Activities, Activity Groups, Information Flows, Structured Actions
 * 
 * Generalizations
 * 
 * RedefinableElement
 * 
 * Specializations
 * 
 * ControlFlow, ObjectFlow
 * 
 * Attributes
 * 
 * Association Ends
 * 
 *  activity : Activity [0..1]{subsets Element::owner} (opposite Activity::edge)
 * 
 * The Activity containing the ActivityEdge, if it is directly owned by an Activity.
 * 
 *  ♦ guard : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_guard_activityEdge::activityEdge)
 * 
 * A ValueSpecification that is evaluated to determine if a token can traverse the ActivityEdge. If an ActivityEdge
 * has no guard, then there is no restriction on tokens traversing the edge.
 * 
 *  /inGroup : ActivityGroup [0..*]{union} (opposite ActivityGroup::containedEdge)
 * 
 * ActivityGroups containing the ActivityEdge.
 * 
 *  inPartition : ActivityPartition [0..*]{subsets ActivityEdge::inGroup} (opposite ActivityPartition::edge)
 * 
 * ActivityPartitions containing the ActivityEdge.
 * 
 *  inStructuredNode : StructuredActivityNode [0..1]{subsets ActivityEdge::inGroup, subsets Element::owner}
 * (opposite StructuredActivityNode::edge)
 * 
 * The StructuredActivityNode containing the ActivityEdge, if it is owned by a StructuredActivityNode.
 * 
 *  interrupts : InterruptibleActivityRegion [0..1] (opposite InterruptibleActivityRegion::interruptingEdge)
 * 
 * The InterruptibleActivityRegion for which this ActivityEdge is an interruptingEdge.
 * 
 *  redefinedEdge : ActivityEdge [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedEdge_activityEdge::activityEdge)
 * 
 * ActivityEdges from a generalization of the Activity containing this ActivityEdge that are redefined by this
 * ActivityEdge.
 * 
 *  source : ActivityNode [1..1] (opposite ActivityNode::outgoing)
 * 
 * The ActivityNode from which tokens are taken when they traverse the ActivityEdge.
 * 
 *  target : ActivityNode [1..1] (opposite ActivityNode::incoming)
 * 
 * The ActivityNode to which tokens are put when they traverse the ActivityEdge.
 * 
 *  ♦ weight : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_weight_activityEdge::activityEdge)
 * 
 * The minimum number of tokens that must traverse the ActivityEdge at the same time. If no weight is specified,
 * this is equivalent to specifying a constant value of 1.
 * 
 * Operations
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * body: redefiningElement.oclIsKindOf(ActivityEdge)
 * 
 * Constraints
 * 
 *  source_and_target
 * 
 * If an ActivityEdge is directly owned by an Activity, then its source and target must be directly or indirectly
 * contained in the same Activity.
 * inv: activity<>null implies source.containingActivity() = activity and
 * target.containingActivity() = activity
**/