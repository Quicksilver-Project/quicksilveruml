/**~activity~
 * Activity [Class]
 * 
 * Description
 * 
 * An Activity is the specification of parameterized Behavior as the coordinated sequencing of subordinate units.
 * 
 * Diagrams
 * 
 * Activities, Activity Groups, Structured Actions
 * 
 * Generalizations
 * 
 * Behavior
 * 
 * Attributes
 * 
 *  isReadOnly : Boolean [1..1] = false
 * 
 * If true, this Activity must not make any changes to objects. The default is false (an Activity may make nonlocal
 * changes). (This is an assertion, not an executable property. It may be used by an execution engine to optimize
 * model execution. If the assertion is violated by the Activity, then the model is ill-formed.)
 * 
 *  isSingleExecution : Boolean [1..1] = false
 * 
 * If true, all invocations of the Activity are handled by the same execution.
 * 
 * Association Ends
 * 
 *  ♦ edge : ActivityEdge [0..*]{subsets Element::ownedElement} (opposite ActivityEdge::activity)
 * 
 * ActivityEdges expressing flow between the nodes of the Activity.
 * 
 *  ♦ group : ActivityGroup [0..*]{subsets Element::ownedElement} (opposite ActivityGroup::inActivity)
 * 
 * Top-level ActivityGroups in the Activity.
 * 
 *  ♦ node : ActivityNode [0..*]{subsets Element::ownedElement} (opposite ActivityNode::activity)
 * 
 * ActivityNodes coordinated by the Activity.
 * 
 *  partition : ActivityPartition [0..*]{subsets Activity::group} (opposite A_partition_activity::activity)
 * 
 * Top-level ActivityPartitions in the Activity.
 * 
 *  ♦ structuredNode : StructuredActivityNode [0..*]{subsets Activity::group, subsets Activity::node} (opposite
 * StructuredActivityNode::activity)
 * 
 * Top-level StructuredActivityNodes in the Activity.
 * 
 *  ♦ variable : Variable [0..*]{subsets Namespace::ownedMember} (opposite Variable::activityScope)
 * 
 * Top-level Variables defined by the Activity.
 * 
 * Constraints
 * 
 *  maximum_one_parameter_node
 * 
 * A Parameter with direction other than inout must have exactly one ActivityParameterNode in an Activity.
 * inv: ownedParameter->forAll(p |
 * p.direction <> ParameterDirectionKind::inout implies node->select(
 * oclIsKindOf(ActivityParameterNode) and oclAsType(ActivityParameterNode).parameter =
 * p)->size()= 1)
 * 
 *  maximum_two_parameter_nodes
 * 
 * A Parameter with direction inout must have exactly two ActivityParameterNodes in an Activity, at most one
 * with incoming ActivityEdges and at most one with outgoing ActivityEdges.
 * inv: ownedParameter->forAll(p |
 * p.direction = ParameterDirectionKind::inout implies
 * let associatedNodes : Set(ActivityNode) = node->select(
 * oclIsKindOf(ActivityParameterNode) and oclAsType(ActivityParameterNode).parameter =\
 * p) in
 * associatedNodes->size()=2 and
 * associatedNodes->select(incoming->notEmpty())->size()<=1 and
 * associatedNodes->select(outgoing->notEmpty())->size()<=1
 * )
**/