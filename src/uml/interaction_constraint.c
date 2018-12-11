/**~interaction~
 * InteractionConstraint [Class]
 * 
 * Description
 * 
 * An InteractionConstraint is a Boolean expression that guards an operand in a CombinedFragment.
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Generalizations
 * 
 * Constraint
 * 
 * Association Ends
 * 
 *  ♦ maxint : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_maxint_interactionConstraint::interactionConstraint)
 * 
 * The maximum number of iterations of a loop
 * 
 *  ♦ minint : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite\
 * A_minint_interactionConstraint::interactionConstraint)
 * 
 * The minimum number of iterations of a loop
 * 
 * Constraints
 * 
 *  minint_maxint
 * 
 * Minint/maxint can only be present if the InteractionConstraint is associated with the operand of a loop
 * CombinedFragment.
 * inv: maxint->notEmpty() or minint->notEmpty() implies
 * interactionOperand.combinedFragment.interactionOperator =
 * InteractionOperatorKind::loop
 * 
 *  minint_non_negative
 * 
 * If minint is specified, then the expression must evaluate to a non-negative integer.
 * inv: minint->notEmpty() implies
 * minint->asSequence()->first().integerValue() >= 0
 * 
 *  maxint_positive
 * 
 * If maxint is specified, then the expression must evaluate to a positive integer.
 * inv: maxint->notEmpty() implies
 * maxint->asSequence()->first().integerValue() > 0
 * 
 *  dynamic_variables
 * 
 * The dynamic variables that take part in the constraint must be owned by the ConnectableElement
 * corresponding to the covered Lifeline.
 * Cannot be expressed in OCL
 * 
 *  global_data
 * 
 * The constraint may contain references to global data or write-once data.
 * Cannot be expressed in OCL
 * 
 *  maxint_greater_equal_minint
 * 
 * If maxint is specified, then minint must be specified and the evaluation of maxint must be >= the evaluation of
 * minint.
 * inv: maxint->notEmpty() implies (minint->notEmpty() and
 * maxint->asSequence()->first().integerValue() >=
 * minint->asSequence()->first().integerValue() )
**/
