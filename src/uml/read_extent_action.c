/**~action~
 * ReadExtentAction [Class]
 * 
 * Description
 * 
 * A ReadExtentAction is an Action that retrieves the current instances of a Classifier.
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
 *  classifier : Classifier [1..1] (opposite A_classifier_readExtentAction::readExtentAction)
 * 
 * The Classifier whose instances are to be retrieved.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite A_result_readExtentAction::readExtentAction)
 * 
 * The OutputPin on which the Classifier instances are placed.
 * 
 * Constraints
 * 
 *  type_is_classifier
 * 
 * The type of the result OutputPin is the classifier.
 * 
 * inv: result.type = classifier
 * 
 *  multiplicity_of_result
 * 
 * The multiplicity of the result OutputPin is 0..*.
 * 
 * inv: result.is(0,*)
**/