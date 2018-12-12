#include "interaction_fragment.h"
#include "namespace.h"

/**~interaction~
 * A_fragment_enclosingOperand [Association]
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Member Ends
 * 
 *  InteractionOperand::fragment
 *  InteractionFragment::enclosingOperand
**/
/**
 * A_guard_interactionOperand [Association]
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Owned Ends
 * 
 *  interactionOperand : InteractionOperand [1..1]{subsets Element::owner} (opposite InteractionOperand::guard)
**/