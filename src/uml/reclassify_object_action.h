/**~action~
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
 * A_object_reclassifyObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  reclassifyObjectAction : ReclassifyObjectAction [0..1]{subsets A_input_action::action} (opposite
 * ReclassifyObjectAction::object)
**/
/**
 * A_oldClassifier_reclassifyObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  reclassifyObjectAction : ReclassifyObjectAction [0..*] (opposite ReclassifyObjectAction::oldClassifier)
**/
