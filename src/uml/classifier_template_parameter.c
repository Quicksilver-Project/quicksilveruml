/**~classification~
 * ClassifierTemplateParameter [Class]
 * 
 * Description
 * 
 * A ClassifierTemplateParameter exposes a Classifier as a formal template parameter.
 * 
 * Diagrams
 * 
 * Classifier Templates
 * 
 * Generalizations
 * 
 * TemplateParameter
 * 
 * Attributes
 * 
 *  allowSubstitutable : Boolean [1..1] = true
 * 
 * Constrains the required relationship between an actual parameter and the parameteredElement for this formal
 * parameter.
 * 
 * Association Ends
 * 
 *  constrainingClassifier : Classifier [0..*] (opposite
 * A_constrainingClassifier_classifierTemplateParameter::classifierTemplateParameter)
 * 
 * The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable
 * attribute is true, then any Classifier that is compatible with this constraining Classifier can be substituted;
 * otherwise, it must be either this Classifier or one of its specializations. If this property is empty, there are no
 * constraints on the Classifier that can be used as an argument.
 * 
 *  parameteredElement : Classifier [1..1]{redefines TemplateParameter::parameteredElement} (opposite
 * Classifier::templateParameter)
 * 
 * The Classifier exposed by this ClassifierTemplateParameter.
 * 
 * Constraints
 * 
 *  has_constraining_classifier
 * 
 * If allowSubstitutable is true, then there must be a constrainingClassifier.
 * 
 * inv: allowSubstitutable implies constrainingClassifier->notEmpty()
 * 
 *  parametered_element_no_features
 * 
 * The parameteredElement has no direct features, and if constrainedElement is empty it has no generalizations.
 * 
 * inv: parameteredElement.feature->isEmpty() and (constrainingClassifier->isEmpty() implies
 * parameteredElement.allParents()->isEmpty())
 * 
 *  matching_abstract
 * 
 * If the parameteredElement is not abstract, then the Classifier used as an argument shall not be abstract.
 * 
 * inv: (not parameteredElement.isAbstract) implies templateParameterSubstitution.actual-
 * >forAll(a | not a.oclAsType(Classifier).isAbstract)
 * 
 *  actual_is_classifier
 * 
 * The argument to a ClassifierTemplateParameter is a Classifier.
 * 
 * inv: templateParameterSubstitution.actual->forAll(a | a.oclIsKindOf(Classifier))
 * 
 *  constraining_classifiers_constrain_args
 * 
 * If there are any constrainingClassifiers, then every argument must be the same as or a specialization of them,
 * or if allowSubstitutable is true, then it can also be substitutable.
 * 
 * inv: templateParameterSubstitution.actual->forAll( a |
 * let arg : Classifier = a.oclAsType(Classifier) in
 * constrainingClassifier->forAll(
 * cc |
 * arg = cc or arg.conformsTo(cc) or (allowSubstitutable and
 * arg.isSubstitutableFor(cc))
 * )
 * )
 * 
 *  constraining_classifiers_constrain_parametered_element
 * 
 * If there are any constrainingClassifiers, then the parameteredElement must be the same as or a specialization of
 * them, or if allowSubstitutable is true, then it can also be substitutable.
 * 
 * inv: constrainingClassifier->forAll(
 * cc | parameteredElement = cc or parameteredElement.conformsTo(cc) or
 * (allowSubstitutable and parameteredElement.isSubstitutableFor(cc))
 * )
**/

#ifndef classifier_template_parameter
#define classifier_template_parameter

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif