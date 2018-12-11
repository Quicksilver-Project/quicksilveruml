/**~state machine~
 * A_postCondition_owningTransition [Association]
 * 
 * Diagrams
 * 
 * Protocol State Machines
 * 
 * Owned Ends
 * 
 *  owningTransition : ProtocolTransition [0..1]{subsets Constraint::context} (opposite
 * ProtocolTransition::postCondition)
**/
/**
 * A_preCondition_protocolTransition [Association]
 * 
 * Diagrams
 * 
 * Protocol State Machines
 * 
 * Generalizations
 * 
 * A_guard_transition
 * 
 * Owned Ends
 * 
 *  protocolTransition : ProtocolTransition [0..1]{redefines A_guard_transition::transition} (opposite
 * ProtocolTransition::preCondition)
 * UMLR-685: StateMachine Vertex needs to be made a kind of RedefinableElement instead of State
**/
/**
 * A_referred_protocolTransition [Association]
 * 
 * Diagrams
 * 
 * Protocol State Machines
 * 
 * Owned Ends
 * 
 *  protocolTransition : ProtocolTransition [0..*] (opposite ProtocolTransition::referred)
**/