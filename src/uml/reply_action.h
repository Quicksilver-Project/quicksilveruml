/**~action~
 * A_replyToCall_replyAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  replyAction : ReplyAction [0..1] (opposite ReplyAction::replyToCall)
**/
/**
 * A_replyValue_replyAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  replyAction : ReplyAction [0..1]{subsets A_input_action::action} (opposite ReplyAction::replyValue)
**/
/**
 * A_returnInformation_replyAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  replyAction : ReplyAction [0..1]{subsets A_input_action::action} (opposite ReplyAction::returnInformation)
**/