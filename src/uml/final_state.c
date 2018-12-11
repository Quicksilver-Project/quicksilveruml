/**~state machine~
 * FinalState [Class]
 * 
 * Description
 * 
 * A special kind of State, which, when entered, signifies that the enclosing Region has completed. If the enclosing Region
 * is directly contained in a StateMachine and all other Regions in that StateMachine also are completed, then it means
 * that the entire StateMachine behavior is completed.
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Generalizations
 * 
 * State
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 * Operations
 * 
 * • isConsistentWith(redefiningElement: RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith}
 * 
 * The query isConsistentWith() specifies that a FinalState can only be redefined by a FinalState.
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * body: redefiningElement.oclIsKindOf(FinalState)
 * 
 * Constraints
 * 
 *  no_exit_behavior
 * 
 * A FinalState has no exit Behavior.
 * inv: exit->isEmpty()
 * 
 *  no_outgoing_transitions
 * 
 * A FinalState cannot have any outgoing Transitions.
 * inv: outgoing->size() = 0
 * 
 *  no_regions
 * 
 * A FinalState cannot have Regions.
 * inv: region->size() = 0
 * 
 *  cannot_reference_submachine
 * 
 * A FinalState cannot reference a submachine.
 * inv: submachine->isEmpty()
 * 
 *  no_entry_behavior
 * 
 * A FinalState has no entry Behavior.
 * inv: entry->isEmpty()
 * 
 *  no_state_behavior
 * 
 * A FinalState has no state (doActivity) Behavior.
 * inv: doActivity->isEmpty()
**/
