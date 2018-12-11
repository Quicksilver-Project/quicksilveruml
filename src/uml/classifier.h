/**~classification~
 * A_attribute_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  /classifier : Classifier [0..1]{union, subsets Feature::featuringClassifier, subsets
 * RedefinableElement::redefinitionContext} (opposite Classifier::attribute)
**/
/**
 * A_collaborationUse_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Collaborations
 * 
 * Specializations
 * 
 * A_representation_classifier
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{subsets Element::owner} (opposite Classifier::collaborationUse)
**/
/**
 * A_feature_featuringClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Features
 * 
 * Member Ends
 * 
 *  Classifier::feature
 * 
 *  Feature::featuringClassifier
**/
/**
 * A_general_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..*] (opposite Classifier::general)
**/
/**
 * A_generalization_specific [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Member Ends
 * 
 *  Classifier::generalization
 * 
 *  Generalization::specific
**/
/**
 * A_inheritedMember_inheritingClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  inheritingClassifier : Classifier [0..*]{subsets A_member_memberNamespace::memberNamespace} (opposite
 * Classifier::inheritedMember)
**/
/**
 * A_ownedTemplateSignature_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifier Templates
 * 
 * Member Ends
 * 
 *  Classifier::ownedTemplateSignature
 * 
 *  RedefinableTemplateSignature::classifier
**/
/**
 * A_ownedUseCase_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Use Cases
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{subsets NamedElement::namespace} (opposite Classifier::ownedUseCase)
**/
/**
 * A_powertypeExtent_powertype [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Generalization Sets
 * 
 * Member Ends
 * 
 *  Classifier::powertypeExtent
 * 
 *  GeneralizationSet::powertype
**/
/**
 * A_redefinedClassifier_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Classifier::redefinedClassifier)
**/
/**
 * A_representation_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Collaborations
 * 
 * Generalizations
 * 
 * A_collaborationUse_classifier
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{redefines A_collaborationUse_classifier::classifier} (opposite
 * Classifier::representation)
**/
/**
 * A_substitution_substitutingClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Member Ends
 * 
 *  Classifier::substitution
 * 
 *  Substitution::substitutingClassifier
**/
/**
 * A_attribute_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{union, subsets Feature::featuringClassifier, subsets
 * RedefinableElement::redefinitionContext} (opposite Classifier::attribute)
**/
/**
 * A_substitution_substitutingClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Member Ends
 * 
 *  Classifier::substitution
 * 
 *  Substitution::substitutingClassifier
**/
/**
 * A_representation_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Collaborations
 * 
 * Generalizations
 * 
 * A_collaborationUse_classifier
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{redefines A_collaborationUse_classifier::classifier} (opposite
 * Classifier::representation)
**/
/**
 * A_redefinedClassifier_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Classifier::redefinedClassifier)
**/
/**
 * A_powertypeExtent_powertype [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Generalization Sets
 * 
 * Member Ends
 * 
 *  Classifier::powertypeExtent
 * 
 *  GeneralizationSet::powertype
**/
/**
 * A_ownedUseCase_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Use Cases
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{subsets NamedElement::namespace} (opposite Classifier::ownedUseCase)
**/
/**
 * A_ownedTemplateSignature_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifier Templates
 * 
 * Member Ends
 * 
 *  Classifier::ownedTemplateSignature
 * 
 *  RedefinableTemplateSignature::classifier
**/
/**
 * A_inheritedMember_inheritingClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  inheritingClassifier : Classifier [0..*]{subsets A_member_memberNamespace::memberNamespace} (opposite
 * Classifier::inheritedMember)
**/
/**
 * A_generalization_specific [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Member Ends
 * 
 *  Classifier::generalization
 * 
 *  Generalization::specific
**/
/**
 * A_general_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..*] (opposite Classifier::general)
**/
/**
 * A_feature_featuringClassifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Features
 * 
 * Member Ends
 * 
 *  Classifier::feature
 * 
 *  Feature::featuringClassifier
**/
/**
 * A_collaborationUse_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers, Collaborations
 * 
 * Specializations
 * 
 * A_representation_classifier
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{subsets Element::owner} (opposite Classifier::collaborationUse)
**/
/**
 * A_classifier_templateParameter_parameteredElement [Association]
 * 
 * Diagrams
 * 
 * Classifier Templates
 * 
 * Member Ends
 * 
 *  Classifier::templateParameter
 * 
 *  ClassifierTemplateParameter::parameteredElement
**/
/**
 * A_attribute_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{union, subsets Feature::featuringClassifier, subsets
 * RedefinableElement::redefinitionContext} (opposite Classifier::attribute)
**/
/**
 * A_classifier_createObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  createObjectAction : CreateObjectAction [0..*] (opposite CreateObjectAction::classifier)
**/
/**
 * A_classifier_readExtentAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  readExtentAction : ReadExtentAction [0..1] (opposite ReadExtentAction::classifier)
**/
/**
 * A_classifier_readIsClassifiedObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  readIsClassifiedObjectAction : ReadIsClassifiedObjectAction [0..*] (opposite
 * ReadIsClassifiedObjectAction::classifier)
**/
/**
 * A_newClassifier_reclassifyObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  reclassifyObjectAction : ReclassifyObjectAction [0..*] (opposite ReclassifyObjectAction::newClassifier)
**/
/**
 * A_subject_useCase [Association]
 * 
 * Diagrams
 * 
 * Use Cases, Classifiers
 * 
 * Member Ends
 * 
 *  UseCase::subject
 *  Classifier::useCase
**/