#include "action.h"
/**~action~
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
 * A_object_readIsClassifiedObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  readIsClassifiedObjectAction : ReadIsClassifiedObjectAction [0..1]{subsets A_input_action::action} (opposite
 * ReadIsClassifiedObjectAction::object)
**/
/**
 * A_result_readIsClassifiedObjectAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  readIsClassifiedObjectAction : ReadIsClassifiedObjectAction [0..1]{subsets A_output_action::action}
 * (opposite ReadIsClassifiedObjectAction::result)
**/