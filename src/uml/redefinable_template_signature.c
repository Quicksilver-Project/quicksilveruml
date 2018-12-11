/**~classification~
 * RedefinableTemplateSignature [Class]
 * 
 * Description
 * 
 * A RedefinableTemplateSignature supports the addition of formal template parameters in a specialization of a template
 * classifier.
 * 
 * Diagrams
 * 
 * Classifier Templates
 * 
 * Generalizations
 * 
 * RedefinableElement, TemplateSignature
 * 
 * Association Ends
 * 
 *  classifier : Classifier [1..1]{subsets RedefinableElement::redefinitionContext, redefines
 * TemplateSignature::template} (opposite Classifier::ownedTemplateSignature)
 * 
 * The Classifier that owns this RedefinableTemplateSignature.
 * 
 *  extendedSignature : RedefinableTemplateSignature [0..*]{subsets RedefinableElement::redefinedElement}
 * (opposite A_extendedSignature_redefinableTemplateSignature::redefinableTemplateSignature)
 * 
 * The signatures extended by this RedefinableTemplateSignature.
 * 
 *  /inheritedParameter : TemplateParameter [0..*]{subsets TemplateSignature::parameter} (opposite
 * A_inheritedParameter_redefinableTemplateSignature::redefinableTemplateSignature)
 * 
 * The formal template parameters of the extended signatures.
 * 
 * Operations
 * 
 *  inheritedParameter() : TemplateParameter [0..*]
 * 
 * Derivation for RedefinableTemplateSignature::/inheritedParameter
 * 
 * body: if extendedSignature->isEmpty() then Set{} else extendedSignature.parameter->asSet()
 * endif
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which
 * redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is
 * always consistent with a redefined template signature, as redefinition only adds new formal parameters.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: redefiningElement.oclIsKindOf(RedefinableTemplateSignature)
 * 
 * Constraints
 * 
 *  redefines_parents
 * 
 * If any of the parent Classifiers are a template, then the extendedSignature must include the signature of that
 * 
 * Classifier.
 * 
 * inv: classifier.allParents()->forAll(c | c.ownedTemplateSignature->notEmpty() implies self-
 * >closure(extendedSignature)->includes(c.ownedTemplateSignature))
**/

#ifndef redefinable_template_signature
#define redefinable_template_signature

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif