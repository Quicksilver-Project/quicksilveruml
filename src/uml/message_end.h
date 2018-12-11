/**~interaction~
 * A_message_messageEnd [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  messageEnd : MessageEnd [0..2] (opposite MessageEnd::message)
**/
/**
 * A_sendEvent_endMessage [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  endMessage : Message [0..1]{subsets MessageEnd::message} (opposite Message::sendEvent)
**/