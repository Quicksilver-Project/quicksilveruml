/**~common structure~
 * 
 * A_parameterSubstitution_templateBinding [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Member Ends
 * 
 *  TemplateBinding::parameterSubstitution
 * 
 *  TemplateParameterSubstitution::templateBinding
**/
/**
 * A_signature_templateBinding [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Owned Ends
 * 
 *  templateBinding : TemplateBinding [0..*]{subsets A_target_directedRelationship::directedRelationship}
 * (opposite TemplateBinding::signature)
**/
/**
 * A_templateBinding_boundElement [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Member Ends
 * 
 *  TemplateableElement::templateBinding
 * 
 *  TemplateBinding::boundElement
**/