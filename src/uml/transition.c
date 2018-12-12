/**~state machine~
 * Transition [Class]
 * 
 * Description
 * 
 * A Transition represents an arc between
 * exactly one source Vertex and exactly one Target vertex
 * (the source and targets may be the same Vertex).
 * It may form part of a compound transition,
 * which takes the StateMachine from one steady
 * State configuration to another,
 * representing the full response of the 
 * StateMachine to an occurrence of 
 * an Event that triggered it.
 * 
 * Diagrams
 * 
 * Behavior State Machines,
 * State Machine Redefinition,
 * Protocol State Machines
 * 
 * Generalizations
 * 
 * Namespace, RedefinableElement
 * 
 * Specializations
 * 
 * ProtocolTransition
 * 
 * Attributes
 * 
 *  kind : TransitionKind [1..1] = external
 * 
 * Indicates the precise type of the Transition.
 * 
 * Association Ends
 * 
 *  container : Region [1..1]
 * {subsets NamedElement::namespace}
 * (opposite Region::transition)
 * 
 * Designates the Region that owns this Transition.
 * 
 *  ♦ effect : Behavior [0..1]
 * {subsets Element::ownedElement}
 * (opposite A_effect_transition::transition)
 * 
 * Specifies an optional behavior to be performed when the Transition fires.
 * 
 *  ♦ guard : Constraint [0..1]
 * {subsets Namespace::ownedRule}
 * (opposite A_guard_transition::transition)
 * 
 * A guard is a Constraint that provides a
 * fine-grained control over the
 * firing of the Transition.
 * The guard is evaluated when an Event occurrence
 * is dispatched by the StateMachine.
 * If the guard is true at that time, the
 * Transition may be enabled,
 * otherwise, it is disabled.
 * Guards should be pure expressions
 * without side effects.
 * Guard expressions with side effects are ill formed.
 * 
 *  redefinedTransition : Transition [0..1]
 * {subsets RedefinableElement::redefinedElement}
 * (opposite
 * A_redefinedTransition_transition::transition)
 * 
 * The Transition that is redefined by this Transition.
 * 
 *  /redefinitionContext : Classifier [1..1]
 * {redefines RedefinableElement::redefinitionContext}
 * (opposite
 * A_redefinitionContext_transition::transition)
 * 
 * References the Classifier in which context
 * this element may be redefined.
 * 
 *  source : Vertex [1..1]
 * (opposite Vertex::outgoing)
 * 
 * Designates the originating Vertex
 * (State or Pseudostate) of the Transition.
 *
 *  target : Vertex [1..1]
 * (opposite Vertex::incoming)
 * 
 * Designates the target Vertex
 * that is reached when the
 * Transition is taken.
 * 
 *  ♦ trigger : Trigger [0..*]
 * {subsets Element::ownedElement}
 * (opposite A_trigger_transition::transition)
 * 
 * Specifies the Triggers that
 * may fire the transition.
 * 
 * Operations
 * 
 *  containingStateMachine() : StateMachine
 * 
 * The query containingStateMachine()
 * returns the StateMachine that
 * contains the Transition either directly or
 * transitively.
 * 
 * body: container.containingStateMachine()
 * 
 * UMLR-685: StateMachine Vertex needs
 * to be made a kind of
 * RedefinableElement instead of State
 * 
 *  isConsistentWith
 * (redefiningElement : RedefinableElement) : Boolean 
 * {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies 
 * that a redefining Transition 
 * is consistent with a redefined Transition
 * provided that the redefining 
 * Transition has the following
 * relation to the redefined
 * Transition: A redefining
 * Transition redefines all
 * properties of the corresponding
 * redefined Transition except
 * the source State and the
 * Trigger.The query isConsistentWith
 * specifies that a redefining
 * Transition is consistent
 * with a redefined
 * Transition provided that the
 * source Vertex of the redefining
 * Transition redefines the source
 * Vertex of the
 * redefined Transition.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: redefiningElement.oclIsKindOf(Transition) and
 * redefiningElement.oclAsType(Transition).source.redefinedTransition = source-- the
 * following is merely a default body; it is expected that the specific form of this constraint
 * will be specified by profiles
 * true
 * 
 * UMLR-685: StateMachine Vertex needs to be 
 * made a kind of RedefinableElement instead of State
 * 
 *  redefinitionContext() : Classifier
 * 
 * The redefinition context of a Transition
 * is the nearest containing StateMachine.
 * 
 * body: containingStateMachine()let sm : StateMachine = containingStateMachine() in
 * if sm._'context' = null or sm.general->notEmpty() then
 * sm
 * else
 * sm._'context'
 * endif
 * 
 * Constraints
 * 
 *  state_is_external
 * 
 * A Transition with kind external can source any Vertex except entry points.
 * 
 * inv: (kind = TransitionKind::external) implies
 * not (source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind =
 * PseudostateKind::entryPoint)
 * 
 *  join_segment_guards
 * 
 * A join segment must not have Guards or Triggers.
 * 
 * inv: (target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind =
 * PseudostateKind::join) implies (guard = null and trigger->isEmpty())
 * 
 *  state_is_internal
 * 
 * A Transition with kind internal must have a
 * State as its source, and its source and target must be equal.
 * 
 * inv: (kind = TransitionKind::internal) implies
 * (source.oclIsKindOf (State) and source = target)
 * 
 *  outgoing_pseudostates
 * 
 * Transitions outgoing Pseudostates may not have a Trigger.
 * 
 * inv: source.oclIsKindOf(Pseudostate) and (source.oclAsType(Pseudostate).kind <>
 * PseudostateKind::initial) implies trigger->isEmpty()
 * 
 *  join_segment_state
 * 
 * A join segment must always originate from a State.
 * 
 * inv: (target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind =
 * PseudostateKind::join) implies (source.oclIsKindOf(State))
 * 
 *  fork_segment_state
 * 
 * A fork segment must always target a State.
 * 
 * inv: (source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind =
 * PseudostateKind::fork) implies (target.oclIsKindOf(State))
 * 
 *  state_is_local
 * 
 * A Transition with kind local must have a
 * composite State or an entry point as its source.
 *
 *  inv: (kind = TransitionKind::local) implies
 * ((source.oclIsKindOf (State) and source.oclAsType(State).isComposite) or
 * (source.oclIsKindOf (Pseudostate) and source.oclAsType(Pseudostate).kind =
 * PseudostateKind::entryPoint))
 * 
 *  initial_transition
 * 
 * An initial Transition at the topmost level
 * Region of a StateMachine that has no Trigger.
 * 
 * inv: (source.oclIsKindOf(Pseudostate) and container.stateMachine->notEmpty()) implies
 * trigger->isEmpty()
 * 
 *  fork_segment_guards
 * 
 * A fork segment must not have Guards or Triggers.
 * 
 * inv: (source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind =
 * PseudostateKind::fork) implies (guard = null and trigger->isEmpty())
 * 
 * UMLR-685: StateMachine Vertex needs to be
 * made a kind of RedefinableElement instead of State
 * 
 * • transition_vertices
 * 
 * The source and target Vertices of a
 * Transition must be contained in the same StateMachine as the Transition.
 * 
 * inv: let stateMachine = self.containingStateMachine() in
 * source.containingStateMachine() = stateMachine and
 * target.containingStateMachine() = stateMachine
**/