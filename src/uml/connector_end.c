/**~structured classifier~
 * ConnectorEnd [Class]
 * 
 * Description
 * 
 * A ConnectorEnd is an endpoint of a Connector, which attaches the Connector to a ConnectableElement.
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers, Structured Classifiers
 * 
 * Generalizations
 * 
 * MultiplicityElement
 * 
 * Association Ends
 * 
 *  /definingEnd : Property [0..1]{} (opposite A_definingEnd_connectorEnd::connectorEnd)
 * 
 * A derived property referencing the corresponding end on the Association which types the Connector owing this
 * ConnectorEnd, if any. It is derived by selecting the end at the same place in the ordering of Association ends as
 * this ConnectorEnd.
 * 
 *  partWithPort : Property [0..1] (opposite A_partWithPort_connectorEnd::connectorEnd)
 * 
 * Indicates the role of the internal structure of a Classifier with the Port to which the ConnectorEnd is attached.
 * 
 *  role : ConnectableElement [1..1] (opposite ConnectableElement::end)
 * 
 * The ConnectableElement attached at this ConnectorEnd. When an instance of the containing Classifier is
 * created, a link may (depending on the multiplicities) be created to an instance of the Classifier that types this
 * ConnectableElement.
 * 
 * Operations
 * 
 *  definingEnd() : Property [0..1]
 * 
 * Derivation for ConnectorEnd::/definingEnd : Property
 * body: if connector.type = null
 * then
 * null
 * else
 * let index : Integer = connector.end->indexOf(self) in
 * connector.type.memberEnd->at(index)
 * endif
 * 
 * Constraints
 * 
 *  role_and_part_with_port
 * 
 * If a ConnectorEnd references a partWithPort, then the role must be a Port that is defined or inherited by the
 * type of the partWithPort.
 * inv: partWithPort->notEmpty() implies
 * (role.oclIsKindOf(Port) and partWithPort.type.oclAsType(Namespace).member->includes(role))
 * 
 *  part_with_port_empty
 * 
 * If a ConnectorEnd is attached to a Port of the containing Classifier, partWithPort will be empty.
 * inv: (role.oclIsKindOf(Port) and role.owner = connector.owner) implies partWithPort-
 * >isEmpty()
 * 
 *  multiplicity
 * 
 * The multiplicity of the ConnectorEnd may not be more general than the multiplicity of the corresponding end
 * of the Association typing the owning Connector, if any.
 * inv: self.compatibleWith(definingEnd)
 * 
 *  self_part_with_port
 * 
 * The Property held in self.partWithPort must not be a Port.
 * inv: partWithPort->notEmpty() implies not partWithPort.oclIsKindOf(Port)
**/