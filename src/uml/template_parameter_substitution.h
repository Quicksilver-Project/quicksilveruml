/**~common structure~
 * A_actual_templateParameterSubstitution [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Specializations
 * 
 * A_ownedActual_owningTemplateParameterSubstitution
 * 
 * Owned Ends
 * 
 *  templateParameterSubstitution : TemplateParameterSubstitution [0..*] (opposite
 * TemplateParameterSubstitution::actual)
**/
/**
 * A_formal_templateParameterSubstitution [Association]
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Owned Ends
 * 
 *  templateParameterSubstitution : TemplateParameterSubstitution [0..*] (opposite
 * TemplateParameterSubstitution::formal)
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
