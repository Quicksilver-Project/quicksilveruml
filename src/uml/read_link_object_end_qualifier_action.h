#include "action.h"
/**~action~
 * A_object_readLinkObjectEndQualifierAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndQualifierAction : ReadLinkObjectEndQualifierAction [0..1]{subsets
 * A_input_action::action} (opposite ReadLinkObjectEndQualifierAction::object)
**/
/**
 * A_qualifier_readLinkObjectEndQualifierAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndQualifierAction : ReadLinkObjectEndQualifierAction [0..1] (opposite
 * ReadLinkObjectEndQualifierAction::qualifier)
**/
/**
 * A_result_readLinkObjectEndQualifierAction [Association]
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Owned Ends
 * 
 *  readLinkObjectEndQualifierAction : ReadLinkObjectEndQualifierAction [0..1]{subsets
 * A_output_action::action} (opposite ReadLinkObjectEndQualifierAction::result)
**/