#include "element.h"
/**~common structure~
 * A_ownedParameter_signature [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Member Ends
 * 
 *  TemplateSignature::ownedParameter
 *  TemplateParameter::signature
**/
/**
 * A_ownedTemplateSignature_template [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Member Ends
 * 
 *  TemplateableElement::ownedTemplateSignature
 *  TemplateSignature::template
**/
/**
 * A_parameter_templateSignature [Association]
 * 
 * Diagrams
 * 
 * Templates
 * 
 * Owned Ends
 *  templateSignature : TemplateSignature
 * [0..*] (opposite TemplateSignature::parameter)
**/