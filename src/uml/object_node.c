/**~activity~ 
 * ObjectNode [Abstract Class]
 * 
 * Description
 * 
 * An ObjectNode is an abstract ActivityNode that may hold tokens within the object flow in an Activity. ObjectNodes
 * also support token selection, limitation on the number of tokens held, specification of the state required for tokens being
 * held, and carrying control values.
 * 
 * Diagrams
 * 
 * Object Nodes, Executable Nodes, Actions, Expansion Regions
 * 
 * Generalizations
 * 
 * TypedElement, ActivityNode
 * 
 * Specializations
 * 
 * ActivityParameterNode, CentralBufferNode, ExpansionNode, Pin
 * 
 * Attributes
 * 
 *  isControlType : Boolean [1..1] = false
 * 
 * Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse
 * ControlFlows.
 * 
 *  ordering : ObjectNodeOrderingKind [1..1] = FIFO
 * 
 * Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing
 * from the ObjectNode.
 * 
 * Association Ends
 * 
 *  inState : State [0..*] (opposite A_inState_objectNode::objectNode)
 * 
 * The States required to be associated with the values held by tokens on this ObjectNode.
 * 
 *  selection : Behavior [0..1] (opposite A_selection_objectNode::objectNode)
 * 
 * A Behavior used to select tokens to be offered on outgoing ActivityEdges.
 * 
 *  ♦ upperBound : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_upperBound_objectNode::objectNode)
 * 
 * The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the
 * ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many
 * tokens the ObjectNode can hold.
 * 
 * Constraints
 * 
 *  input_output_parameter
 * 
 * A selection Behavior has one input Parameter and one output Parameter. The input Parameter must have the
 * same type as or a supertype of the type of ObjectNode, be non-unique, and have multiplicity 0..*. The output
 * Parameter must be the same or a subtype of the type of ObjectNode. The Behavior cannot have side effects.
 * 
 * inv: selection<>null implies
 * selection.inputParameters()->size()=1 and
 * selection.inputParameters()->forAll(p | not p.isUnique and p.is(0,*) and
 * self.type.conformsTo(p.type)) and
 * selection.outputParameters()->size()=1 and
 * selection.inputParameters()->forAll(p | self.type.conformsTo(p.type))
 * 
 *  selection_behavior
 * 
 * If an ObjectNode has a selection Behavior, then the ordering of the object node is ordered, and vice versa.
 * 
 * inv: (selection<>null) = (ordering=ObjectNodeOrderingKind::ordered)
 * 
 *  object_flow_edges
 * 
 * If isControlType=false, the ActivityEdges incoming to or outgoing from an ObjectNode must all be
 * ObjectFlows.
 * 
 * inv: (not isControlType) implies incoming->union(outgoing)->forAll(oclIsKindOf(ObjectFlow))
**/