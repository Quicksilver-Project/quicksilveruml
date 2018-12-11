/**~structured classifier~
 * StructuredClassifier [Abstract Class]
 * 
 * Description
 * 
 * StructuredClassifiers may contain an internal structure of connected elements each of which plays a role in the overall
 * Behavior modeled by the StructuredClassifier.
 * 
 * Diagrams
 * 
 * Encapsulated Classifiers, Structured Classifiers, Collaborations
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Specializations
 * 
 * Collaboration, EncapsulatedClassifier
 * 
 * Association Ends
 * 
 *  ♦ ownedAttribute : Property [0..*]{ordered, subsets Classifier::attribute, subsets StructuredClassifier::role,
 * subsets Namespace::ownedMember} (opposite A_ownedAttribute_structuredClassifier::structuredClassifier)
 * 
 * The Properties owned by the StructuredClassifier.
 * 
 *  ♦ ownedConnector : Connector [0..*]{subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite A_ownedConnector_structuredClassifier::structuredClassifier)
 * 
 * The connectors owned by the StructuredClassifier.
 * 
 *  /part : Property [0..*]{} (opposite A_part_structuredClassifier::structuredClassifier)
 * 
 * The Properties specifying instances that the StructuredClassifier owns by composition. This collection is
 * derived, selecting those owned Properties where isComposite is true.
 * 
 *  /role : ConnectableElement [0..*]{union, subsets Namespace::member} (opposite
 * A_role_structuredClassifier::structuredClassifier)
 * 
 * The roles that instances may play in this StructuredClassifier.
 * 
 * Operations
 * 
 *  part() : Property [0..*]
 * 
 * Derivation for StructuredClassifier::/part
 * body: ownedAttribute->select(isComposite)
 * 
 *  allRoles() : ConnectableElement [0..*]
 * 
 * All features of type ConnectableElement, equivalent to all direct and inherited roles.
 * body: allFeatures()->select(oclIsKindOf(ConnectableElement))-
 * >collect(oclAsType(ConnectableElement))->asSet()
**/