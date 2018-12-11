/**~common structure~
 * MultiplicityElement [Abstract Class]
 * 
 * Description
 * 
 * A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending
 * with a (possibly infinite) upper bound. A MultiplicityElement embeds this information to specify the allowable
 * cardinalities for an instantiation of the Element.
 * 
 * Diagrams
 * 
 * Types, Activities, Structured Classifiers, Features, Actions
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * Variable, ConnectorEnd, Parameter, StructuralFeature, Pin
 * 
 * Attributes
 * 
 *  isOrdered : Boolean [1..1] = false
 * 
 * For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this
 * MultiplicityElement are sequentially ordered.
 * 
 *  isUnique : Boolean [1..1] = true
 * 
 * For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this
 * MultiplicityElement are unique.
 * 
 *  /lower : Integer [1..1]
 * 
 * The lower bound of the multiplicity interval.
 * 
 *  /upper : UnlimitedNatural [1..1]
 * 
 * The upper bound of the multiplicity interval.
 * 
 * Association Ends
 * 
 *  ♦ lowerValue : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_lowerValue_owningLower::owningLower)
 * 
 * The specification of the lower bound for this multiplicity.
 * 
 *  ♦ upperValue : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * 
 * A_upperValue_owningUpper::owningUpper)
 * The specification of the upper bound for this multiplicity.
 * 
 * Operations
 * 
 *  compatibleWith(other : MultiplicityElement) : Boolean
 * 
 * The operation compatibleWith takes another multiplicity as input. It returns true if the other multiplicity is
 * wider than, or the same as, self.
 * body: (other.lowerBound() <= self.lowerBound()) and ((other.upperBound() = *) or
 * (self.upperBound() <= other.upperBound()))
 * 
 *  includesMultiplicity(M : MultiplicityElement) : Boolean
 * 
 * The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the
 * specified multiplicity.
 * 
 * pre: self.upperBound()->notEmpty() and self.lowerBound()->notEmpty() and M.upperBound()-
 * >notEmpty() and M.lowerBound()->notEmpty()
 * 
 * body: (self.lowerBound() <= M.lowerBound()) and (self.upperBound() >= M.upperBound())
 * 
 *  is(lowerbound : Integer, upperbound : UnlimitedNatural) : Boolean
 * 
 * The operation is determines if the upper and lower bound of the ranges are the ones given.
 * 
 * body: lowerbound = self.lowerBound() and upperbound = self.upperBound()
 * 
 *  isMultivalued() : Boolean
 * 
 * The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 * 
 * pre: upperBound()->notEmpty()
 * 
 * body: upperBound() > 1
 * 
 *  lower() : Integer [0..1]
 * 
 * The derived lower attribute must equal the lowerBound.
 * 
 * body: lowerBound()
 * 
 *  lowerBound() : Integer [1..1]
 * 
 * The query lowerBound() returns the lower bound of the multiplicity as an integer, which is the integerValue of
 * lowerValue, if this is given, and 1 otherwise.
 * 
 * body: if (lowerValue=null or lowerValue.integerValue()=null) then 1 else
 * lowerValue.integerValue() endif
 * 
 *  upper() : UnlimitedNatural [0..1]
 * 
 * The derived upper attribute must equal the upperBound.
 * 
 * body: upperBound()
 * 
 *  upperBound() : UnlimitedNatural [1..1]
 * 
 * The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited
 * natural, which is the unlimitedNaturalValue of upperValue, if given, and 1, otherwise.
 * 
 * body: if (upperValue=null or upperValue.unlimitedValue()=null) then 1 else
 * upperValue.unlimitedValue() endif
 * 
 * Constraints
 * 
 *  upper_ge_lower
 * 
 * The upper bound must be greater than or equal to the lower bound.
 * 
 * inv: upperBound() >= lowerBound()
 * 
 *  lower_ge_0
 * 
 * The lower bound must be a non-negative integer literal.
 * 
 * inv: lowerBound() >= 0
 * 
 *  value_specification_no_side_effects
 * 
 * If a non-literal ValueSpecification is used for lowerValue or upperValue, then evaluating that specification
 * must not have side effects.
 * 
 * Cannot be expressed in OCL
 * 
 *  value_specification_constant
 * 
 * If a non-literal ValueSpecification is used for lowerValue or upperValue, then that specification must be a
 * constant expression.
 * 
 * Cannot be expressed in OCL
 * 
 *  lower_is_integer
 * 
 * If it is not empty, then lowerValue must have an Integer value.
 * 
 * inv: lowerValue <> null implies lowerValue.integerValue() <> null
 * 
 *  upper_is_unlimitedNatural
 * 
 * If it is not empty, then upperValue must have an UnlimitedNatural value.
 * 
 * inv: upperValue <> null implies upperValue.unlimitedValue() <> null
**/