/**~interaction~
 * A_action_interaction [Association]
 * 
 * Diagrams
 * 
 * Interactions
 * 
 * Owned Ends
 * 
 *  interaction : Interaction [0..1]{subsets Element::owner} (opposite Interaction::action)
**/
/**
 * A_formalGate_interaction [Association]
 * 
 * Diagrams
 * 
 * Interactions
 * 
 * Owned Ends
 * 
 *  interaction : Interaction [0..1]{subsets NamedElement::namespace} (opposite Interaction::formalGate)
**/
/**
 * A_fragment_enclosingInteraction [Association]
 * 
 * Diagrams
 * 
 * Interactions
 * 
 * Member Ends
 * 
 *  Interaction::fragment
 *  InteractionFragment::enclosingInteraction
**/
/**
 * A_lifeline_interaction [Association]
 * 
 * Diagrams
 * 
 * Lifelines
 * 
 * Member Ends
 * 
 *  Interaction::lifeline
 *  Lifeline::interaction
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
