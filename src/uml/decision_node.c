/**~activity~ 
 * DecisionNode [Class]
 * 
 * Description
 * 
 * A DecisionNode is a ControlNode that chooses between outgoing ActivityEdges for the routing of tokens.
 * 
 * Diagrams
 * 
 * Control Nodes
 * 
 * Generalizations
 * 
 * ControlNode
 * 
 * Association Ends
 * 
 *  decisionInput : Behavior [0..1] (opposite A_decisionInput_decisionNode::decisionNode)
 * 
 * A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from
 * the DecisionNode.
 * 
 *  decisionInputFlow : ObjectFlow [0..1] (opposite A_decisionInputFlow_decisionNode::decisionNode)
 * 
 * An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards
 * ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
 * 
 * Constraints
 * 
 *  zero_input_parameters
 * 
 * If the DecisionNode has no decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior
 * has no in parameters.
 * 
 * inv: (decisionInput<>null and decisionInputFlow=null and incoming-
 * >exists(oclIsKindOf(ControlFlow))) implies
 * decisionInput.inputParameters()->isEmpty()
 * 
 *  edges
 * 
 * The ActivityEdges incoming to and outgoing from a DecisionNode, other than the decisionInputFlow (if any),
 * must be either all ObjectFlows or all ControlFlows.
 * 
 * inv: let allEdges: Set(ActivityEdge) = incoming->union(outgoing) in
 * let allRelevantEdges: Set(ActivityEdge) = if decisionInputFlow->notEmpty() then allEdges-
 * >excluding(decisionInputFlow) else allEdges endif in
 * allRelevantEdges->forAll(oclIsKindOf(ControlFlow)) or allRelevantEdges-
 * >forAll(oclIsKindOf(ObjectFlow))
 * 
 *  decision_input_flow_incoming
 * 
 * The decisionInputFlow of a DecisionNode must be an incoming ActivityEdge of the DecisionNode.
 * 
 * inv: incoming->includes(decisionInputFlow)
 * 
 *  two_input_parameters
 * 
 * If the DecisionNode has a decisionInputFlow and a second incoming ObjectFlow, then any decisionInput has
 * two in Parameters, the first of which has a type that is the same as or a supertype of the type of object tokens
 * offered on the non-decisionInputFlow and the second of which has a type that is the same as or a supertype of
 * the type of object tokens offered on the decisionInputFlow.
 * 
 * inv: (decisionInput<>null and decisionInputFlow<>null and incoming-
 * >forAll(oclIsKindOf(ObjectFlow))) implies
 * decisionInput.inputParameters()->size()=2
 * 
 *  incoming_outgoing_edges
 * 
 * A DecisionNode has one or two incoming ActivityEdges and at least one outgoing ActivityEdge.
 * 
 * inv: (incoming->size() = 1 or incoming->size() = 2) and outgoing->size() > 0
 * 
 *  incoming_control_one_input_parameter
 * 
 * If the DecisionNode has a decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior
 * has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the
 * decisionInputFlow.
 * 
 * inv: (decisionInput<>null and decisionInputFlow<>null and incoming-
 * >exists(oclIsKindOf(ControlFlow))) implies
 * decisionInput.inputParameters()->size()=1
 * 
 *  parameters
 * 
 * A decisionInput Behavior has no out parameters, no inout parameters, and one return parameter.
 * 
 * inv: decisionInput<>null implies
 * (decisionInput.ownedParameter->forAll(par |
 * par.direction <> ParameterDirectionKind::out and
 * par.direction <> ParameterDirectionKind::inout ) and
 * decisionInput.ownedParameter->one(par |
 * par.direction <> ParameterDirectionKind::return))
 * 
 *  incoming_object_one_input_parameter
 * 
 * If the DecisionNode has no decisionInputFlow and an incoming ObjectFlow, then any decisionInput Behavior
 * has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the
 * incoming ObjectFlow.
 * 
 * inv: (decisionInput<>null and decisionInputFlow=null and incoming-
 * >forAll(oclIsKindOf(ObjectFlow))) implies
 * decisionInput.inputParameters()->size()=1
**/