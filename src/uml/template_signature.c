/**~common structure~
 * TemplateSignature [Class]
 * 
 * Description
 * 
 * A Template Signature bundles the set of formal TemplateParameters for a template.
 * 
 * Diagrams
 * 
 * Template Bindings, Templates, Classifier Templates
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * RedefinableTemplateSignature
 * 
 * Association Ends
 * 
 *  ♦ ownedParameter : TemplateParameter [0..*]{ordered, subsets Element::ownedElement, subsets
 * TemplateSignature::parameter} (opposite TemplateParameter::signature)
 * 
 * The formal parameters that are owned by this TemplateSignature.
 * 
 *  parameter : TemplateParameter [1..*]{ordered} (opposite A_parameter_templateSignature::templateSignature)
 * 
 * The ordered set of all formal TemplateParameters for this TemplateSignature.
 * 
 *  template : TemplateableElement [1..1]{subsets Element::owner} (opposite
 * TemplateableElement::ownedTemplateSignature)
 * 
 * The TemplateableElement that owns this TemplateSignature.
 * 
 * Constraints
 * 
 *  own_elements
 * 
 * Parameters must own the ParameterableElements they parameter or those ParameterableElements must be
 * owned by the TemplateableElement being templated.\
 * 
 * inv: template.ownedElement->includesAll(parameter.parameteredElement->asSet() -
 * parameter.ownedParameteredElement->asSet())
 * 
 *  unique_parameters
 * 
 * The names of the parameters of a TemplateSignature are unique.
 * 
 * inv: parameter->forAll( p1, p2 | (p1 <> p2 and
 * p1.parameteredElement.oclIsKindOf(NamedElement) and
 * p2.parameteredElement.oclIsKindOf(NamedElement) ) implies
 * p1.parameteredElement.oclAsType(NamedElement).name <>
 * p2.parameteredElement.oclAsType(NamedElement).name)
**/