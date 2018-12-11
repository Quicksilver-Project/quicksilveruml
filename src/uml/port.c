/**~structured classifier~
 * Port [Class]
 * 
 * Description
 * 
 * A Port is a property of an EncapsulatedClassifier that specifies a distinct interaction point between that
 * EncapsulatedClassifier and its environment or between the (behavior of the) EncapsulatedClassifier and its internal
 * parts. Ports are connected to Properties of the EncapsulatedClassifier by Connectors through which requests can be
 * made to invoke BehavioralFeatures. A Port may specify the services an EncapsulatedClassifier provides (offers) to its
 * environment as well as the services that an EncapsulatedClassifier expects (requires) of its environment. A Port may
 * have an associated ProtocolStateMachine.
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers, Events, Invocation Actions
 * 
 * Generalizations
 * 
 * Property
 * 
 * Attributes
 * 
 *  isBehavior : Boolean [1..1] = false
 * 
 * Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier.
 * Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port
 * will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it
 * may contain.
 * 
 *  isConjugated : Boolean [1..1] = false
 * 
 * Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
 * 
 *  isService : Boolean [1..1] = true
 * 
 * If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier. If
 * false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible
 * functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal
 * implementation of the EncapsulatedClassifier and other properties that are considered part of its
 * implementation.
 * 
 * Association Ends
 * 
 *  protocol : ProtocolStateMachine [0..1] (opposite A_protocol_port::port)
 * 
 * An optional ProtocolStateMachine which describes valid interactions at this interaction point.
 * 
 *  /provided : Interface [0..*]{} (opposite A_provided_port::port)
 * 
 * The Interfaces specifying the set of Operations and Receptions that the EncapsulatedClassifier offers to its
 * environment via this Port, and which it will handle either directly or by forwarding it to a part of its internal
 * structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided
 * is derived as the union of the sets of Interfaces realized by the type of the port and its supertypes, or directly
 * from the type of the Port if the Port is typed by an Interface. If isConjugated is true, it is derived as the union of
 * the sets of Interfaces used by the type of the Port and its supertypes.
 * 
 *  redefinedPort : Port [0..*]{subsets Property::redefinedProperty} (opposite A_redefinedPort_port::port)
 * 
 * A Port may be redefined when its containing EncapsulatedClassifier is specialized. The redefining Port may
 * have additional Interfaces to those that are associated with the redefined Port or it may replace an Interface by
 * one of its subtypes.
 * 
 *  /required : Interface [0..*]{} (opposite A_required_port::port)
 * 
 * The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCassifier expects its
 * environment to handle via this port. This association is derived according to the value of isConjugated. If
 * isConjugated is false, required is derived as the union of the sets of Interfaces used by the type of the Port and
 * its supertypes. If isConjugated is true, it is derived as the union of the sets of Interfaces realized by the type of
 * the Port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface.
 * 
 * Operations
 * 
 *  provided() : Interface [0..*]
 * 
 * Derivation for Port::/provided
 * body: if isConjugated then basicRequired() else basicProvided() endif
 * 
 *  required() : Interface [0..*]
 * 
 * Derivation for Port::/required
 * body: if isConjugated then basicProvided() else basicRequired() endif
 * 
 *  basicProvided() : Interface [0..*]
 * 
 * The union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly the type of the
 * Port if the Port is typed by an Interface.
 * body: if type.oclIsKindOf(Interface)
 * then type.oclAsType(Interface)->asSet()
 * else type.oclAsType(Classifier).allRealizedInterfaces()
 * endif
 * 
 *  basicRequired() : Interface [0..*]
 * 
 * The union of the sets of Interfaces used by the type of the Port and its supertypes.
 * body: type.oclAsType(Classifier).allUsedInterfaces()
 * 
 * Constraints
 * 
 *  port_aggregation
 * 
 * Port.aggregation must be composite.
 * inv: aggregation = AggregationKind::composite
 * 
 *  default_value
 * 
 * A defaultValue for port cannot be specified when the type of the Port is an Interface.
 * inv: type.oclIsKindOf(Interface) implies defaultValue->isEmpty()
 * 
 *  encapsulated_owner
 * 
 * All Ports are owned by an EncapsulatedClassifier.
 * inv: owner = encapsulatedClassifier
**/