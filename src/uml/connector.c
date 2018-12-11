/**~structured classifier~
 * Connector [Class]
 * 
 * Description
 * 
 * A Connector specifies links that enables communication between two or more instances. In contrast to Associations,
 * which specify links between any instance of the associated Classifiers, Connectors specify links between instances
 * playing the connected parts only.
 * 
 * Diagrams
 * 
 * Structured Classifiers, Messages, Information Flows
 * 
 * Generalizations
 * 
 * Feature
 * 
 * Attributes
 * 
 *  /kind : ConnectorKind [1..1]
 * 
 * Indicates the kind of Connector. This is derived: a Connector with one or more ends connected to a Port which
 * is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.
 * 
 * Association Ends
 * 
 *  contract : Behavior [0..*] (opposite A_contract_connector::connector)
 * 
 * The set of Behaviors that specify the valid interaction patterns across the Connector.
 * 
 *  ♦ end : ConnectorEnd [2..*]{ordered, subsets Element::ownedElement} (opposite
 * A_end_connector::connector)
 * 
 * A Connector has at least two ConnectorEnds, each representing the participation of instances of the Classifiers
 * typing the ConnectableElements attached to the end. The set of ConnectorEnds is ordered.
 * 
 *  redefinedConnector : Connector [0..*]{subsets RedefinableElement::redefinedElement} (opposite
 * A_redefinedConnector_connector::connector)
 * 
 * A Connector may be redefined when its containing Classifier is specialized. The redefining Connector may
 * have a type that specializes the type of the redefined Connector. The types of the ConnectorEnds of the
 * redefining Connector may specialize the types of the ConnectorEnds of the redefined Connector. The
 * properties of the ConnectorEnds of the redefining Connector may be replaced.
 * 
 *  type : Association [0..1] (opposite A_type_connector::connector)
 * An optional Association that classifies links corresponding to this Connector.
 * 
 * Operations
 * 
 *  kind() : ConnectorKind
 * 
 * Derivation for Connector::/kind : ConnectorKind
 * body: if end->exists(
 * role.oclIsKindOf(Port)
 * and partWithPort->isEmpty()
 * and not role.oclAsType(Port).isBehavior)
 * then ConnectorKind::delegation
 * else ConnectorKind::assembly
 * endif
 * 
 * Constraints
 * 
 *  types
 * 
 * The types of the ConnectableElements that the ends of a Connector are attached to must conform to the types
 * of the ends of the Association that types the Connector, if any.
 * inv: type<>null implies
 * let noOfEnds : Integer = end->size() in
 * (type.memberEnd->size() = noOfEnds) and Sequence{1..noOfEnds}->forAll(i | end-
 * >at(i).role.type.conformsTo(type.memberEnd->at(i).type))
 * 
 *  roles
 * 
 * The ConnectableElements attached as roles to each ConnectorEnd owned by a Connector must be owned or
 * inherited roles of the Classifier that owned the Connector, or they must be Ports of such roles.
 * inv: structuredClassifier <> null
 * and
 * end->forAll( e | structuredClassifier.allRoles()->includes(e.role)
 * or
 * e.role.oclIsKindOf(Port) and structuredClassifier.allRoles()->includes(e.partWithPort))
**/