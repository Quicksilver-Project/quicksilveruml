/**~action~
 * BroadcastSignalAction [Class]
 * 
 * Description
 * 
 * A BroadcastSignalAction is an InvocationAction that transmits a Signal instance to all the potential target objects in the
 * system. Values from the argument InputPins are used to provide values for the attributes of the Signal. The requestor
 * continues execution immediately after the Signal instances are sent out and cannot receive reply values.
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
 *  signal : Signal [1..1] (opposite A_signal_broadcastSignalAction::broadcastSignalAction)
 * 
 * The Signal whose instances are to be sent.
 * 
 * Constraints
 * 
 *  number_of_arguments
 * 
 * The number of argument InputPins must be the same as the number of attributes in the signal.
 * 
 * inv: argument->size() = signal.allAttributes()->size()
 * 
 *  type_ordering_multiplicity
 * 
 * The type, ordering, and multiplicity of an argument InputPin must be the same as the corresponding attribute
 * of the signal.
 * 
 * inv: let attribute: OrderedSet(Property) = signal.allAttributes() in
 * Sequence{1..argument->size()}->forAll(i |
 * argument->at(i).type.conformsTo(attribute->at(i).type) and
 * argument->at(i).isOrdered = attribute->at(i).isOrdered and
 * argument->at(i).compatibleWith(attribute->at(i)))
 * 
 *  no_onport
 * 
 * A BroadcaseSignalAction may not specify onPort.
 * 
 * inv: onPort=null
**/