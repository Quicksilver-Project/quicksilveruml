#include "action.h"
/**~action~
 * A_end_readLinkObjectEndAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndAction : ReadLinkObjectEndAction [0..1] (opposite ReadLinkObjectEndAction::end)
**/
/**
 * A_object_readLinkObjectEndAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndAction : ReadLinkObjectEndAction [0..1]{subsets A_input_action::action} (opposite
 * ReadLinkObjectEndAction::object)
**/
/**
 * A_result_readLinkObjectEndAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndAction : ReadLinkObjectEndAction [0..1]{subsets A_output_action::action} (opposite
 * ReadLinkObjectEndAction::result)
**/