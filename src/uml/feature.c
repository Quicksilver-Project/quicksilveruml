/**~classification~
 * Feature [Abstract Class]
 * 
 * Description
 * 
 * A Feature declares a behavioral or structural characteristic of Classifiers.
 * 
 * Diagrams
 * 
 * Classifiers, Features, Structured Classifiers
 * 
 * Generalizations
 * 
 * RedefinableElement
 * 
 * Specializations
 * 
 * BehavioralFeature, StructuralFeature, Connector
 * 
 * Attributes
 * 
 *  isStatic : Boolean [1..1] = false
 * 
 * Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the
 * Classifier itself (true).
 * 
 * Association Ends
 * 
 *  /featuringClassifier : Classifier [0..1]{union, subsets A_member_memberNamespace::memberNamespace}
 * (opposite Classifier::feature)
 * 
 * The Classifiers that have this Feature as a feature.
**/