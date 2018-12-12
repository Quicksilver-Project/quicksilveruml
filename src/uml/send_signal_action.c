/**~action~
 * SendSignalAction [Class]
 * 
 * Description
 * 
 * A SendSignalAction is an InvocationAction
 * that creates a Signal instance and
 * transmits it to the target object.
 * Values from the argument InputPins
 * are used to provide values for the
 * attributes of the Signal.
 * The requestor continues
 * execution immediately after
 * the Signal instance is sent out
 * and cannot receive reply values.
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * InvocationAction
 * 
 * Association Ends
 * 
 *  signal : Signal [1..1]
 * (opposite A_signal_sendSignalAction::sendSignalAction)
 * 
 * The Signal whose instance is
 * transmitted to the target.
 * 
 *  ♦ target : InputPin [1..1]{subsets Action::input}
 * (opposite A_target_sendSignalAction::sendSignalAction)
 * 
 * The InputPin that provides the target object
 * to which the Signal instance is sent.
 * 
 * Constraints
 * 
 *  type_ordering_multiplicity
 * 
 * The type, ordering, and multiplicity of an argument
 * InputPin must be the same as the corresponding attribute
 * of the signal.
 * 
 * inv: let attribute: OrderedSet(Property) = signal.allAttributes() in
 * Sequence{1..argument->size()}->forAll(i |
 * argument->at(i).type.conformsTo(attribute->at(i).type) and
 * argument->at(i).isOrdered = attribute->at(i).isOrdered and
 * argument->at(i).compatibleWith(attribute->at(i)))
 * 
 *  number_order
 * 
 * The number and order of argument InputPins
 * must be the same as the number
 * and order of attributes of the signal.
 * 
 * inv: argument->size()=signal.allAttributes()->size()
 * 
 *  type_target_pin
 * 
 * If onPort is not empty,
 * the Port given by onPort
 * must be an owned or inherited feature
 * of the type of the target InputPin.
 * 
 * inv: not onPort->isEmpty() implies target.type.oclAsType(Classifier).allFeatures()-
 * >includes(onPort)
**/