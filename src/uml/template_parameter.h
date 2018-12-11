/**~common structure~
 * A_default_templateParameter [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Specializations
 * 
 * A_ownedDefault_templateParameter
 * 
 * Owned Ends
 * 
 *  templateParameter : TemplateParameter [0..*] (opposite TemplateParameter::default)
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
 * A_ownedParameter_signature [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Member Ends
 * 
 *  TemplateSignature::ownedParameter
 * 
 *  TemplateParameter::signature
**/
/**
 * A_ownedParameteredElement_owningTemplateParameter [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Member Ends
 * 
 *  TemplateParameter::ownedParameteredElement
 * 
 *  ParameterableElement::owningTemplateParameter
**/
/**
 * A_parameteredElement_templateParameter [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Member Ends
 * 
 *  TemplateParameter::parameteredElement
 * 
 *  ParameterableElement::templateParameter
**/