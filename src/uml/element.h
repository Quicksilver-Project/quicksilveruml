/**~common structure~
 * A_icon_stereotype [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  stereotype : Stereotype [0..1]{subsets Element::owner} (opposite Stereotype::icon)
**/
/**
 * A_lowerValue_owningLower [Association]
 * 
 * Diagrams
 * 
 * Types
 * 
 * Owned Ends
 * 
 *  owningLower : MultiplicityElement [0..1]{subsets Element::owner} (opposite
 * MultiplicityElement::lowerValue)
**/
/**
 * A_mapping_abstraction [Association]
 * 
 * Diagrams
 * 
 * Dependencies
 * 
 * Owned Ends
 * 
 *  abstraction : Abstraction [0..1]{subsets Element::owner} (opposite Abstraction::mapping)
**/
/**
 * A_nameExpression_namedElement [Association]
 * 
 * Diagrams
 * 
 * Namespaces
 * 
 * Owned Ends
 * 
 *  namedElement : NamedElement [0..1]{subsets Element::owner} (opposite NamedElement::nameExpression)
**/
/**
 * A_ownedActual_owningTemplateParameterSubstitution [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Generalizations
 * 
 * A_actual_templateParameterSubstitution
 * 
 * Owned Ends
 * 
 *  owningTemplateParameterSubstitution : TemplateParameterSubstitution [0..1]{subsets Element::owner,
 * redefines A_actual_templateParameterSubstitution::templateParameterSubstitution} (opposite
 * TemplateParameterSubstitution::ownedActual)
**/
/**
 * A_ownedComment_owningElement [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Owned Ends
 * 
 *  owningElement : Element [0..1]{subsets Element::owner} (opposite Element::ownedComment)
**/
/**
 * A_ownedDefault_templateParameter [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Generalizations
 * 
 * A_default_templateParameter
 * 
 * Owned Ends
 * 
 *  templateParameter : TemplateParameter [0..1]{subsets Element::owner, redefines
 * A_default_templateParameter::templateParameter} (opposite TemplateParameter::ownedDefault)
**/
/**
 * 
 * A_ownedElement_owner [Association]
 * 
 * Diagrams
 * 
 * Root
 * 
 * Member Ends
 * 
 *  Element::ownedElement
 * 
 *  Element::owner
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
/**
 * A_operand_expression [Association]
 * 
 * Diagrams
 * 
 * Expressions
 * 
 * Owned Ends
 * 
 *  expression : Expression [0..1]{subsets Element::owner} (opposite Expression::operand)
**/
