/**~state machine~
 * ProtocolTransition [Class]
 * 
 * Description
 * 
 * A ProtocolTransition specifies a legal Transition for an Operation. Transitions of ProtocolStateMachines have the
 * following information: a pre-condition (guard), a Trigger, and a post-condition. Every ProtocolTransition is associated
 * with at most one BehavioralFeature belonging to the context Classifier of the ProtocolStateMachine.
 * 
 * Diagrams
 * 
 * Protocol State Machines
 * 
 * Generalizations
 * 
 * Transition
 * 
 * Association Ends
 * 
 *  ♦ postCondition : Constraint [0..1]{subsets Namespace::ownedRule} (opposite
 * A_postCondition_owningTransition::owningTransition)
 * 
 * Specifies the post condition of the Transition which is the Condition that should be obtained once the
 * Transition is triggered. This post condition is part of the post condition of the Operation connected to the
 * Transition.
 * 
 *  ♦ preCondition : Constraint [0..1]{subsets Transition::guard} (opposite
 * A_preCondition_protocolTransition::protocolTransition)
 * 
 * Specifies the precondition of the Transition.
 * 
 * It specifies the Condition that should be verified before triggering the Transition.
 * 
 * This guard condition added to the source State will be evaluated as part of the precondition of
 * the Operation referred by the Transition if any.
 * 
 *  /referred : Operation [0..*]{} (opposite A_referred_protocolTransition::protocolTransition)
 * 
 * This association refers to the associated Operation.
 * It is derived from the Operation of the CallEvent Trigger when applicable.
 * 
 * Operations
 * 
 *  referred() : Operation [0..*]
 * 
 * Derivation for ProtocolTransition::/referred
 * 
 * body: trigger->collect(event)->select(oclIsKindOf(CallEvent))-
 * >collect(oclAsType(CallEvent).operation)->asSet()
 * 
 * Constraints
 * 
 *  refers_to_operation
 * 
 * If a ProtocolTransition refers to an Operation 
 * (i.e., has a CallEvent trigger corresponding to an Operation), then
 * that Operation should apply to the context Classifier of the StateMachine of the ProtocolTransition.
 * 
 * inv: if (referred()->notEmpty() and containingStateMachine()._'context'->notEmpty()) then
 * containingStateMachine()._'context'.oclAsType(BehavioredClassifier).allFeatures()-
 * >includesAll(referred())
 * else true endif
 * 
 *  associated_actions
 * 
 * A ProtocolTransition never has associated Behaviors.
 * 
 * inv: effect = null
 * 
 *  belongs_to_psm
 * 
 * A ProtocolTransition always belongs to a ProtocolStateMachine.
 * 
 * inv: container.belongsToPSM()
**/