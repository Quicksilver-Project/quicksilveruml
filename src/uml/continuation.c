/**~interaction~
 * Continuation [Class]
 * 
 * Description
 * 
 * A Continuation is a syntactic way to define continuations of different branches of an alternative CombinedFragment.
 * Continuations are intuitively similar to labels representing intermediate points in a flow of control.
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Attributes
 * 
 *  setting : Boolean [1..1] = true
 * 
 * True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the
 * beginning.
 * 
 * Constraints
 * 
 *  first_or_last_interaction_fragment
 * 
 * Continuations always occur as the very first InteractionFragment or the very last InteractionFragment of the
 * enclosing InteractionOperand.
 * inv: enclosingOperand->notEmpty() and
 * let peerFragments : OrderedSet(InteractionFragment) = enclosingOperand.fragment in
 * ( peerFragments->notEmpty() and
 * ((peerFragments->first() = self) or (peerFragments->last() = self)))
 * 
 *  same_name
 * 
 * Across all Interaction instances having the same context value, every Lifeline instance covered by a
 * Continuation (self) must be common with one covered Lifeline instance of all other Continuation instances
 * with the same name as self, and every Lifeline instance covered by a Continuation instance with the same
 * name as self must be common with one covered Lifeline instance of self. Lifeline instances are common if they
 * have the same selector and represents associationEnd values.
 * inv: enclosingOperand.combinedFragment->notEmpty() and
 * let parentInteraction : Set(Interaction) =
 * enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
 * collect(enclosingInteraction).oclAsType(Interaction)->asSet()
 * in
 * (parentInteraction->size() = 1)
 * and let peerInteractions : Set(Interaction) =
 * (parentInteraction->union(parentInteraction->collect(_'context')->collect(behavior)->
 * select(oclIsKindOf(Interaction)).oclAsType(Interaction)->asSet())->asSet()) in
 * (peerInteractions->notEmpty()) and
 * let combinedFragments1 : Set(CombinedFragment) = peerInteractions.fragment->
 * select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)->asSet() in
 * combinedFragments1->notEmpty() and combinedFragments1->closure(operand.fragment->
 * select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment))-
 * >asSet().operand.fragment->
 * select(oclIsKindOf(Continuation)).oclAsType(Continuation)->asSet()->
 * forAll(c : Continuation | (c.name = self.name) implies
 * (c.covered->asSet()->forAll(cl : Lifeline | -- cl must be common to one lifeline covered
 * by self
 * self.covered->asSet()->
 * select(represents = cl.represents and selector = cl.selector)->asSet()->size()=1))
 * and
 * (self.covered->asSet()->forAll(cl : Lifeline | -- cl must be common to one lifeline
 * covered by c
 * c.covered->asSet()->
 * select(represents = cl.represents and selector = cl.selector)->asSet()->size()=1))
 * )
 * 
 *  global
 * 
 * Continuations are always global in the enclosing InteractionFragment e.g., it always covers all Lifelines
 * covered by the enclosing InteractionOperator.
 * inv: enclosingOperand->notEmpty() and
 * let operandLifelines : Set(Lifeline) = enclosingOperand.covered in
 * (operandLifelines->notEmpty() and
 * operandLifelines->forAll(ol :Lifeline |self.covered->includes(ol)))
**/