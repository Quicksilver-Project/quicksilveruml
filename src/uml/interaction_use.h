#include "interaction_fragment.h"

/**~interaction~
 * A_argument_interactionUse [Association]
 * 
 * Diagrams
 * 
 * Interaction Uses
 * 
 * Owned Ends
 * 
 *  interactionUse : InteractionUse [0..1]{subsets Element::owner} (opposite InteractionUse::argument)
**/
/**
 * A_actualGate_interactionUse [Association]
 * 
 * Diagrams
 * 
 * Interaction Uses
 * 
 * Owned Ends
 * 
 *  interactionUse : InteractionUse [0..1]{subsets Element::owner} (opposite InteractionUse::actualGate)
**/
/**
 * A_refersTo_interactionUse [Association]
 * 
 * Diagrams
 * 
 * Interaction Uses
 * 
 * Owned Ends
 * 
 *  interactionUse : InteractionUse [0..*] (opposite InteractionUse::refersTo)
**/
/**
 * A_returnValueRecipient_interactionUse [Association]
 * 
 * Diagrams
 * 
 * Owned Ends
 * 
 *  interactionUse : InteractionUse [0..*] (opposite InteractionUse::returnValueRecipient)
**/
/**
 * A_returnValue_interactionUse [Association]
 * 
 * Diagrams
 * 
 * Interaction Uses
 * 
 * Owned Ends
 * 
 *  interactionUse : InteractionUse [0..1]{subsets Element::owner} (opposite InteractionUse::returnValue)
**/