#include "classifier.h"
/**~structured classifier~
 * A_ownedAttribute_structuredClassifier [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Generalizations
 * 
 * A_role_structuredClassifier
 * 
 * Owned Ends
 * 
 *  structuredClassifier : StructuredClassifier
 * [0..1]{subsets NamedElement::namespace, subsets
 * A_attribute_classifier::classifier,
 * redefines A_role_structuredClassifier
 * ::structuredClassifier} (opposite
 * StructuredClassifier::ownedAttribute)
**/
/**
 * A_ownedConnector_structuredClassifier [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  structuredClassifier : StructuredClassifier
 * [0..1]{subsets Feature::featuringClassifier, subsets
 * NamedElement::namespace,
 * subsets RedefinableElement::redefinitionContext}
 * (opposite
 * StructuredClassifier::ownedConnector)
**/
/**
 * A_part_structuredClassifier [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Owned Ends
 * 
 *  structuredClassifier : StructuredClassifier
 * [0..1] (opposite StructuredClassifier::part)
**/
/**
 * A_role_structuredClassifier [Association]
 * 
 * Diagrams
 * 
 * Structured Classifiers
 * 
 * Specializations
 * 
 * A_ownedAttribute_structuredClassifier
 * 
 * Owned Ends
 * 
 *  /structuredClassifier : StructuredClassifier
 * [0..*]{union, subsets
 * A_member_memberNamespace::memberNamespace}
 * (opposite StructuredClassifier::role)
**/