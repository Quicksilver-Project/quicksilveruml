#include "classifier.h"
#include "deployment_artifact.h"

/**~deployment~ 
 * A_manifestation_artifact [Association]
 * 
 * Diagrams
 * 
 * Artifacts
 * 
 * Owned Ends
 * 
 *  artifact : Artifact [1..1]{subsets Dependency::client, subsets Element::owner} (opposite
 * Artifact::manifestation)
**/
/**
 * A_nestedArtifact_artifact [Association]
 * 
 * Diagrams
 * 
 * Artifacts
 * 
 * Owned Ends
 * 
 *  artifact : Artifact [0..1]{subsets NamedElement::namespace} (opposite Artifact::nestedArtifact)
**/
/**
 * A_ownedAttribute_artifact [Association]
 * 
 * Diagrams
 * 
 * Artifacts
 * 
 * Owned Ends
 * 
 *  artifact : Artifact [0..1]{subsets NamedElement::namespace, subsets A_attribute_classifier::classifier}
 * (opposite Artifact::ownedAttribute)
**/
/**
 * A_ownedOperation_artifact [Association]
 * 
 * Diagrams
 * 
 * Artifacts
 * 
 * Owned Ends
 * 
 *  artifact : Artifact [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite Artifact::ownedOperation)
**/