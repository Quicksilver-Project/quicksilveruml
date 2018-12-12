/**~action~
 * ReclassifyObjectAction [Class]
 * 
 * Description
 * 
 * A ReclassifyObjectAction is an Action
 * that changes the Classifiers
 * that classify an object.
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Attributes
 * 
 *  isReplaceAll : Boolean [1..1] = false
 * 
 * Specifies whether existing Classifiers
 * should be removed before adding the new Classifiers.
 * 
 * Association Ends
 * 
 *  newClassifier : Classifier [0..*]
 * (opposite A_newClassifier_reclassifyObjectAction::reclassifyObjectAction)
 * 
 * A set of Classifiers to be added to the Classifiers of the given object.
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input}
 * (opposite A_object_reclassifyObjectAction::reclassifyObjectAction)
 * 
 * The InputPin that holds the object to be reclassified.
 * 
 *  oldClassifier : Classifier [0..*] 
 * (opposite A_oldClassifier_reclassifyObjectAction::reclassifyObjectAction)
 * 
 * A set of Classifiers to be removed
 * from the Classifiers of the given object.
 * 
 * Constraints
 * 
 *  input_pin
 * 
 * The object InputPin
 * has no type.
 * 
 * inv: object.type = null
 * 
 *  classifier_not_abstract
 * 
 * None of the newClassifiers
 * may be abstract.
 * 
 * inv: not newClassifier->exists(isAbstract)
 * 
 *  multiplicity
 * 
 * The multiplicity of the object
 * InputPin is 1..1.
 * 
 * inv: object.is(1,1)
**/