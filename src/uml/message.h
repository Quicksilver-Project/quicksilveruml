/**~interaction~
 * A_argument_message [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  message : Message [0..1]{subsets Element::owner} (opposite Message::argument)
**/
/**
 * A_connector_message [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  message : Message [0..*] (opposite Message::connector)
**/
/**
 * A_message_considerIgnoreFragment [Association]
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Owned Ends
 * 
 *  considerIgnoreFragment : ConsiderIgnoreFragment [0..*] (opposite ConsiderIgnoreFragment::message)
**/
/**
 * A_message_interaction [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Member Ends
 * 
 *  Interaction::message
 *  Message::interaction
**/
/**
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
 * A_receiveEvent_endMessage [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  endMessage : Message [0..1]{subsets MessageEnd::message} (opposite Message::receiveEvent)
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
/**
 * A_signature_message [Association]
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Owned Ends
 * 
 *  message : Message [0..*] (opposite Message::signature)
**/