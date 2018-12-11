/**~state machine~
 * ConnectionPointReference [Class]
 * 
 * Description
 * 
 * A ConnectionPointReference represents a usage (as part of a submachine State) of an entry/exit point Pseudostate
 * defined in the StateMachine referenced by the submachine State.
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Generalizations
 * 
 * Vertex
 * 
 * Association Ends
 * 
 *  entry : Pseudostate [0..*] (opposite A_entry_connectionPointReference::connectionPointReference)
 * 
 * The entryPoint Pseudostates corresponding to this connection point.
 * 
 *  exit : Pseudostate [0..*] (opposite A_exit_connectionPointReference::connectionPointReference)
 * 
 * The exitPoints kind Pseudostates corresponding to this connection point.
 * 
 *  state : State [0..1]{subsets NamedElement::namespace} (opposite State::connection)
 * 
 * The State in which the ConnectionPointReference is defined.
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 * Operations
 * 
 * • isConsistentWith(redefiningElement: RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith}
 * 
 * The query isConsistentWith() specifies a ConnectionPointReference can only be redefined by a
 * ConnectionPointReference.
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * body: redefiningElement.oclIsKindOf(ConnectionPointReference)
 * 
 * Constraints
 * 
 *  exit_pseudostates
 * 
 * The exit Pseudostates must be Pseudostates with kind exitPoint.
 * inv: exit->forAll(kind = PseudostateKind::exitPoint)
 * 
 *  entry_pseudostates
 * 
 * The entry Pseudostates must be Pseudostates with kind entryPoint.
 * inv: entry->forAll(kind = PseudostateKind::entryPoint)
**/