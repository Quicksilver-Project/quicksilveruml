/**~state machine~
 * StateMachine [Class]
 * 
 * Description
 * 
 * StateMachines can be used to express event-driven behaviors of parts of a system. Behavior is modeled as a traversal of
 * a graph of Vertices interconnected by one or more joined Transition arcs that are triggered by the dispatching of
 * successive Event occurrences. During this traversal, the StateMachine may execute a sequence of Behaviors associated
 * with various elements of the StateMachine.
 * 
 * Diagrams
 * 
 * Behavior State Machines, State Machine Redefinition, Protocol State Machines
 * 
 * Generalizations
 * 
 * Behavior
 * 
 * Specializations
 * 
 * ProtocolStateMachine
 * 
 * Association Ends
 * 
 *  ♦ connectionPoint : Pseudostate [0..*]{subsets Namespace::ownedMember} (opposite
 * Pseudostate::stateMachine)
 * 
 * The connection points defined for this StateMachine. They represent the interface of the StateMachine when
 * used as part of submachine State.
 * 
 *  extendedStateMachine : StateMachine [0..*]{redefines Behavior::redefinedBehavior} (opposite
 * A_extendedStateMachine_stateMachine::stateMachine)
 * 
 * The StateMachines of which this is an extension.
 * 
 *  ♦ region : Region [1..*]{subsets Namespace::ownedMember} (opposite Region::stateMachine)
 * 
 * The Regions owned directly by the StateMachine.
 * 
 *  submachineState : State [0..*] (opposite State::submachine)
 * 
 * References the submachine(s) in case of a submachine State. Multiple machines are referenced in case of a
 * concurrent State.
 * 
 * Operations
 * 
 *  LCA(s1 : Vertex, s2 : Vertex) : Region
 * 
 * The operation LCA(s1,s2) returns the Region that is the least common ancestor of Vertices s1 and s2, based on
 * the StateMachine containment hierarchy.
 * body: if ancestor(s1, s2) then
 * s2.container
 * else
 * if ancestor(s2, s1) then
 * s1.container
 * else
 * LCA(s1.container.state, s2.container.state)
 * endif
 * endif
 * 
 *  ancestor(s1 : Vertex, s2 : Vertex) : Boolean
 * 
 * The query ancestor(s1, s2) checks whether Vertex s2 is an ancestor of Vertex s1.
 * body: if (s2 = s1) then
 * true
 * else
 * if s1.container.stateMachine->notEmpty() then
 * true
 * else
 * if s2.container.stateMachine->notEmpty() then
 * false
 * else
 * ancestor(s1, s2.container.state)
 * endif
 * endif
 * endif
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isConsistentWith()}
 * 
 * The query isConsistentWith() specifies that a redefining StateMachine is consistent with a redefined
 * StateMachine provided that the redefining StateMachine is an extension of the redefined StateMachine :
 * Regions are inherited and Regions can be added, inherited Regions can be redefined. In case of multiple
 * redefining StateMachine, extension implies that the redefining StateMachine gets orthogonal Regions for each
 * of the redefined StateMachine.The query isConsistentWith specifies that a StateMachine can be redefined by
 * any other StateMachine for which the redefinition context is valid (see the isRedefinitionContextValid
 * operation). Note that consistency requirements for the redefinition of Regions and connectionPoint
 * Pseudostates owned by a StateMachine are specified by the isConsistentWith and isRedefinitionContextValid
 * operations for Region and Vertex (and its subclass Pseudostate).
 * body: -- the following is merely a default body; it is expected that the specific form of
 * this constraint will be specified by profiles
 * truepre: redefiningElement.isRedefinitionContextValid(self)
 * body: true
 * 
 *  isRedefinitionContextValid(redefinedElement : RedefinableElement) : Boolean {redefines
 * RedefinableElement::isRedefinitionContextValid()}
 * 
 * The query isRedefinitionContextValid() specifies whether the redefinition context of a StateMachine is
 * properly related to the redefinition contexts of the specified StateMachine to allow this element to redefine the
 * other. The context Classifier of a redefining StateMachine must redefine the context Classifier of the redefined
 * StateMachine.The query isRedefinitionContextValid specifies whether the redefinition context of a
 * StateMachine is properly related to the redefinition contexts of a StateMachine it redefines. The requirement is
 * that the context BehavioredClassifier of a redefining StateMachine must specialize the context Classifier of the
 * redefined StateMachine. If the redefining StateMachine does not have a context BehavioredClassifier, then
 * then the redefining StateMachine also must not have a context BehavioredClassifier but must, instead,
 * specialize the redefining StateMachine.
 * body: redefinedElement.oclIsKindOf(StateMachine) and
 * let parentContext : BehavioredClassifier =
 * redefinedElement.oclAsType(StateMachine).context in
 * if context = null then
 * parentContext = null and self.allParents()→includes(redefinedElement)
 * else
 * parentContext <> null and context.allParents()->includes(parentContext)
 * endifif redefinedElement.oclIsKindOf(StateMachine) then
 * let redefinedStateMachine : StateMachine = redefinedElement.oclAsType(StateMachine) in
 * self._'context'().oclAsType(BehavioredClassifier).redefinedClassifier->
 * includes(redefinedStateMachine._'context'())
 * else
 * false
 * endif
 * 
 *  LCAState(v1 : Vertex, v2 : Vertex) : State
 * 
 * This utility function is like the LCA, except that it returns the nearest composite State that contains both input
 * Vertices.
 * body: if v2.oclIsTypeOf(State) and ancestor(v1, v2) then
 * v2.oclAsType(State)
 * else if v1.oclIsTypeOf(State) and ancestor(v2, v1) then
 * v1.oclAsType(State)
 * else if (v1.container.state->isEmpty() or v2.container.state->isEmpty()) then
 * null.oclAsType(State)
 * else LCAState(v1.container.state, v2.container.state)
 * endif endif endif
 * 
 * Constraints
 * 
 *  connection_points
 * 
 * The connection points of a StateMachine are Pseudostates of kind entry point or exit point.
 * inv: connectionPoint->forAll (kind = PseudostateKind::entryPoint or kind =
 * PseudostateKind::exitPoint)
 * 
 *  classifier_context
 * 
 * The Classifier context of a StateMachine cannot be an Interface.
 * inv: _'context' <> null implies not _'context'.oclIsKindOf(Interface)
 * 
 *  method
 * 
 * A StateMachine as the method for a BehavioralFeature cannot have entry/exit connection points.
 * inv: specification <> null implies connectionPoint->isEmpty()
 * 
 *  context_classifier
 * 
 * The context Classifier of the method StateMachine of a BehavioralFeature must be the Classifier that owns the
 * BehavioralFeature.
 * inv: specification <> null implies ( _'context' <> null and
 * specification.featuringClassifier->exists(c | c = _'context'))
**/