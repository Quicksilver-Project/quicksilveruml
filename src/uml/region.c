/**~state machine~
 * Region [Class]
 * 
 * Description
 * 
 * A Region is a top-level part of a StateMachine or a composite State, that serves as a container for the Vertices and
 * Transitions of the StateMachine. A StateMachine or composite State may contain multiple Regions representing
 * behaviors that may occur in parallel.
 * 
 * Diagrams
 * 
 * Behavior State Machines, State Machine Redefinition
 * 
 * Generalizations
 * 
 * Namespace, RedefinableElement
 * 
 * Association Ends
 * 
 *  extendedRegion : Region [0..1]{subsets RedefinableElement::redefinedElement} (opposite
 * A_extendedRegion_region::region)
 * 
 * The region of which this region is an extension.
 * 
 *  /redefinitionContext : Classifier [1..1]{redefines RedefinableElement::redefinitionContext} (opposite
 * A_redefinitionContext_region::region)
 * 
 * References the Classifier in which context this element may be redefined.
 * 
 *  state : State [0..1]{subsets NamedElement::namespace} (opposite State::region)
 * The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a
 * StateMachine.
 * 
 *  stateMachine : StateMachine [0..1]{subsets NamedElement::namespace} (opposite StateMachine::region)
 * The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned
 * by a State.
 * 
 *  ♦ subvertex : Vertex [0..*]{subsets Namespace::ownedMember} (opposite Vertex::container)
 * 
 * The set of Vertices that are owned by this Region.
 * 
 *  ♦ transition : Transition [0..*]{subsets Namespace::ownedMember} (opposite Transition::container)
 * The set of Transitions owned by the Region.
 * 
 * Operations
 * 
 *  belongsToPSM() : Boolean
 * 
 * The operation belongsToPSM () checks if the Region belongs to a ProtocolStateMachine.
 * body: if stateMachine <> null
 * then
 * stateMachine.oclIsKindOf(ProtocolStateMachine)
 * else
 * state <> null implies state.container.belongsToPSM()
 * endif
 * 
 *  containingStateMachine() : StateMachine
 * 
 * The operation containingStateMachine() returns the StateMachine in which this Region is defined.
 * body: if stateMachine = null
 * then
 * state.containingStateMachine()
 * else
 * stateMachine
 * endif
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies that a redefining Region is consistent with a redefined Region provided
 * that the redefining Region is an extension of the Redefined region, i.e., its Vertices and Transitions conform to
 * one of the following: (1) they are equal to corresponding elements of the redefined Region or, (2) they
 * consistently redefine a State or Transition of the redefined region, or (3) they add new States or Transitions.The
 * query isConsistentWith specifies that a Region can be redefined by any Region for which the redefinition
 * context is valid (see the isRedefinitionContextValid operation). Note that consistency requirements for the
 * redefinition of Vertices and Transitions within a redefining Region are specified by the isConsistentWith and
 * isRedefinitionContextValid operations for Vertex (and its subclasses) and Transition.
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * body: -- the following is merely a default body; it is expected that the specific form of
 * this constraint will be specified by profiles
 * truetrue
 * 
 *  isRedefinitionContextValid(redefinedElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isRedefinitionContextValid()}
 * 
 * The query isRedefinitionContextValid() specifies whether the redefinition contexts of a Region are properly
 * related to the redefinition contexts of the specified Region to allow this element to redefine the other. The
 * containing StateMachine or State of a redefining Region must Redefine the containing StateMachine or State
 * of the redefined Region.
 * body: if redefinedElement.oclIsKindOf(Region) then
 * let redefinedRegion : Region = redefinedElement.oclAsType(Region) in
 * if stateMachine->isEmpty() then
 * -- the Region is owned by a State
 * (state.redefinedState->notEmpty() and state.redefinedState.region-
 * >includes(redefinedRegion))
 * else -- the region is owned by a StateMachine
 * (stateMachine.extendedStateMachine->notEmpty() and
 * stateMachine.extendedStateMachine->exists(sm : StateMachine |
 * sm.region->includes(redefinedRegion)))
 * endif
 * else
 * false
 * endif
 * 
 *  redefinitionContext() : Classifier
 * The redefinition context of a Region is the nearest containing StateMachine.
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * body: let sm : StateMachine = containingStateMachine() in
 * if sm._'context' = null or sm.general->notEmpty() then
 * sm
 * else
 * sm._'context'
 * endifcontainingStateMachine()
 * 
 * Constraints
 * 
 *  deep_history_vertex
 * 
 * A Region can have at most one deep history Vertex.
 * inv: self.subvertex->select (oclIsKindOf(Pseudostate))->collect(oclAsType(Pseudostate))->
 * select(kind = PseudostateKind::deepHistory)->size() <= 1
 * 
 *  shallow_history_vertex
 * 
 * A Region can have at most one shallow history Vertex.
 * inv: subvertex->select(oclIsKindOf(Pseudostate))->collect(oclAsType(Pseudostate))->
 * select(kind = PseudostateKind::shallowHistory)->size() <= 1
 * 
 *  owned
 * 
 * If a Region is owned by a StateMachine, then it cannot also be owned by a State and vice versa.
 * inv: (stateMachine <> null implies state = null) and (state <> null implies stateMachine =
 * null)
 * 
 *  initial_vertex
 * 
 * A Region can have at most one initial Vertex.
 * inv: self.subvertex->select (oclIsKindOf(Pseudostate))->collect(oclAsType(Pseudostate))->
 * select(kind = PseudostateKind::initial)->size() <= 1
**/