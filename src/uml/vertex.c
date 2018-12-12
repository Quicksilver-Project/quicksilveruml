/**~state machine~
 * Vertex [Abstract Class]
 * 
 * Description
 * 
 * A Vertex is an abstraction of a node
 * in a StateMachine graph.
 * It can be the source or destination
 * of any number of
 * Transitions.
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Generalizations
 * 
 * UMLR-685: StateMachine Vertex needs to be
 * made a kind of RedefinableElement
 * instead of State
 * 
 * NamedElement, RedefinableElement
 * 
 * Specializations
 * 
 * ConnectionPointReference,
 * Pseudostate, State
 * 
 * Association Ends
 * 
 *  container : Region [0..1]
 * {subsets NamedElement::namespace}
 * (opposite Region::subvertex)
 * 
 * The Region that contains this Vertex.
 * 
 *  /incoming : Transition [0..*]{}
 * (opposite Transition::target)
 * 
 * Specifies the Transitions
 * entering this Vertex.
 * 
 *  /outgoing : Transition [0..*]{}
 * (opposite Transition::source)
 * 
 * Specifies the Transitions departing from this Vertex.
 * UMLR-685: StateMachine Vertex needs to be made a kind
 * of RedefinableElement instead of State
 * 
 *  redefinedVertex : Vertex [0..1]
 * {subsets RedefinableElement::redefinedElement}
 * (opposite
 * A_redefinedVertex_vertex::vertex)
 * 
 * The Vertex of which this Vertex is a redefinition.
 * 
 *  /redefinitionContext : Classifier [1..1]
 * {redefines RedefinableElement::redefinitionContext}
 * (opposite
 * A_redefinitionContext_vertex::vertex)
 * 
 * References the Classifier in which
 * context this element may be redefined.
 * 
 * Operations
 * 
 *  containingStateMachine() : StateMachine
 * 
 * The operation containingStateMachine()
 * returns the StateMachine in
 * which this Vertex is defined.
 * 
 * body: if container <> null
 * then
 * -- the container is a region
 * container.containingStateMachine()
 * else
 * if (self.oclIsKindOf(Pseudostate)) and ((self.oclAsType(Pseudostate).kind =
 * PseudostateKind::entryPoint) or (self.oclAsType(Pseudostate).kind =
 * PseudostateKind::exitPoint)) then
 * self.oclAsType(Pseudostate).stateMachine
 * else
 * if (self.oclIsKindOf(ConnectionPointReference)) then
 * self.oclAsType(ConnectionPointReference).state.containingStateMachine() -- no
 * other valid cases possible
 * else
 * null
 * endif
 * endif
 * endif
 * 
 *  incoming() : Transition [0..*]
 * 
 * Derivation for Vertex::/incoming.
 * body: Transition.allInstances()->select(target=self)
 * 
 *  outgoing() : Transition [0..*]
 * 
 * Derivation for Vertex::/outgoing
 * body: Transition.allInstances()->select(source=self)
 * 
 *  isContainedInState(s : State) : Boolean
 * 
 * This utility operation returns true
 * if the Vertex is contained in the State s (input argument).
 * body: if not s.isComposite() or container->isEmpty() then
 * false
 * else
 * if container.state = s then
 * true
 * else
 * container.state.isContainedInState(s)
 * endif
 * endif
 * 
 *  isContainedInRegion(r : Region) : Boolean
 * 
 * This utility query returns true if the
 * Vertex is contained in the Region r (input argument).
 * 
 * body: if (container = r) then
 * true
 * else
 * if (r.state->isEmpty()) then
 * false
 * else
 * container.state.isContainedInRegion(r)
 * endif
 * endif
 * 
 * UMLR-685: StateMachine Vertex needs to be 
 * made a kind of RedefinableElement
 * instead of State
 * 
 * • isConsistentWith
 * (redefiningElement: RedefinableElement) : Boolean 
 * {redefines
 * RedefinableElement::isConsistentWith}
 * 
 * The query isRedefinitionContextValid specifies
 * that the redefinition context of a
 * redefining Vertex is properly
 * related to the redefinition context
 * of the redefined Vertex if the owner
 * of the redefining Vertex is a redefinition
 * of the owner of the redefined Vertex. 
 * Note that the owner of a Vertex may be a Region, 
 * a StateMachine (for a connectionPoint Pseudostate),
 * or a State 
 * (for a connectionPoint Pseudostate or a connection
 * ConnectionPointReference), 
 * all of which are RedefinableElements.
 * 
 * body: redefinedElement.oclIsKindOf(Vertex) and
 * owner.oclAsType(RedefinableElement).redefinedElement->includes(redefinedElement.owner)
 * 
 *  redefinitionContext() : Classifier
 * 
 * The redefinition context of a Vertex
 * is the nearest containing StateMachine.
 * 
 * body: containingStateMachine()
**/
