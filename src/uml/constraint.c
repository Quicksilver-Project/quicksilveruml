/**~common structure~
 * Constraint [Class]
 * 
 * Description
 * A Constraint is a condition or restriction expressed in natural language text or in a machine readable language for the
 * purpose of declaring some of the semantics of an Element or set of Elements.
 * 
 * Diagrams
 * Namespaces, Constraints, Intervals, Use Cases, Behavior State Machines, Protocol State Machines,
 * Interactions, Fragments, Behaviors, Features, Operations, Actions
 * 
 * Generalizations
 * PackageableElement
 * 
 * Specializations
 * IntervalConstraint, InteractionConstraint
 * 
 * Association Ends
 * 
 *  constrainedElement : Element [0..*]{ordered} (opposite A_constrainedElement_constraint::constraint)
 * The ordered set of Elements referenced by this Constraint.
 * 
 *  context : Namespace [0..1]{subsets NamedElement::namespace} (opposite Namespace::ownedRule)
 * Specifies the Namespace that owns the Constraint.
 * 
 *  ♦ specification : ValueSpecification [1..1]{subsets Element::ownedElement} (opposite
 * A_specification_owningConstraint::owningConstraint)
 * 
 * A condition that must be true when evaluated in order for the Constraint to be satisfied.
 * Constraints
 * 
 *  boolean_value
 * 
 * The ValueSpecification for a Constraint must evaluate to a Boolean value.
 * Cannot be expressed in OCL
 * 
 *  no_side_effects
 * 
 * Evaluating the ValueSpecification for a Constraint must not have side effects.
 * Cannot be expressed in OCL
 * 
 *  not_apply_to_self
 * 
 * A Constraint cannot be applied to itself.
 * 
 * inv: not constrainedElement->includes(self)
**/