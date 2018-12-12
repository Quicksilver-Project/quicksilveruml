/**~state machine~
 * Pseudostate [Class]
 * 
 * Description
 * 
 * A Pseudostate is an abstraction that encompasses different types 
 * of transient Vertices in the StateMachine graph. A
 * StateMachine instance never comes to rest in a Pseudostate, 
 * instead, it will exit and enter the Pseudostate within a single
 * run-to-completion step.
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Generalizations
 * 
 * Vertex
 * 
 * Attributes
 * 
 *  kind : PseudostateKind [1..1] = initial
 * 
 * Determines the precise type of the Pseudostate 
 * and can be one of: entryPoint, exitPoint, initial, deepHistory,
 * shallowHistory, join, fork, junction, terminate or choice.
 * 
 * Association Ends
 * 
 *  state : State [0..1]{subsets NamedElement::namespace} (opposite State::connectionPoint)
 * 
 * The State that owns this Pseudostate and in which it appears.
 * 
 *  stateMachine : StateMachine [0..1]{subsets NamedElement::namespace} (opposite
 * StateMachine::connectionPoint)
 * 
 * The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind
 * entryPoint or exitPoint.
 * 
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 * Operations
 * 
 * • isConsistentWith(redefiningElement: RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith}
 * 
 * The query isConsistentWith() specifies that a Pseudostate can only be redefined by a Pseudostate of the same
 * kind.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: redefiningElement.oclIsKindOf(Pseudostate) and
 * redefiningElement.oclAsType(Pseudostate).kind = kind
 * 
 * Constraints
 * 
 *  transitions_outgoing
 * 
 * All transitions outgoing a fork vertex must target states in different regions of an orthogonal state.
 * 
 * inv: (kind = PseudostateKind::fork) implies
 * -- for any pair of outgoing transitions there exists an orthogonal state which contains the
 * targets of these transitions
 * -- such that these targets belong to different regions of that orthogonal state
 * outgoing->forAll(t1:Transition, t2:Transition | let contState:State =
 * containingStateMachine().LCAState(t1.target, t2.target) in
 * ((contState <> null) and (contState.region
 * ->exists(r1:Region, r2: Region | (r1 <> r2) and t1.target.isContainedInRegion(r1)
 * and t2.target.isContainedInRegion(r2)))))
 * 
 *  choice_vertex
 * 
 * In a complete statemachine, a choice Vertex must have at least one incoming and one outgoing Transition.
 * 
 * inv: (kind = PseudostateKind::choice) implies (incoming->size() >= 1 and outgoing->size() >=
 * 1)
 * 
 *  outgoing_from_initial
 * 
 * The outgoing Transition from an initial vertex may have a behavior, but not a trigger or a guard.
 * 
 * inv: (kind = PseudostateKind::initial) implies (outgoing.guard = null and outgoing.trigger-
 * >isEmpty())
 * 
 *  join_vertex
 * 
 * In a complete StateMachine, a join Vertex must have at least two incoming Transitions and exactly one
 * outgoing Transition.
 * 
 * inv: (kind = PseudostateKind::join) implies (outgoing->size() = 1 and incoming->size() >= 2)
 * 
 *  junction_vertex
 * 
 * In a complete StateMachine, a junction Vertex must have at least one incoming and one outgoing Transition.
 * 
 * inv: (kind = PseudostateKind::junction) implies (incoming->size() >= 1 and outgoing->size()
 * >= 1)
 * 
 *  history_vertices
 * 
 * History Vertices can have at most one outgoing Transition.
 * 
 * inv: ((kind = PseudostateKind::deepHistory) or (kind = PseudostateKind::shallowHistory))
 * implies (outgoing->size() <= 1)
 * 
 *  initial_vertex
 * 
 * An initial Vertex can have at most one outgoing Transition.
 * 
 * inv: (kind = PseudostateKind::initial) implies (outgoing->size() <= 1)
 * 
 *  fork_vertex
 * 
 * In a complete StateMachine, a fork Vertex must have at least two outgoing Transitions and exactly one
 * incoming Transition.
 * 
 * inv: (kind = PseudostateKind::fork) implies (incoming->size() = 1 and outgoing->size() >= 2)
 * 
 *  transitions_incoming
 * 
 * All Transitions incoming a join Vertex must originate in different Regions of an orthogonal State.
 * 
 * inv: (kind = PseudostateKind::join) implies
 * -- for any pair of incoming transitions there exists an orthogonal state which contains the
 * source vetices of these transitions
 * -- such that these source vertices belong to different regions of that orthogonal state
 * incoming->forAll(t1:Transition, t2:Transition | let contState:State =
 * containingStateMachine().LCAState(t1.source, t2.source) in
 * ((contState <> null) and (contState.region
 * ->exists(r1:Region, r2: Region | (r1 <> r2) and t1.source.isContainedInRegion(r1)
 * and t2.source.isContainedInRegion(r2)))))
**/