/**~state machine~
 * ProtocolConformance [Class]
 * 
 * Description
 * 
 * A ProtocolStateMachine can be redefined into a more specific ProtocolStateMachine or into behavioral StateMachine.
 * 
 * ProtocolConformance declares that the specific ProtocolStateMachine specifies a protocol that conforms to the general
 * ProtocolStateMachine or that the specific behavioral StateMachine abides by the protocol of the general
 * ProtocolStateMachine.
 * 
 * Diagrams
 * 
 * Protocol State Machines
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Association Ends
 * 
 *  generalMachine : ProtocolStateMachine [1..1]{subsets DirectedRelationship::target} (opposite
 * A_generalMachine_protocolConformance::protocolConformance)
 * 
 * Specifies the ProtocolStateMachine to which the specific ProtocolStateMachine conforms.
 * 
 *  specificMachine : ProtocolStateMachine [1..1]{subsets DirectedRelationship::source, subsets Element::owner}
 * (opposite ProtocolStateMachine::conformance)
 * 
 * Specifies the ProtocolStateMachine which conforms to the general ProtocolStateMachine.
**/