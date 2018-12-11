/**~activity~
 * ActivityNode [Abstract Class]
 * 
 * Description
 * 
 * ActivityNode is an abstract class for points in the flow of an Activity connected by ActivityEdges.
 * 
 * Diagrams
 * 
 * Object Nodes, Activities, Activity Groups, Control Nodes, Executable Nodes, Structured Actions
 * 
 * Generalizations
 * 
 * RedefinableElement
 * 
 * Specializations
 * 
 * ControlNode, ExecutableNode, ObjectNode
 * 
 * Attributes
 * 
 * Association Ends
 * 
 *  activity : Activity [0..1]{subsets Element::owner} (opposite Activity::node)
 * 
 * The Activity containing the ActivityNode, if it is directly owned by an Activity.
 * 
 *  /inGroup : ActivityGroup [0..*]{union} (opposite ActivityGroup::containedNode)
 * 
 * ActivityGroups containing the ActivityNode.
 * 
 *  inInterruptibleRegion : InterruptibleActivityRegion [0..*]{subsets ActivityNode::inGroup} (opposite
 * InterruptibleActivityRegion::node)
 * 
 * InterruptibleActivityRegions containing the ActivityNode.
 * 
 *  inPartition : ActivityPartition [0..*]{subsets ActivityNode::inGroup} (opposite ActivityPartition::node)
 * 
 * ActivityPartitions containing the ActivityNode.
 * 
 *  inStructuredNode : StructuredActivityNode [0..1]{subsets Element::owner, subsets ActivityNode::inGroup}
 * (opposite StructuredActivityNode::node)
 * 
 * The StructuredActivityNode containing the ActvityNode, if it is directly owned by a StructuredActivityNode.
 * 
 *  incoming : ActivityEdge [0..*] (opposite ActivityEdge::target)
 * 
 * ActivityEdges that have the ActivityNode as their target.
 * 
 *  outgoing : ActivityEdge [0..*] (opposite ActivityEdge::source)
 * 
 * ActivityEdges that have the ActivityNode as their source.
 * 
 *  redefinedNode : ActivityNode [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedNode_activityNode::activityNode)
 * 
 * ActivityNodes from a generalization of the Activity containining this ActivityNode that are redefined by this
 * ActivityNode.
 * 
 * Operations
 * 
 *  containingActivity() : Activity [0..1]
 * 
 * The Activity that directly or indirectly contains this ActivityNode.
 * body: if inStructuredNode<>null then inStructuredNode.containingActivity()
 * else activity
 * endif
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * body: redefiningElement.oclIsKindOf(ActivityNode)
**/