/**~classification~
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