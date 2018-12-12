/**~common structure~
 * TemplateParameterSubstitution [Class]
 * 
 * Description
 * 
 * A TemplateParameterSubstitution relates
 * the actual parameter to a formal
 * TemplateParameter as part of a template binding.
 * 
 * Diagrams
 * 
 * Template Bindings
 * 
 * Generalizations
 * 
 * Element
 * 
 * Association Ends
 * 
 *  actual : ParameterableElement [1..1]
 * (opposite
 * A_actual_templateParameterSubstitution
 * ::templateParameterSubstitution)
 * 
 * The ParameterableElement that is the
 * actual parameter for this
 * TemplateParameterSubstitution.
 * 
 *  formal : TemplateParameter [1..1]
 * (opposite
 * A_formal_templateParameterSubstitution
 * ::templateParameterSubstitution)
 * 
 * The formal TemplateParameter that is
 * associated with this TemplateParameterSubstitution.
 * 
 *  ♦ ownedActual : ParameterableElement
 * [0..1]{subsets Element::ownedElement, subsets
 * TemplateParameterSubstitution::actual} (opposite
 * A_ownedActual_owningTemplateParameterSubstitution
 * ::owningTemplateParameterSubstitution)
 * 
 * The ParameterableElement that is owned by
 * this TemplateParameterSubstitution
 * as its actual parameter.
 * 
 *  templateBinding : TemplateBinding
 * [1..1]{subsets Element::owner}
 * (opposite
 * TemplateBinding::parameterSubstitution)
 * 
 * The TemplateBinding that owns
 * this TemplateParameterSubstitution.
 * 
 * Constraints
 * 
 *  must_be_compatible
 * 
 * The actual ParameterableElement
 * must be compatible with the formal TemplateParameter,
 * e.g., the actual
 * ParameterableElement
 * for a Class TemplateParameter
 * must be a Class.
 * 
 * inv: actual->forAll(a | a.isCompatibleWith(formal.parameteredElement))
**/