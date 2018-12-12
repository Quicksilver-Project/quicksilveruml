#include "action.h"
/**~action~
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
 * A_result_readExtentAction [Association]
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Owned Ends
 * 
 *  readExtentAction : ReadExtentAction [0..1]{subsets A_output_action::action} (opposite
 * ReadExtentAction::result)
**/