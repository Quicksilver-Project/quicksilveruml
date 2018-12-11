/**~action~
 * AcceptEventAction [Class]
 * 
 * Description
 * 
 * An AcceptEventAction is an Action that waits for the occurrence of one or more specific Events.
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Specializations
 * 
 * AcceptCallAction
 * 
 * Attributes
 * 
 *  isUnmarshall : Boolean [1..1] = false
 * 
 * Indicates whether there is a single OutputPin for a SignalEvent occurrence, or multiple OutputPins for attribute
 * values of the instance of the Signal associated with a SignalEvent occurrence.
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [0..*]{ordered, subsets Action::output} (opposite
 * A_result_acceptEventAction::acceptEventAction)
 * 
 * OutputPins holding the values received from an Event occurrence.
 * 
 *  ♦ trigger : Trigger [1..*]{subsets Element::ownedElement} (opposite
 * A_trigger_acceptEventAction::acceptEventAction)
 * 
 * The Triggers specifying the Events of which the AcceptEventAction waits for occurrences.
 * 
 * Constraints
 * 
 *  one_output_pin
 * 
 * If isUnmarshall=false and any of the triggers are for SignalEvents or TimeEvents, there must be exactly one
 * result OutputPin with multiplicity 1..1.
 * 
 * inv: not isUnmarshall and trigger->exists(event.oclIsKindOf(SignalEvent) or
 * event.oclIsKindOf(TimeEvent)) implies
 * output->size() = 1 and output->first().is(1,1)
 * 
 *  no_input_pins
 * 
 * AcceptEventActions may have no input pins.
 * inv: input->size() = 0
 * 
 *  no_output_pins
 * 
 * There are no OutputPins if the trigger events are only ChangeEvents and/or CallEvents when this action is an
 * instance of AcceptEventAction and not an instance of a descendant of AcceptEventAction (such as
 * AcceptCallAction).
 * 
 * inv: (self.oclIsTypeOf(AcceptEventAction) and
 * (trigger->forAll(event.oclIsKindOf(ChangeEvent) or
 * event.oclIsKindOf(CallEvent))))
 * implies output->size() = 0
 * 
 *  unmarshall_signal_events
 * 
 * If isUnmarshall is true (and this is not an AcceptCallAction), there must be exactly one trigger, which is for a
 * SignalEvent. The number of result output pins must be the same as the number of attributes of the signal. The
 * type and ordering of each result output pin must be the same as the corresponding attribute of the signal. The
 * multiplicity of each result output pin must be compatible with the multiplicity of the corresponding attribute.
 * 
 * inv: isUnmarshall and self.oclIsTypeOf(AcceptEventAction) implies
 * trigger->size()=1 and
 * trigger->asSequence()->first().event.oclIsKindOf(SignalEvent) and
 * let attribute: OrderedSet(Property) = trigger->asSequence()-
 * >first().event.oclAsType(SignalEvent).signal.allAttributes() in
 * attribute->size()>0 and result->size() = attribute->size() and
 * Sequence{1..result->size()}->forAll(i |
 * result->at(i).type = attribute->at(i).type and
 * result->at(i).isOrdered = attribute->at(i).isOrdered and
 * result->at(i).includesMultiplicity(attribute->at(i)))
 * 
 *  conforming_type
 * 
 * If isUnmarshall=false and all the triggers are for SignalEvents, then the type of the single result OutputPin
 * must either be null or all the signals must conform to it.
 * 
 * inv: not isUnmarshall implies
 * result->isEmpty() or
 * let type: Type = result->first().type in
 * type=null or
 * (trigger->forAll(event.oclIsKindOf(SignalEvent)) and
 * trigger.event.oclAsType(SignalEvent).signal->forAll(s | s.conformsTo(type)))
**/