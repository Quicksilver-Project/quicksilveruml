
/**~action~
 * CallAction [Abstract Class]
 * 
 * Description
 * 
 * CallAction is an abstract class for Actions that invoke a Behavior with given argument values and (if the invocation is
 * synchronous) receive reply values.
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * InvocationAction
 * 
 * Specializations
 * 
 * CallBehaviorAction, CallOperationAction, StartObjectBehaviorAction
 * 
 * Attributes
 * 
 *  isSynchronous : Boolean [1..1] = true
 * 
 * If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is
 * asynchronous and the caller proceeds immediately and cannot receive return values.
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [0..*]{ordered, subsets Action::output} (opposite A_result_callAction::callAction)
 * 
 * The OutputPins on which the reply values from the invocation are placed (if the call is synchronous).
 * 
 * Operations
 * 
 *  inputParameters() : Parameter [0..*]{ordered}
 * 
 * Return the in and inout ownedParameters of the Behavior or Operation being called. (This operation is abstract
 * and should be overridden by subclasses of CallAction.)
 * 
 *  outputParameters() : Parameter [0..*]{ordered}
 * 
 * Return the inout, out and return ownedParameters of the Behavior or Operation being called. (This operation is
 * abstract and should be overridden by subclasses of CallAction.)
 * 
 * Constraints
 * 
 *  argument_pins
 * 
 * The number of argument InputPins must be the same as the number of input (in and inout) ownedParameters of
 * the called Behavior or Operation. The type, ordering and multiplicity of each argument InputPin must be
 * consistent with the corresponding input Parameter.
 * 
 * inv: let parameter: OrderedSet(Parameter) = self.inputParameters() in
 * argument->size() = parameter->size() and
 * Sequence{1..argument->size()}->forAll(i |
 * argument->at(i).type.conformsTo(parameter->at(i).type) and
 * argument->at(i).isOrdered = parameter->at(i).isOrdered and
 * argument->at(i).compatibleWith(parameter->at(i)))
 * 
 *  result_pins
 * 
 * The number of result OutputPins must be the same as the number of output (inout, out and return)
 * ownedParameters of the called Behavior or Operation. The type, ordering and multiplicity of each result
 * OutputPin must be consistent with the corresponding input Parameter.
 * 
 * inv: let parameter: OrderedSet(Parameter) = self.outputParameters() in
 * result->size() = parameter->size() and
 * Sequence{1..result->size()}->forAll(i |
 * parameter->at(i).type.conformsTo(result->at(i).type) and
 * parameter->at(i).isOrdered = result->at(i).isOrdered and
 * parameter->at(i).compatibleWith(result->at(i)))
 * 
 *  synchronous_call
 * 
 * Only synchronous CallActions can have result OutputPins.
 * 
 * inv: result->notEmpty() implies isSynchronous
**/