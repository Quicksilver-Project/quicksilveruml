/**~common structure~
 * TemplateBinding [Class]
 * 
 * Description
 * 
 * A TemplateBinding is a DirectedRelationship
 * between a TemplateableElement and a template.
 * A TemplateBinding specifies the TemplateParameterSubstitutions
 * of actual parameters for the formal parameters of the template.
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Association Ends
 * 
 *  boundElement : TemplateableElement [1..1]
 * {subsets DirectedRelationship::source, subsets Element::owner}
 * (opposite TemplateableElement::templateBinding)
 * 
 * The TemplateableElement that is bound by this TemplateBinding.
 * 
 *  ♦ parameterSubstitution : TemplateParameterSubstitution
 * [0..*]{subsets Element::ownedElement} (opposite
 * TemplateParameterSubstitution::templateBinding)
 * 
 * The TemplateParameterSubstitutions owned by this TemplateBinding.
 * 
 *  signature : TemplateSignature [1..1]
 * {subsets DirectedRelationship::target} (opposite
 * A_signature_templateBinding::templateBinding)
 * 
 * The TemplateSignature for the template
 * that is the target of this TemplateBinding.
 * 
 * Constraints
 * 
 *  parameter_substitution_formal
 * 
 * Each parameterSubstitution must refer to a formal
 * TemplateParameter of the target TemplateSignature.
 * 
 * inv: parameterSubstitution->forAll(b | signature.parameter->includes(b.formal))
 * 
 *  one_parameter_substitution
 * 
 * A TemplateBiinding contains at most one
 * TemplateParameterSubstitution for each formal TemplateParameter
 * of the target TemplateSignature.
 * 
 * inv: signature.parameter->forAll(p | parameterSubstitution->select(b | b.formal = p)->size()
 * <= 1)
**/