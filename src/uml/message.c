/**~interaction~
 * Message [Class]
 * 
 * Description
 * 
 * A Message defines a particular communication between Lifelines of an Interaction.
 * 
 * Diagrams
 * 
 * Messages, Information Flows
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Attributes
 * 
 *  /messageKind : MessageKind [1..1]
 * 
 * The derived kind of the Message (complete, lost, found, or unknown).
 * 
 *  messageSort : MessageSort [1..1] = synchCall
 * 
 * The sort of communication reflected by the Message.
 * 
 * Association Ends
 * 
 *  ♦ argument : ValueSpecification [0..*]{ordered, subsets Element::ownedElement} (opposite
 * A_argument_message::message)
 * 
 * The arguments of the Message.
 * 
 *  connector : Connector [0..1] (opposite A_connector_message::message)
 * 
 * The Connector on which this Message is sent.
 * 
 *  interaction : Interaction [1..1]{subsets NamedElement::namespace} (opposite Interaction::message)
 * 
 * The enclosing Interaction owning the Message.
 * 
 *  receiveEvent : MessageEnd [0..1]{subsets A_message_messageEnd::messageEnd} (opposite
 * A_receiveEvent_endMessage::endMessage)
 * 
 * References the Receiving of the Message.
 * 
 *  sendEvent : MessageEnd [0..1]{subsets A_message_messageEnd::messageEnd} (opposite
 * A_sendEvent_endMessage::endMessage)
 * 
 * References the Sending of the Message.
 * 
 *  signature : NamedElement [0..1] (opposite A_signature_message::message)
 * 
 * The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 * 
 * Operations
 * 
 *  messageKind() : MessageKind
 * 
 * This query returns the MessageKind value for this Message.
 * body: messageKind
 * 
 *  isDistinguishableFrom(n : NamedElement, ns : Namespace) : Boolean {redefines
 * NamedElement::isDistinguishableFrom()}
 * 
 * The query isDistinguishableFrom() specifies that any two Messages may coexist in the same Namespace,
 * regardless of their names.
 * body: true
 * 
 * Constraints
 * 
 *  sending_receiving_message_event
 * 
 * If the sendEvent and the receiveEvent of the same Message are on the same Lifeline, the sendEvent must be
 * ordered before the receiveEvent.
 * inv: receiveEvent.oclIsKindOf(MessageOccurrenceSpecification)
 * implies
 * let f : Lifeline = sendEvent-
 * >select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecificatio
 * n)->asOrderedSet()->first().covered in
 * f = receiveEvent-
 * >select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecificatio
 * n)->asOrderedSet()->first().covered implies
 * f.events->indexOf(sendEvent.oclAsType(MessageOccurrenceSpecification)->asOrderedSet()-
 * >first() ) <
 * f.events->indexOf(receiveEvent.oclAsType(MessageOccurrenceSpecification)->asOrderedSet()-
 * >first() )
 * 
 *  arguments
 * 
 * Arguments of a Message must only be: i) attributes of the sending lifeline, ii) constants, iii) symbolic values
 * (which are wildcard values representing any legal value), iv) explicit parameters of the enclosing Interaction,
 * v) attributes of the class owning the Interaction.
 * Cannot be expressed in OCL
 * 
 *  cannot_cross_boundaries
 * 
 * Messages cannot cross boundaries of CombinedFragments or their operands. This is true if and only if both
 * MessageEnds are enclosed within the same InteractionFragment (i.e., an InteractionOperand or an Interaction).
 * inv: sendEvent->notEmpty() and receiveEvent->notEmpty() implies
 * let sendEnclosingFrag : Set(InteractionFragment) =
 * sendEvent->asOrderedSet()->first().enclosingFragment()
 * in
 * let receiveEnclosingFrag : Set(InteractionFragment) =
 * receiveEvent->asOrderedSet()->first().enclosingFragment()
 * in sendEnclosingFrag = receiveEnclosingFrag
 * 
 *  signature_is_signal
 * 
 * In the case when the Message signature is a Signal, the arguments of the Message must correspond to the
 * attributes of the Signal. A Message Argument corresponds to a Signal Attribute if the Argument is of the same
 * Class or a specialization of that of the Attribute.
 * inv: (messageSort = MessageSort::asynchSignal ) and signature.oclIsKindOf(Signal) implies
 * let signalAttributes : OrderedSet(Property) =
 * signature.oclAsType(Signal).inheritedMember()->
 * select(n:NamedElement | n.oclIsTypeOf(Property))->collect(oclAsType(Property))-
 * >asOrderedSet()
 * in signalAttributes->size() = self.argument->size()
 * and self.argument->forAll( o: ValueSpecification |
 * not (o.oclIsKindOf(Expression)
 * and o.oclAsType(Expression).symbol->size()=0
 * and o.oclAsType(Expression).operand->isEmpty() ) implies
 * let p : Property = signalAttributes->at(self.argument->indexOf(o))
 * in o.type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier)))
 * 
 *  occurrence_specifications
 * 
 * If the MessageEnds are both OccurrenceSpecifications, then the connector must go between the Parts
 * represented by the Lifelines of the two MessageEnds.
 * Cannot be expressed in OCL
 * 
 *  signature_refer_to
 * 
 * The signature must either refer an Operation (in which case messageSort is either synchCall or asynchCall or
 * reply) or a Signal (in which case messageSort is asynchSignal). The name of the NamedElement referenced by
 * signature must be the same as that of the Message.
 * inv: signature->notEmpty() implies
 * ((signature.oclIsKindOf(Operation) and
 * (messageSort = MessageSort::asynchCall or messageSort = MessageSort::synchCall or
 * messageSort = MessageSort::reply)
 * ) or (signature.oclIsKindOf(Signal) and messageSort = MessageSort::asynchSignal )
 * ) and name = signature.name
 * 
 *  signature_is_operation_request
 * 
 * In the case when a Message with messageSort synchCall or asynchCall has a non empty Operation signature,
 * the arguments of the Message must correspond to the in and inout parameters of the Operation. A Parameter
 * corresponds to an Argument if the Argument is of the same Class or a specialization of that of the Parameter.
 * inv: (messageSort = MessageSort::asynchCall or messageSort = MessageSort::synchCall) and
 * signature.oclIsKindOf(Operation) implies
 * let requestParms : OrderedSet(Parameter) = signature.oclAsType(Operation).ownedParameter->
 * select(direction = ParameterDirectionKind::inout or direction =
 * ParameterDirectionKind::_'in' )
 * in requestParms->size() = self.argument->size() and
 * self.argument->forAll( o: ValueSpecification |
 * not (o.oclIsKindOf(Expression) and o.oclAsType(Expression).symbol->size()=0 and
 * o.oclAsType(Expression).operand->isEmpty() ) implies
 * let p : Parameter = requestParms->at(self.argument->indexOf(o)) in
 * o.type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier))
 * )
 * 
 *  signature_is_operation_reply
 * 
 * In the case when a Message with messageSort reply has a non empty Operation signature, the arguments of the
 * Message must correspond to the out, inout, and return parameters of the Operation. A Parameter corresponds to
 * an Argument if the Argument is of the same Class or a specialization of that of the Parameter.
 * inv: (messageSort = MessageSort::reply) and signature.oclIsKindOf(Operation) implies
 * let replyParms : OrderedSet(Parameter) = signature.oclAsType(Operation).ownedParameter->
 * select(direction = ParameterDirectionKind::inout or direction = ParameterDirectionKind::out
 * or direction = ParameterDirectionKind::return)
 * in replyParms->size() = self.argument->size() and
 * self.argument->forAll( o: ValueSpecification | o.oclIsKindOf(Expression) and let e :
 * Expression = o.oclAsType(Expression) in
 * e.operand->notEmpty() implies
 * let p : Parameter = replyParms->at(self.argument->indexOf(o)) in
 * e.operand->asSequence()-
 * >first().type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier))
 * )
**/