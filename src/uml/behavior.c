/**~common behavior~
 * Behavior [Abstract Class]
 * 
 * Description
 * 
 * Behavior is a specification of how its context BehavioredClassifier changes state over time. This specification may be
 * either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset
 * of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.
 * 
 * Diagrams
 * 
 * Behaviors, Object Nodes, Activities, Control Nodes, Expressions, Structured Classifiers, Behavior State
 * Machines, Interfaces, Interactions, Occurrences, Features, Invocation Actions, Other Actions
 * 
 * Generalizations
 * 
 * Class
 * 
 * Specializations
 * 
 * OpaqueBehavior, Activity, StateMachine, Interaction
 * 
 * Attributes
 * 
 *  isReentrant : Boolean [1..1] = true
 * 
 * Tells whether the Behavior can be invoked while it is still executing from a previous invocation.
 * Association Ends
 * 
 *  /context : BehavioredClassifier [0..1]{subsets RedefinableElement::redefinitionContext} (opposite
 * A_context_behavior::behavior)
 * 
 * The BehavioredClassifier that is the context for the execution of the Behavior. A Behavior that is directly
 * owned as a nestedClassifier does not have a context. Otherwise, to determine the context of a Behavior, find
 * the first BehavioredClassifier reached by following the chain of owner relationships from the Behavior, if any.
 * If there is such a BehavioredClassifier, then it is the context, unless it is itself a Behavior with a non-empty
 * context, in which case that is also the context for the original Behavior. For example, following this algorithm,
 * the context of an entry Behavior in a StateMachine is the BehavioredClassifier that owns the StateMachine.
 * The features of the context BehavioredClassifier as well as the Elements visible to the context Classifier are
 * visible to the Behavior.
 * 
 *  ♦ ownedParameter : Parameter [0..*]{ordered, subsets Namespace::ownedMember} (opposite
 * A_ownedParameter_behavior::behavior)
 * 
 * References a list of Parameters to the Behavior which describes the order and type of arguments that can be
 * given when the Behavior is invoked and of the values which will be returned when the Behavior completes its
 * execution.
 * 
 *  ♦ ownedParameterSet : ParameterSet [0..*]{subsets Namespace::ownedMember} (opposite
 * A_ownedParameterSet_behavior::behavior)
 * 
 * The ParameterSets owned by this Behavior.
 * 
 *  ♦ postcondition : Constraint [0..*]{subsets Namespace::ownedRule} (opposite
 * A_postcondition_behavior::behavior)
 * 
 * An optional set of Constraints specifying what is fulfilled after the execution of the Behavior is completed, if
 * its precondition was fulfilled before its invocation.
 * 
 *  ♦ precondition : Constraint [0..*]{subsets Namespace::ownedRule} (opposite
 * A_precondition_behavior::behavior)
 * 
 * An optional set of Constraints specifying what must be fulfilled before the Behavior is invoked.
 * 
 *  specification : BehavioralFeature [0..1] (opposite BehavioralFeature::method)
 * 
 * Designates a BehavioralFeature that the Behavior implements. The BehavioralFeature must be owned by the
 * BehavioredClassifier that owns the Behavior or be inherited by it. The Parameters of the BehavioralFeature
 * and the implementing Behavior must match. A Behavior does not need to have a specification, in which case it
 * either is the classifierBehavior of a BehavioredClassifier or it can only be invoked by another Behavior of the
 * Classifier.
 * 
 *  redefinedBehavior : Behavior [0..*]{subsets Classifier::redefinedClassifier} (opposite
 * A_redefinedBehavior_behavior::behavior)
 * 
 * References the Behavior that this Behavior redefines. A subtype of Behavior may redefine any other subtype of
 * Behavior. If the Behavior implements a BehavioralFeature, it replaces the redefined Behavior. If the Behavior
 * is a classifierBehavior, it extends the redefined Behavior.
 * 
 * Operations
 * 
 *  context() : BehavioredClassifier [0..1]
 * 
 * A Behavior that is directly owned as a nestedClassifier does not have a context. Otherwise, to determine the
 * context of a Behavior, find the first BehavioredClassifier reached by following the chain of owner relationships
 * from the Behavior, if any. If there is such a BehavioredClassifier, then it is the context, unless it is itself a
 * Behavior with a non-empty context, in which case that is also the context for the original Behavior.
 * body: if nestingClass <> null then
 * null
 * else
 * let b:BehavioredClassifier = self.behavioredClassifier(self.owner) in
 * if b.oclIsKindOf(Behavior) and b.oclAsType(Behavior)._'context' <> null then
 * b.oclAsType(Behavior)._'context'
 * else
 * b
 * endif
 * endif
 * 
 *  behavioredClassifier(from : Element) : BehavioredClassifier [0..1]
 * The first BehavioredClassifier reached by following the chain of owner relationships from the Behavior, if any.
 * body: if from.oclIsKindOf(BehavioredClassifier) then
 * from.oclAsType(BehavioredClassifier)
 * else if from.owner = null then
 * null
 * else
 * self.behavioredClassifier(from.owner)
 * endif
 * endif
 * 
 *  inputParameters() : Parameter [0..*]{ordered}
 * 
 * The in and inout ownedParameters of the Behavior.
 * body: ownedParameter->select(direction=ParameterDirectionKind::_'in' or
 * direction=ParameterDirectionKind::inout)
 * 
 *  outputParameters() : Parameter [0..*]{ordered}
 * 
 * The out, inout and return ownedParameters.
 * body: ownedParameter->select(direction=ParameterDirectionKind::out or
 * direction=ParameterDirectionKind::inout or direction=ParameterDirectionKind::return)
 * 
 * Constraints
 * 
 *  most_one_behavior
 * 
 * There may be at most one Behavior for a given pairing of BehavioredClassifier (as owner of the Behavior) and
 * BehavioralFeature (as specification of the Behavior).
 * inv: specification <> null implies _'context'.ownedBehavior-
 * >select(specification=self.specification)->size() = 1
 * 
 *  parameters_match
 * 
 * If a Behavior has a specification BehavioralFeature, then it must have the same number of ownedParameters as
 * its specification. The Behavior Parameters must also "match" the BehavioralParameter Parameters, but the
 * exact requirements for this matching are not formalized.
 * inv: specification <> null implies ownedParameter->size() = specification.ownedParameter-
 * >size()
 * 
 *  feature_of_context_classifier
 * 
 * The specification BehavioralFeature must be a feature (possibly inherited) of the context BehavioredClassifier
 * of the Behavior.
 * inv: _'context'.feature->includes(specification)
**/