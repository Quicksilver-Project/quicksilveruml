/**~activity~ 
 * ObjectFlow [Class]
 * 
 * Description
 * 
 * An ObjectFlow is an ActivityEdge that is traversed by object tokens that may hold values. Object flows also support
 * multicast/receive, token selection from object nodes, and transformation of tokens.
 * 
 * Diagrams
 * 
 * Activities, Control Nodes
 * 
 * Generalizations
 * 
 * ActivityEdge
 * 
 * Attributes
 * 
 *  isMulticast : Boolean [1..1] = false
 * 
 * Indicates whether the objects in the ObjectFlow are passed by multicasting.
 * 
 *  isMultireceive : Boolean [1..1] = false
 * 
 * Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
 * 
 * Association Ends
 * 
 *  selection : Behavior [0..1] (opposite A_selection_objectFlow::objectFlow)
 * 
 * A Behavior used to select tokens from a source ObjectNode.
 * 
 *  transformation : Behavior [0..1] (opposite A_transformation_objectFlow::objectFlow)
 * 
 * A Behavior used to change or replace object tokens flowing along the ObjectFlow.
 * 
 * Constraints
 * 
 *  input_and_output_parameter
 * 
 * A selection Behavior has one input Parameter and one output Parameter. The input Parameter must have the
 * same as or a supertype of the type of the source ObjectNode, be non-unique and have multiplicity 0..*. The
 * output Parameter must be the same or a subtype of the type of source ObjectNode. The Behavior cannot have
 * side effects.
 * 
 * inv: selection<>null implies
 * selection.inputParameters()->size()=1 and
 * selection.inputParameters()->forAll(not isUnique and is(0,*)) and
 * selection.outputParameters()->size()=1
 * 
 *  no_executable_nodes
 * 
 * ObjectFlows may not have ExecutableNodes at either end.
 * 
 * inv: not (source.oclIsKindOf(ExecutableNode) or target.oclIsKindOf(ExecutableNode))
 * 
 *  transformation_behavior
 * 
 * A transformation Behavior has one input Parameter and one output Parameter. The input Parameter must be the
 * same as or a supertype of the type of object token coming from the source end. The output Parameter must be
 * the same or a subtype of the type of object token expected downstream. The Behavior cannot have side effects.
 * 
 * inv: transformation<>null implies
 * transformation.inputParameters()->size()=1 and
 * transformation.outputParameters()->size()=1
 * 
 *  selection_behavior
 * 
 * An ObjectFlow may have a selection Behavior only if it has an ObjectNode as its source.
 * 
 * inv: selection<>null implies source.oclIsKindOf(ObjectNode)
 * 
 *  compatible_types
 * 
 * ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have compatible
 * types. In particular, the downstream ObjectNode type must be the same or a supertype of the upstream
 * ObjectNode type.
 * 
 * Cannot be expressed in OCL
 * 
 *  same_upper_bounds
 * 
 * ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have the same
 * upperBounds.
 * 
 * Cannot be expressed in OCL
 * 
 *  target
 * 
 * An ObjectFlow with a constant weight may not target an ObjectNode, with optionally intervening
 * ControlNodes, that has an upper bound less than the weight.
 * 
 * Cannot be expressed in OCL
 * 
 *  is_multicast_or_is_multireceive
 * 
 * isMulticast and isMultireceive cannot both be true.
 * 
 * inv: not (isMulticast and isMultireceive)
**/