/**~classification~
 * Parameter [Class]
 * 
 * Description
 * 
 * A Parameter is a specification of an argument used to pass information into or out of an invocation of a
 * BehavioralFeature. Parameters can be treated as ConnectableElements within Collaborations.
 * 
 * Diagrams
 * 
 * Features, Operations, Object Nodes, Expressions, Behaviors
 * 
 * Generalizations
 * 
 * MultiplicityElement, ConnectableElement
 * 
 * Attributes
 * 
 *  /default : String [0..1]
 * 
 * A String that represents a value to be used when no argument is supplied for the Parameter.
 * 
 *  direction : ParameterDirectionKind [1..1] = in
 * 
 * Indicates whether a parameter is being sent into or out of a behavioral element.
 * 
 *  effect : ParameterEffectKind [0..1]
 * 
 * Specifies the effect that executions of the owner of the Parameter have on objects passed in or out of the
 * parameter.
 * 
 *  isException : Boolean [1..1] = false
 * 
 * Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 * 
 *  isStream : Boolean [1..1] = false
 * 
 * Tells whether an input parameter may accept values while its behavior is executing, or whether an output
 * parameter may post values while the behavior is executing.
 * 
 * Association Ends
 * 
 *  ♦ defaultValue : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_defaultValue_owningParameter::owningParameter)
 * 
 * Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the
 * Parameter.
 * 
 *  operation : Operation [0..1]{subsets A_ownedParameter_ownerFormalParam::ownerFormalParam} (opposite
 * Operation::ownedParameter)
 * 
 * The Operation owning this parameter.
 * 
 *  parameterSet : ParameterSet [0..*] (opposite ParameterSet::parameter)
 * 
 * The ParameterSets containing the parameter. See ParameterSet.
 * 
 * Operations
 * 
 *  default() : String [0..1]
 * 
 * Derivation for Parameter::/default
 * 
 * body: if self.type = String then defaultValue.stringValue() else null endif
 * 
 * Constraints
 * 
 *  in_and_out
 * 
 * Only in and inout Parameters may have a delete effect. Only out, inout, and return Parameters may have a
 * create effect.
 * 
 * inv: (effect = ParameterEffectKind::delete implies (direction =
 * ParameterDirectionKind::_'in' or direction = ParameterDirectionKind::inout))
 * and
 * (effect = ParameterEffectKind::create implies (direction = ParameterDirectionKind::out or
 * direction = ParameterDirectionKind::inout or direction = ParameterDirectionKind::return))
 * 
 *  not_exception
 * 
 * An input Parameter cannot be an exception.
 * 
 * inv: isException implies (direction <> ParameterDirectionKind::_'in' and direction <>
 * ParameterDirectionKind::inout)
 * 
 *  connector_end
 * 
 * A Parameter may only be associated with a Connector end within the context of a Collaboration.
 * 
 * inv: end->notEmpty() implies collaboration->notEmpty()
 * 
 *  reentrant_behaviors
 * 
 * Reentrant behaviors cannot have stream Parameters.
 * 
 * inv: (isStream and behavior <> null) implies not behavior.isReentrant
 * 
 *  stream_and_exception
 * 
 * A Parameter cannot be a stream and exception at the same time.
 * 
 * inv: not (isException and isStream)
 * 
 *  object_effect
 * 
 * Parameters typed by DataTypes cannot have an effect.
 * 
 * inv: (type.oclIsKindOf(DataType)) implies (effect = null)
**/