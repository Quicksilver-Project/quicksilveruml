/**~use case~
 * ExtensionPoint [Class]
 * 
 * Description
 * 
 * An ExtensionPoint identifies a point in the behavior of a UseCase where that behavior can be extended by the behavior
 * of some other (extending) UseCase, as specified by an Extend relationship.
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Generalizations
 * 
 * RedefinableElement
 * 
 * Association Ends
 * 
 *  useCase : UseCase [1..1]{subsets NamedElement::namespace} (opposite UseCase::extensionPoint)
 * 
 * The UseCase that owns this ExtensionPoint.
 * 
 * Constraints
 * 
 *  must_have_name
 * 
 * An ExtensionPoint must have a name.
 * inv: name->notEmpty ()
**/