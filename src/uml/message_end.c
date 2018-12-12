/**~interaction~
 * MessageEnd [Abstract Class]
 * 
 * Description
 * 
 * MessageEnd is an abstract specialization of NamedElement that represents what can occur at the end of a Message.
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * Gate, MessageOccurrenceSpecification
 * 
 * Association Ends
 * 
 *  message : Message [0..1] (opposite A_message_messageEnd::messageEnd)
 * 
 * References a Message.
 * 
 * Operations
 * 
 *  oppositeEnd() : MessageEnd [0..*]
 * 
 * This query returns a set including the MessageEnd (if exists) at the opposite end of the Message for this
 * MessageEnd.
 * 
 * pre: message->notEmpty()
 * 
 * body: message->asSet().messageEnd->asSet()->excluding(self)
 * 
 *  isSend() : Boolean
 * 
 * This query returns value true if this MessageEnd is a sendEvent.
 * 
 * pre: message->notEmpty()
 * 
 * body: message.sendEvent->asSet()->includes(self)
 * 
 *  isReceive() : Boolean
 * 
 * This query returns value true if this MessageEnd is a receiveEvent.
 * 
 * pre: message->notEmpty()
 * 
 * body: message.receiveEvent->asSet()->includes(self)
 * 
 *  enclosingFragment() : InteractionFragment [0..*]
 * 
 * This query returns a set including the enclosing InteractionFragment this MessageEnd is enclosed within.
 * 
 * body: if self->select(oclIsKindOf(Gate))->notEmpty()
 * then -- it is a Gate
 * let endGate : Gate =
 * self->select(oclIsKindOf(Gate)).oclAsType(Gate)->asOrderedSet()->first()
 * in
 * if endGate.isOutsideCF()
 * then endGate.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)-
 * >asSet()->
 * union(endGate.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)-
 * >asSet())
 * else if endGate.isInsideCF()
 * then endGate.combinedFragment.oclAsType(InteractionFragment)->asSet()
 * else if endGate.isFormal()
 * then endGate.interaction.oclAsType(InteractionFragment)->asSet()
 * else if endGate.isActual()
 * then endGate.interactionUse.enclosingInteraction.oclAsType(InteractionFragment)-
 * >asSet()->
 * union(endGate.interactionUse.enclosingOperand.oclAsType(InteractionFragment)->asSet())
 * else null
 * endif
 * endif
 * endif
 * endif
 * else -- it is a MessageOccurrenceSpecification
 * let endMOS : MessageOccurrenceSpecification =
 * self-
 * >select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecificatio
 * n)->asOrderedSet()->first()
 * in
 * if endMOS.enclosingInteraction->notEmpty()
 * then endMOS.enclosingInteraction.oclAsType(InteractionFragment)->asSet()
 * else endMOS.enclosingOperand.oclAsType(InteractionFragment)->asSet()
 * endif
 * endif
**/