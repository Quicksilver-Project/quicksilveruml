

/**~action~
 * AcceptCallAction [Class]
 * 
 * Description
 * 
 * An AcceptCallAction is an AcceptEventAction that handles the receipt of a synchronous call request. In addition to the
 * values from the Operation input parameters, the Action produces an output that is needed later to supply the information
 * to the ReplyAction necessary to return control to the caller. An AcceptCallAction is for synchronous calls. If it is used
 * to handle an asynchronous call, execution of the subsequent ReplyAction will complete immediately with no effect.
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Generalizations
 * 
 * AcceptEventAction
 * 
 * Association Ends
 * 
 *  ♦ returnInformation : OutputPin [1..1]{subsets Action::output} (opposite
 * A_returnInformation_acceptCallAction::acceptCallAction)
 * 
 * An OutputPin where a value is placed containing sufficient information to perform a subsequent ReplyAction
 * and return control to the caller. The contents of this value are opaque. It can be passed and copied but it cannot
 * be manipulated by the model.
 * 
 * Constraints
 * 
 *  result_pins
 * 
 * The number of result OutputPins must be the same as the number of input (in and inout) ownedParameters of
 * the Operation specified by the trigger Event. The type, ordering and multiplicity of each result OutputPin must
 * be consistent with the corresponding input Parameter.
 * 
 * inv: let parameter: OrderedSet(Parameter) = trigger.event->asSequence()-
 * >first().oclAsType(CallEvent).operation.inputParameters() in
 * result->size() = parameter->size() and
 * Sequence{1..result->size()}->forAll(i |
 * parameter->at(i).type.conformsTo(result->at(i).type) and
 * parameter->at(i).isOrdered = result->at(i).isOrdered and
 * parameter->at(i).compatibleWith(result->at(i)))
 * 
 *  trigger_call_event
 * 
 * The action must have exactly one trigger, which must be for a CallEvent.
 * 
 * inv: trigger->size()=1 and
 * trigger->asSequence()->first().event.oclIsKindOf(CallEvent)
 * 
 *  unmarshall
 * 
 * isUnmarshall must be true for an AcceptCallAction.
 * 
 * inv: isUnmarshall = true
**/