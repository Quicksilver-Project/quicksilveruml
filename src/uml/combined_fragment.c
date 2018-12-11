/**~interaction~
 * CombinedFragment [Class]
 * 
 * Description
 * 
 * A CombinedFragment defines an expression of InteractionFragments. A CombinedFragment is defined by an interaction
 * operator and corresponding InteractionOperands. Through the use of CombinedFragments the user will be able to
 * describe a number of traces in a compact and concise manner.
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Specializations
 * 
 * ConsiderIgnoreFragment
 * 
 * Attributes
 * 
 *  interactionOperator : InteractionOperatorKind [1..1] = seq
 * 
 * Specifies the operation which defines the semantics of this combination of InteractionFragments.
 * 
 * Association Ends
 * 
 *  ♦ cfragmentGate : Gate [0..*]{subsets Element::ownedElement} (opposite
 * A_cfragmentGate_combinedFragment::combinedFragment)
 * 
 * Specifies the gates that form the interface between this CombinedFragment and its surroundings
 * 
 *  ♦ operand : InteractionOperand [1..*]{ordered, subsets Element::ownedElement} (opposite
 * A_operand_combinedFragment::combinedFragment)
 * 
 * The set of operands of the combined fragment.
 * 
 * Constraints
 * 
 *  break
 * 
 * If the interactionOperator is break, the corresponding InteractionOperand must cover all Lifelines covered by
 * the enclosing InteractionFragment.
 * inv: interactionOperator=InteractionOperatorKind::break implies
 * enclosingInteraction.oclAsType(InteractionFragment)->asSet()->union(
 * enclosingOperand.oclAsType(InteractionFragment)->asSet()).covered->asSet() =
 * self.covered->asSet()
 * 
 *  consider_and_ignore
 * 
 * The interaction operators 'consider' and 'ignore' can only be used for the ConsiderIgnoreFragment subtype of
 * CombinedFragment.
 * inv: ((interactionOperator = InteractionOperatorKind::consider) or (interactionOperator =
 * InteractionOperatorKind::ignore)) implies oclIsKindOf(ConsiderIgnoreFragment)
 * 
 *  opt_loop_break_neg
 * 
 * If the interactionOperator is opt, loop, break, assert or neg, there must be exactly one operand.
 * inv: (interactionOperator = InteractionOperatorKind::opt or interactionOperator =
 * InteractionOperatorKind::loop or
 * interactionOperator = InteractionOperatorKind::break or interactionOperator =
 * InteractionOperatorKind::assert or
 * interactionOperator = InteractionOperatorKind::neg)
 * implies operand->size()=1
**/