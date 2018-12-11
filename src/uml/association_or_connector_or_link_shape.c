/**~UML Diagram Interchange~
 * UMLAssociationOrConnectorOrLinkShape [Class]
 * 
 * Description
 * 
 * Shows shapes for binary relationships.
 * 
 * Generalizations
 * 
 * UMLShape
 * 
 * Attributes
 * 
 *  kind : UMLAssociationOrConnectorOrLinkShapeKind [1..1]
 * 
 * Constraints
 * 
 *  modelElement_mult
 * 
 * UMLAssociationOrConnectorOrLinkShapes must have exactly one modelElement.
 * 
 * inv: modelElement->size()=1
 * 
 *  modelElement_type
 * 
 * modelElement must be an Association, Connector, or InstanceSpecification with an Association classifier.
 * 
 * inv: modelElement->asSequence()->first().oclIsKindOf(Association) or modelElement-
 * >asSequence()->first().oclIsKindOf(Connector)
 * or ( modelElement->asSequence()->first().oclIsKindOf(InstanceSpecification)
 * and (modelElement->asSequence()->first().oclAsType(InstanceSpecification).classifier-
 * >select(oclIsKindOf(Association))->size() > 0))
 * 
 *  edge_association
 * 
 * For diamond kind and an Association modelElement, the Association has exactly two memberEnds, and
 * exactly two of the UMLEdges linked to the shape have those memberEnds as modelElements.
 * 
 * inv: (kind=UMLAssociationOrConnectorOrLinkShapeKind::diamond and modelElement-
 * >forAll(oclIsKindOf(Association))) implies
 * let association : Association = modelElement->any(true).oclAsType(Association) in
 * ((association.memberEnd->size() = 2) and
 * (sourceEdge.modelElement->union(targetEdge.modelElement)->select(em |
 * association.memberEnd->includes(em))->size()=2))
 * 
 *  edge_instancespec
 * 
 * For diamond kind and an InstanceSpecification modelElement, exactly one Association classifier of the
 * InstanceSpecification has exactly two memberEnds and exactly two of the UMLEdges linked to the shape have
 * those memberEnds as modelElements.
 * 
 * inv: (kind=UMLAssociationOrConnectorOrLinkShapeKind::diamond and modelElement-
 * >forAll(oclIsKindOf(InstanceSpecification))) implies
 * let instanceSpecification : InstanceSpecification = modelElement-
 * >any(true).oclAsType(InstanceSpecification) in
 * (instanceSpecification.classifier->select(a | a.oclIsKindOf(Association) and
 * (a.oclAsType(Association).memberEnd->size() = 2) and
 * (sourceEdge.modelElement->union(targetEdge.modelElement)
 * ->select(e | a.oclAsType(Association).memberEnd->includes(e.modelElement))
 * ->size()=2))
 * ->size()=1)
 * 
 *  edge_connector
 * 
 * For diamond kind and a Connector modelElement, the Connector has exactly two ends, and exactly two of the
 * UMLEdges linked to the shape have definingEnds of those ends as modelElements.
 * 
 * inv: (kind=UMLAssociationOrConnectorOrLinkShapeKind::diamond and modelElement-
 * >forAll(oclIsKindOf(Connector))) implies
 * let connector : Connector = modelElement->any(true).oclAsType(Connector) in
 * ((connector.end->size() = 2) and
 * (sourceEdge.modelElement->union(targetEdge.modelElement)->select(em |
 * connector.end.definingEnd->includes(em))->size()=2))
**/