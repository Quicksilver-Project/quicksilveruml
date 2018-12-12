/**~interaction~
 * Gate [Class]
 * 
 * Description
 * 
 * A Gate is a MessageEnd which serves as a connection point for relating a Message which has a MessageEnd (sendEvent
 * / receiveEvent) outside an InteractionFragment with another Message which has a MessageEnd (receiveEvent /
 * sendEvent) inside that InteractionFragment.
 * 
 * Diagrams
 * 
 * Interactions, Messages, Fragments, Interaction Uses
 * 
 * Generalizations
 * 
 * MessageEnd
 * 
 * Operations
 * 
 *  isOutsideCF() : Boolean [1..1]
 * 
 * This query returns true if this Gate is attached to the boundary of a CombinedFragment, and its other end (if
 * present) is outside of the same CombinedFragment.
 * 
 * body: self.oppositeEnd()-> notEmpty() and combinedFragment->notEmpty() implies
 * let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
 * if oppEnd.oclIsKindOf(MessageOccurrenceSpecification)
 * then let oppMOS : MessageOccurrenceSpecification =
 * oppEnd.oclAsType(MessageOccurrenceSpecification)
 * in self.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
 * union(self.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet()) =
 * oppMOS.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
 * union(oppMOS.enclosingOperand.oclAsType(InteractionFragment)->asSet())
 * else let oppGate : Gate = oppEnd.oclAsType(Gate)
 * in self.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
 * union(self.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)->asSet()) =
 * oppGate.combinedFragment.enclosingInteraction.oclAsType(InteractionFragment)->asSet()->
 * union(oppGate.combinedFragment.enclosingOperand.oclAsType(InteractionFragment)-
 * >asSet())
 * endif
 * 
 *  isInsideCF() : Boolean
 * 
 * This query returns true if this Gate is attached to the boundary of a CombinedFragment, and its other end (if
 * present) is inside of an InteractionOperator of the same CombinedFragment.
 * 
 * body: self.oppositeEnd()-> notEmpty() and combinedFragment->notEmpty() implies
 * let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
 * if oppEnd.oclIsKindOf(MessageOccurrenceSpecification)
 * then let oppMOS : MessageOccurrenceSpecification
 * = oppEnd.oclAsType(MessageOccurrenceSpecification)
 * in combinedFragment = oppMOS.enclosingOperand.combinedFragment
 * else let oppGate : Gate = oppEnd.oclAsType(Gate)
 * in combinedFragment = oppGate.combinedFragment.enclosingOperand.combinedFragment
 * endif
 * 
 *  isActual() : Boolean
 * 
 * This query returns true value if this Gate is an actualGate of an InteractionUse.
 * 
 * body: interactionUse->notEmpty()
 * 
 *  isFormal() : Boolean
 * 
 * This query returns true if this Gate is a formalGate of an Interaction.
 * 
 * body: interaction->notEmpty()
 * 
 *  getName() : String
 * 
 * This query returns the name of the gate, either the explicit name (.name) or the constructed name ('out_" or
 * 'in_' concatenated in front of .message.name) if the explicit name is not present.
 * 
 * body: if name->notEmpty() then name->asOrderedSet()->first()
 * else if isActual() or isOutsideCF()
 * then if isSend()
 * then 'out_'.concat(self.message.name->asOrderedSet()->first())
 * else 'in_'.concat(self.message.name->asOrderedSet()->first())
 * endif
 * else if isSend()
 * then 'in_'.concat(self.message.name->asOrderedSet()->first())
 * else 'out_'.concat(self.message.name->asOrderedSet()->first())
 * endif
 * endif
 * endif
 * 
 *  matches(gateToMatch : Gate [1..1]) : Boolean
 * 
 * This query returns true if the name of this Gate matches the name of the in parameter Gate, and the messages
 * for the two Gates correspond. The Message for one Gate (say A) corresponds to the Message for another Gate
 * (say B) if (A and B have the same name value) and (if A is a sendEvent then B is a receiveEvent) and (if A is a
 * receiveEvent then B is a sendEvent) and (A and B have the same messageSort value) and (A and B have the
 * same signature value).
 * 
 * body: self.getName() = gateToMatch.getName() and
 * self.message.messageSort = gateToMatch.message.messageSort and
 * self.message.name = gateToMatch.message.name and
 * self.message.sendEvent->includes(self) implies gateToMatch.message.receiveEvent-
 * >includes(gateToMatch) and
 * self.message.receiveEvent->includes(self) implies gateToMatch.message.sendEvent-
 * >includes(gateToMatch) and
 * self.message.signature = gateToMatch.message.signature
 * 
 *  isDistinguishableFrom(n : NamedElement, ns : Namespace) : Boolean {redefines
 * NamedElement::isDistinguishableFrom()}
 * 
 * The query isDistinguishableFrom() specifies that two Gates may coexist in the same Namespace, without an
 * explicit name property. The association end formalGate subsets ownedElement, and since the Gate name
 * attribute is optional, it is allowed to have two formal gates without an explicit name, but having derived names
 * which are distinct.
 * 
 * body: true
 * 
 *  getOperand() : InteractionOperand
 * 
 * If the Gate is an inside Combined Fragment Gate, this operation returns the InteractionOperand that the
 * opposite end of this Gate is included within.
 * 
 * body: if isInsideCF() then
 * let oppEnd : MessageEnd = self.oppositeEnd()->asOrderedSet()->first() in
 * if oppEnd.oclIsKindOf(MessageOccurrenceSpecification)
 * then let oppMOS : MessageOccurrenceSpecification =
 * oppEnd.oclAsType(MessageOccurrenceSpecification)
 * in oppMOS.enclosingOperand->asOrderedSet()->first()
 * else let oppGate : Gate = oppEnd.oclAsType(Gate)
 * in oppGate.combinedFragment.enclosingOperand->asOrderedSet()->first()
 * endif
 * else null
 * endif
 * 
 * Constraints
 * 
 *  actual_gate_matched
 * 
 * If this Gate is an actualGate, it must have exactly one matching formalGate within the referred Interaction.
 * 
 * inv: interactionUse->notEmpty() implies interactionUse.refersTo.formalGate-
 * >select(matches(self))->size()=1
 * 
 *  inside_cf_matched
 * 
 * If this Gate is inside a CombinedFragment, it must have exactly one matching Gate which is outside of that
 * CombinedFragment.
 * 
 * inv: isInsideCF() implies combinedFragment.cfragmentGate->select(isOutsideCF() and
 * matches(self))->size()=1
 * 
 *  outside_cf_matched
 * 
 * If this Gate is outside an 'alt' CombinedFragment, for every InteractionOperator inside that CombinedFragment
 * there must be exactly one matching Gate inside the CombinedFragment with its opposing end enclosed by that
 * InteractionOperator. If this Gate is outside CombinedFragment with operator other than 'alt', there must be
 * exactly one matching Gate inside that CombinedFragment.
 * 
 * inv: isOutsideCF() implies
 * if self.combinedFragment.interactionOperator->asOrderedSet()->first() =
 * InteractionOperatorKind::alt
 * then self.combinedFragment.operand->forAll(op : InteractionOperand |
 * self.combinedFragment.cfragmentGate->select(isInsideCF() and
 * oppositeEnd().enclosingFragment()->includes(self.combinedFragment) and matches(self))-
 * >size()=1)
 * else self.combinedFragment.cfragmentGate->select(isInsideCF() and matches(self))->size()=1
 * endif
 * 
 *  formal_gate_distinguishable
 * 
 * isFormal() implies that no other formalGate of the parent Interaction returns the same getName() as returned
 * for self.
 * 
 * inv: isFormal() implies interaction.formalGate->select(getName() = self.getName())->size()=1
 * 
 *  actual_gate_distinguishable
 * 
 * isActual() implies that no other actualGate of the parent InteractionUse returns the same getName() as returned
 * for self.
 * 
 * inv: isActual() implies interactionUse.actualGate->select(getName() = self.getName())-
 * >size()=1
 * 
 *  outside_cf_gate_distinguishable
 * 
 * isOutsideCF() implies that no other outside cfragmentGate of the parent CombinedFragment returns the same
 * getName() as returned for self.
 * 
 * inv: isOutsideCF() implies combinedFragment.cfragmentGate->select(getName() =
 * self.getName())->size()=1
 * 
 *  inside_cf_gate_distinguishable
 * 
 * isInsideCF() implies that no other inside cfragmentGate attached to a message with its other end in the same
 * InteractionOperator as self, returns the same getName() as returned for self.
 * 
 * inv: isInsideCF() implies
 * let selfOperand : InteractionOperand = self.getOperand() in
 * combinedFragment.cfragmentGate->select(isInsideCF() and getName() = self.getName())-
 * >select(getOperand() = selfOperand)->size()=1
**/