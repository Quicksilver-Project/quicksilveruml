/**~action~
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
 * A_result_createObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  createObjectAction : CreateObjectAction [0..1]{subsets A_output_action::action} (opposite
 * CreateObjectAction::result)
**/