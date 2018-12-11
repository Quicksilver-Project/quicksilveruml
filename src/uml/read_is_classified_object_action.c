/**~action~
 * ReadIsClassifiedObjectAction [Class]
 * 
 * Description
 * 
 * A ReadIsClassifiedObjectAction is an Action that determines whether an object is classified by a given Classifier.
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
 *  isDirect : Boolean [1..1] = false
 * 
 * Indicates whether the input object must be directly classified by the given Classifier or whether it may also be
 * an instance of a specialization of the given Classifier.
 * 
 * Association Ends
 * 
 *  classifier : Classifier [1..1] (opposite
 * A_classifier_readIsClassifiedObjectAction::readIsClassifiedObjectAction)
 * 
 * The Classifier against which the classification of the input object is tested.
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_readIsClassifiedObjectAction::readIsClassifiedObjectAction)
 * 
 * The InputPin that holds the object whose classification is to be tested.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_readIsClassifiedObjectAction::readIsClassifiedObjectAction)
 * 
 * The OutputPin that holds the Boolean result of the test.
 * 
 * Constraints
 * 
 *  no_type
 * 
 * The object InputPin has no type.
 * 
 * inv: object.type = null
 * 
 *  multiplicity_of_output
 * 
 * The multiplicity of the result OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  boolean_result
 * 
 * The type of the result OutputPin is Boolean.
 * 
 * inv: result.type = Boolean
 * 
 *  multiplicity_of_input
 * 
 * The multiplicity of the object InputPin is 1..1.
 * 
 * inv: object.is(1,1)
**/