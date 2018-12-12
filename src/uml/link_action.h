#include "action.h"
/**~action~
 * A_endData_linkAction [Association]
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Specializations
 * 
 * A_endData_destroyLinkAction, A_endData_createLinkAction
 * 
 * Owned Ends
 * 
 *  linkAction : LinkAction [1..1]{subsets Element::owner} (opposite LinkAction::endData)
**/
/**
 * A_inputValue_linkAction [Association]
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Owned Ends
 * 
 *  linkAction : LinkAction [0..1]{subsets A_input_action::action} (opposite LinkAction::inputValue)
**/