/**~action~
 * ReplyAction [Class]
 * 
 * Description
 * 
 * A ReplyAction is an Action that
 * accepts a set of reply values
 * and a value containing return information
 * produced by a previous AcceptCallAction.
 * The ReplyAction returns the values
 * to the caller of the previous call,
 * completing execution of the call.
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  replyToCall : Trigger [1..1]
 * (opposite A_replyToCall_replyAction::replyAction)
 * 
 * The Trigger specifying the Operation
 * whose call is being replied to.
 * 
 *  ♦ replyValue : InputPin [0..*]
 * {ordered, subsets Action::input}
 * (opposite A_replyValue_replyAction::replyAction)
 * 
 * A list of InputPins providing
 * the values for the output
 * (inout, out, and return)
 * Parameters of the Operation.
 * These values are returned to the caller.
 * 
 *  ♦ returnInformation : InputPin [1..1]
 * {subsets Action::input} (opposite
 * A_returnInformation_replyAction::replyAction)
 * 
 * An InputPin that holds the
 * return information value
 * produced by an earlier AcceptCallAction.
 * 
 * Constraints
 * 
 *  pins_match_parameter
 * 
 * The replyValue InputPins
 * must match the output
 * (return, out, and inout)
 * parameters of the operation of the
 * event of the replyToCall Trigger
 * in number, type, ordering, and multiplicity.
 * 
 * inv: let parameter:OrderedSet(Parameter) =
 * replyToCall.event.oclAsType(CallEvent).operation.outputParameters() in
 * replyValue->size()=parameter->size() and
 * Sequence{1..replyValue->size()}->forAll(i |
 * replyValue->at(i).type.conformsTo(parameter->at(i).type) and
 * replyValue->at(i).isOrdered=parameter->at(i).isOrdered and
 * replyValue->at(i).compatibleWith(parameter->at(i)))
 * 
 *  event_on_reply_to_call_trigger
 * 
 * The event of the replyToCall Trigger must be a CallEvent.
 * 
 * inv: replyToCall.event.oclIsKindOf(CallEvent)
**/