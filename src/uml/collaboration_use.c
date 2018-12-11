/**~structured classifier~
 * CollaborationUse [Class]
 * 
 * Description
 * 
 * A CollaborationUse is used to specify the application of a pattern specified by a Collaboration to a specific situation.
 * 
 * Diagrams
 * 
 * Collaborations, Classifiers
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Association Ends
 * 
 *  ♦ roleBinding : Dependency [0..*]{subsets Element::ownedElement} (opposite
 * A_roleBinding_collaborationUse::collaborationUse)
 * 
 * A mapping between features of the Collaboration and features of the owning Classifier. This mapping indicates
 * which ConnectableElement of the Classifier plays which role(s) in the Collaboration. A ConnectableElement
 * may be bound to multiple roles in the same CollaborationUse (that is, it may play multiple roles).
 * 
 *  type : Collaboration [1..1] (opposite A_type_collaborationUse::collaborationUse)
 * 
 * The Collaboration which is used in this CollaborationUse. The Collaboration defines the cooperation between
 * its roles which are mapped to ConnectableElements relating to the Classifier owning the CollaborationUse.
 * 
 * Constraints
 * 
 *  client_elements
 * 
 * All the client elements of a roleBinding are in one Classifier and all supplier elements of a roleBinding are in
 * one Collaboration.
 * inv: roleBinding->collect(client)->forAll(ne1, ne2 |
 * ne1.oclIsKindOf(ConnectableElement) and ne2.oclIsKindOf(ConnectableElement) and
 * let ce1 : ConnectableElement = ne1.oclAsType(ConnectableElement), ce2 :
 * ConnectableElement = ne2.oclAsType(ConnectableElement) in
 * ce1.structuredClassifier = ce2.structuredClassifier)
 * and
 * roleBinding->collect(supplier)->forAll(ne1, ne2 |
 * ne1.oclIsKindOf(ConnectableElement) and ne2.oclIsKindOf(ConnectableElement) and
 * let ce1 : ConnectableElement = ne1.oclAsType(ConnectableElement), ce2 :
 * ConnectableElement = ne2.oclAsType(ConnectableElement) in
 * ce1.collaboration = ce2.collaboration)
 * 
 *  every_role
 * 
 * Every collaborationRole in the Collaboration is bound within the CollaborationUse.
 * inv: type.collaborationRole->forAll(role | roleBinding->exists(rb | rb.supplier-
 * >includes(role)))
 * 
 *  connectors
 * 
 * Connectors in a Collaboration typing a CollaborationUse must have corresponding Connectors between
 * 
 * elements bound in the context Classifier, and these corresponding Connectors must have the same or more
 * general type than the Collaboration Connectors.
 * inv: type.ownedConnector->forAll(connector |
 * let rolesConnectedInCollab : Set(ConnectableElement) = connector.end.role->asSet(),
 * relevantBindings : Set(Dependency) = roleBinding->select(rb | rb.supplier-
 * >intersection(rolesConnectedInCollab)->notEmpty()),
 * boundRoles : Set(ConnectableElement) = relevantBindings-
 * >collect(client.oclAsType(ConnectableElement))->asSet(),
 * contextClassifier : StructuredClassifier = boundRoles-
 * >any(true).structuredClassifier->any(true) in
 * contextClassifier.ownedConnector->exists( correspondingConnector |
 * correspondingConnector.end.role->forAll( role | boundRoles->includes(role) )
 * and (connector.type->notEmpty() and correspondingConnector.type->notEmpty())
 * implies connector.type->forAll(conformsTo(correspondingConnector.type)) )
 * )
**/