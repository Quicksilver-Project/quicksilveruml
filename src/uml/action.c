/**~action~
 * Action [Abstract Class]
 * 
 * Description
 * 
 * An Action is the fundamental unit of executable functionality. The execution of an Action represents some
 * transformation or processing in the modeled system. Actions provide the ExecutableNodes within Activities and may
 * also be used within Interactions.
 * 
 * Diagrams
 * 
 * Actions, Invocation Actions, Link Actions, Link Object Actions, Structural Feature Actions, Accept Event
 * Actions, Other Actions, Variable Actions, Structured Actions, Object Actions, Interactions, Occurrences
 * 
 * Generalizations
 * 
 * ExecutableNode
 * 
 * Specializations
 * 
 * ValueSpecificationAction, VariableAction, AcceptEventAction, ClearAssociationAction, CreateObjectAction,
 * DestroyObjectAction, InvocationAction, LinkAction, OpaqueAction, RaiseExceptionAction,
 * ReadExtentAction, ReadIsClassifiedObjectAction, ReadLinkObjectEndAction,
 * ReadLinkObjectEndQualifierAction, ReadSelfAction, ReclassifyObjectAction, ReduceAction, ReplyAction,
 * StartClassifierBehaviorAction, StructuralFeatureAction, StructuredActivityNode, TestIdentityAction,
 * UnmarshallAction
 * 
 * Attributes
 * 
 *  isLocallyReentrant : Boolean [1..1] = false
 * 
 * If true, the Action can begin a new, concurrent execution, even if there is already another execution of the
 * Action ongoing. If false, the Action cannot begin a new execution until any previous execution has completed.
 * 
 * Association Ends
 * 
 *  /context : Classifier [0..1]{} (opposite A_context_action::action)
 * 
 * The context Classifier of the Behavior that contains this Action, or the Behavior itself if it has no context.
 * 
 *  ♦ /input : InputPin [0..*]{ordered, union, subsets Element::ownedElement} (opposite A_input_action::action)
 * 
 * The ordered set of InputPins representing the inputs to the Action.
 * 
 *  ♦ localPostcondition : Constraint [0..*]{subsets Element::ownedElement} (opposite
 * A_localPostcondition_action::action)
 * 
 * A Constraint that must be satisfied when execution of the Action is completed.
 * 
 *  ♦ localPrecondition : Constraint [0..*]{subsets Element::ownedElement} (opposite
 * A_localPrecondition_action::action)
 * 
 * A Constraint that must be satisfied when execution of the Action is started.
 * 
 *  ♦ /output : OutputPin [0..*]{ordered, union, subsets Element::ownedElement} (opposite
 * A_output_action::action)
 * 
 * The ordered set of OutputPins representing outputs from the Action.
 * 
 * Operations
 * 
 *  context() : Classifier [0..1]
 * 
 * The derivation for the context property.
 * 
 * body: let behavior: Behavior = self.containingBehavior() in
 * if behavior=null then null
 * else if behavior._'context' = null then behavior
 * else behavior._'context'
 * endif
 * endif
 * 
 *  allActions() : Action [0..*]
 * 
 * Returns this Action and all Actions contained directly or indirectly in it. By default only the Action itself is
 * returned, but the operation is overridden for StructuredActivityNodes.
 * 
 * body: self->asSet()
 * 
 *  allOwnedNodes() : ActivityNode [0..*]
 * 
 * Returns all the ActivityNodes directly or indirectly owned by this Action. This includes at least all the Pins of
 * the Action.
 * 
 * body: input.oclAsType(Pin)->asSet()->union(output->asSet())
 * 
 *  containingBehavior() : Behavior [0..1]
 * 
 * body: if inStructuredNode<>null then inStructuredNode.containingBehavior()
 * else if activity<>null then activity
 * else interaction
 * endif
 * endif
**/