/**~state machine~
 * State [Class]
 * 
 * Description
 * 
 * A State models a situation during which some (usually implicit) invariant condition holds.
 * 
 * Diagrams
 * 
 * Behavior State Machines, State Machine Redefinition, Object Nodes
 * 
 * Generalizations
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 * RedefinableElement, Namespace, Vertex
 * 
 * Specializations
 * 
 * FinalState
 * 
 * Attributes
 * 
 *  /isComposite : Boolean [1..1]
 * 
 * A state with isComposite=true is said to be a composite State. A composite State is a State that contains at least
 * one Region.
 * 
 *  /isOrthogonal : Boolean [1..1]
 * 
 * A State with isOrthogonal=true is said to be an orthogonal composite State. An orthogonal composite State
 * contains two or more Regions.
 * 
 *  /isSimple : Boolean [1..1]
 * 
 * A State with isSimple=true is said to be a simple State. A simple State does not have any Regions and it does
 * not refer to any submachine StateMachine.
 * 
 *  /isSubmachineState : Boolean [1..1]
 * 
 * A State with isSubmachineState=true is said to be a submachine State. Such a State refers to another
 * StateMachine(submachine).
 * 
 * Association Ends
 * 
 *  ♦ connection : ConnectionPointReference [0..*]{subsets Namespace::ownedMember} (opposite
 * ConnectionPointReference::state)
 * 
 * The entry and exit connection points used in conjunction with this (submachine) State, i.e., as targets and
 * sources, respectively, in the Region with the submachine State. A connection point reference references the
 * corresponding definition of a connection point Pseudostate in the StateMachine referenced by the submachine
 * State.
 * 
 *  ♦ connectionPoint : Pseudostate [0..*]{subsets Namespace::ownedMember} (opposite Pseudostate::state)
 * 
 * The entry and exit Pseudostates of a composite State. These can only be entry or exit Pseudostates, and they
 * must have different names. They can only be defined for composite States.
 * 
 *  ♦ deferrableTrigger : Trigger [0..*]{subsets Element::ownedElement} (opposite
 * A_deferrableTrigger_state::state)
 * 
 * A list of Triggers that are candidates to be retained by the StateMachine if they trigger no Transitions out of the
 * State (not consumed). A deferred Trigger is retained until the StateMachine reaches a State configuration where
 * it is no longer deferred.
 * 
 *  ♦ doActivity : Behavior [0..1]{subsets Element::ownedElement} (opposite A_doActivity_state::state)
 * 
 * An optional Behavior that is executed while being in the State. The execution starts when this State is entered,
 * and ceases either by itself when done, or when the State is exited, whichever comes first.
 * 
 *  ♦ entry : Behavior [0..1]{subsets Element::ownedElement} (opposite A_entry_state::state)
 * 
 * An optional Behavior that is executed whenever this State is entered regardless of the Transition taken to reach
 * the State. If defined, entry Behaviors are always executed to completion prior to any internal Behavior or
 * Transitions performed within the State.
 * 
 *  ♦ exit : Behavior [0..1]{subsets Element::ownedElement} (opposite A_exit_state::state)
 * 
 * An optional Behavior that is executed whenever this State is exited regardless of which Transition was taken
 * out of the State. If defined, exit Behaviors are always executed to completion only after all internal and
 * transition Behaviors have completed execution.
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of
 * State
 * 
 *  redefinedState : State [0..1]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedState_state::state)
 * 
 * The State of which this State is a redefinition.
 * 
 *  /redefinitionContext : Classifier [1..1]{redefines RedefinableElement::redefinitionContext} (opposite
 * A_redefinitionContext_state::state)
 * 
 * References the Classifier in which context this element may be redefined.
 * 
 *  ♦ region : Region [0..*]{subsets Namespace::ownedMember} (opposite Region::state)
 * 
 * The Regions owned directly by the State.
 * 
 *  ♦ stateInvariant : Constraint [0..1]{subsets Namespace::ownedRule} (opposite
 * A_stateInvariant_owningState::owningState)
 * 
 * Specifies conditions that are always true when this State is the current State. In ProtocolStateMachines state
 * invariants are additional conditions to the preconditions of the outgoing Transitions, and to the postcondition of
 * the incoming Transitions.
 * 
 *  submachine : StateMachine [0..1] (opposite StateMachine::submachineState)
 * 
 * The StateMachine that is to be inserted in place of the (submachine) State.
 * 
 * Operations
 * 
 *  containingStateMachine() : StateMachine {redefines Vertex::containingStateMachine()}
 * 
 * The query containingStateMachine() returns the StateMachine that contains the State either directly or
 * transitively.
 * body: container.containingStateMachine()
 * 
 *  isComposite() : Boolean
 * 
 * A composite State is a State with at least one Region.
 * body: region->notEmpty()
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of
 * State
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies that a redefining State is consistent with a redefined State provided that
 * the redefining State is an extension of the redefined State. A simple State can be redefined (extended) to
 * become a composite State (by adding one or more Regions) and a composite State can be redefined (extended)
 * by adding Regions and by adding Vertices, States, and Transitions to inherited Regions. All States may add or
 * replace entry, exit, and 'doActivity' Behaviors.The query isConsistentWith specifies that a non-final State can
 * only be redefined by a non-final State (this is overridden by FinalState to allow a FinalState to be redefined by
 * a FinalState) and, if the redefined State is a submachine State, then the redefining State must be a submachine
 * state whose submachine is a redefinition of the submachine of the redefined State. Note that consistency
 * requirements for the redefinition of Regions and connectionPoint Pseudostates within a composite State and
 * connection ConnectionPoints of a submachine State are specified by the isConsistentWith and
 * isRedefinitionContextValid operations for Region and Vertex (and its subclasses, Pseudostate and
 * ConnectionPointReference).
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * body: -- the following is merely a default body; it is expected that the specific form of
 * this constraint will be specified by profiles
 * trueredefiningElement.oclIsTypeOf(State) and
 * let redefiningState : State = redefiningElement.oclAsType(State) in
 * submachine <> null implies (redefiningState.submachine <> null and
 * redefiningState.submachine.extendedStateMachine->includes(submachine))
 * 
 *  isOrthogonal() : Boolean
 * 
 * An orthogonal State is a composite state with at least 2 regions.
 * body: region->size () > 1
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of
 * State
 * 
 *  isRedefinitionContextValid(redefinedElement : RedefinableElement) :
 * Boolean {redefines RedefinableElement::isRedefinitionContextValid()}
 * 
 * The query isRedefinitionContextValid() specifies whether the redefinition
 * contexts of a State are properly related to the redefinition contexts of
 * the specified State to allow this element to redefine the other. This
 * means that the containing Region of a redefining State must redefine the
 * containing Region of the redefined State.
 * body: if redefinedElement.oclIsKindOf(State) then
 * let redefinedState : State = redefinedElement.oclAsType(State) in
 * container.redefinedElement.oclAsType(Region)->exists(r:Region |
 * r.subvertex->includes(redefinedState))
 * else
 * 
 *  false
 * 
 * endif
 * 
 *  isSimple() : Boolean
 * 
 * A simple State is a State without any regions.
 * body: (region->isEmpty()) and not isSubmachineState()
 * 
 *  isSubmachineState() : Boolean
 * 
 * Only submachine State references another StateMachine.
 * body: submachine <> null
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 *  redefinitionContext() : Classifier
 * 
 * The redefinition context of a State is the nearest containing
 * StateMachine.
 * body: let sm : StateMachine = containingStateMachine() in
 * if sm._'context' = null or sm.general->notEmpty() then
 * sm
 * else
 * sm._'context'
 * 
 *  endif
 * 
 * Constraints
 * 
 *  entry_or_exit
 * 
 * Only entry or exit Pseudostates can serve as connection points.
 * inv: connectionPoint->forAll(kind = PseudostateKind::entryPoint or kind =
 * PseudostateKind::exitPoint)
 * 
 *  submachine_states
 * 
 * Only submachine States can have connection point references.
 * inv: isSubmachineState implies connection->notEmpty( )
 * 
 *  composite_states
 * 
 * Only composite States can have entry or exit Pseudostates defined.
 * inv: connectionPoint->notEmpty() implies isComposite
 * 
 *  destinations_or_sources_of_transitions
 * 
 * The connection point references used as destinations/sources of Transitions associated with a submachine State
 * must be defined as entry/exit points in the submachine StateMachine.
 * inv: self.isSubmachineState implies (self.connection->forAll (cp |
 * cp.entry->forAll (ps | ps.stateMachine = self.submachine) and
 * cp.exit->forAll (ps | ps.stateMachine = self.submachine)))
 * 
 *  submachine_or_regions
 * 
 * A State is not allowed to have both a submachine and Regions.
 * inv: isComposite implies not isSubmachineState
**/