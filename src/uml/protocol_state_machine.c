/**~state machine~
 * ProtocolStateMachine [Class]
 * 
 * Description
 * 
 * A ProtocolStateMachine is always defined in the context of a Classifier.
 * It specifies which BehavioralFeatures of the Classifier can be called in 
 * which State and under which conditions, thus specifying the allowed invocation sequences on
 * the Classifier's BehavioralFeatures.
 * 
 * A ProtocolStateMachine specifies the possible and permitted Transitions on the
 * instances of its context Classifier, together with the BehavioralFeatures that carry the Transitions.
 * 
 * In this manner, an instance lifecycle can be specified for a Classifier,
 * by defining the order in which the BehavioralFeatures can be
 * activated and the States through which an instance progresses during its existence.
 * 
 * Diagrams
 * 
 * Protocol State Machines, Encapsulated Classifiers, Interfaces
 * 
 * Generalizations
 * 
 * StateMachine
 * 
 * Association Ends
 * 
 *  ♦ conformance : ProtocolConformance [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite ProtocolConformance::specificMachine)
 * 
 * Conformance between ProtocolStateMachine
 * 
 * Constraints
 * 
 *  classifier_context
 * 
 * A ProtocolStateMachine must only have a Classifier context, not a BehavioralFeature context.
 * 
 * inv: _'context' <> null and specification = null
 * 
 *  deep_or_shallow_history
 * 
 * ProtocolStateMachines cannot have deep or shallow history Pseudostates.
 * 
 * inv: region->forAll (r | r.subvertex->forAll (v | v.oclIsKindOf(Pseudostate) implies
 * ((v.oclAsType(Pseudostate).kind <> PseudostateKind::deepHistory) and
 * (v.oclAsType(Pseudostate).kind <> PseudostateKind::shallowHistory))))
 * 
 *  entry_exit_do
 * 
 * The states of a ProtocolStateMachine cannot have entry, exit, or do activity Behaviors.
 * 
 * inv: region->forAll(r | r.subvertex->forAll(v | v.oclIsKindOf(State) implies
 * (v.oclAsType(State).entry->isEmpty() and v.oclAsType(State).exit->isEmpty() and
 * v.oclAsType(State).doActivity->isEmpty())))
 * 
 *  protocol_transitions
 * 
 * All Transitions of a ProtocolStateMachine must be ProtocolTransitions.
 * 
 * inv: region->forAll(r | r.transition->forAll(t | t.oclIsTypeOf(ProtocolTransition)))
**/