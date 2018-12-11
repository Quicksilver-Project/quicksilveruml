/**~action~
 * CreateObjectAction [Class]
 * 
 * Description
 * 
 * A CreateObjectAction is an Action that creates an instance of the specified Classifier.
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  classifier : Classifier [1..1] (opposite A_classifier_createObjectAction::createObjectAction)
 * 
 * The Classifier to be instantiated.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_createObjectAction::createObjectAction)
 * 
 * The OutputPin on which the newly created object is placed.
 * 
 * Constraints
 * 
 *  classifier_not_abstract
 * 
 * The classifier cannot be abstract.
 * 
 * inv: not classifier.isAbstract
 * 
 *  multiplicity
 * 
 * The multiplicity of the result OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  classifier_not_association_class
 * 
 * The classifier cannot be an AssociationClass.
 * 
 * inv: not classifier.oclIsKindOf(AssociationClass)
 * 
 *  same_type
 * 
 * The type of the result OutputPin must be the same as the classifier of the CreateObjectAction.
 * 
 * inv: result.type = classifier
**/