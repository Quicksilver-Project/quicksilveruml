/**~common structure~
 * A_constrainedElement_constraint [Association]
 * 
 * Diagrams
 * 
 * Constraints
 * 
 * Owned Ends
 * 
 *  constraint : Constraint [0..*] (opposite Constraint::constrainedElement)
**/
/**
 * A_ownedRule_context [Association]
 * 
 * Diagrams
 * 
 * Namespaces, Constraints
 * 
 * Member Ends
 * 
 *  Namespace::ownedRule
 * 
 *  Constraint::context
**/
/**
 * A_specification_owningConstraint [Association]
 * 
 * Diagrams
 * 
 * Constraints
 * 
 * Specializations
 * 
 * A_specification_intervalConstraint
 * 
 * Owned Ends
 * 
 *  owningConstraint : Constraint [0..1]{subsets Element::owner} (opposite Constraint::specification)
**/
