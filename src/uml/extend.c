/**~use case~
 * Extend [Class]
 * 
 * Description
 * 
 * A relationship from an extending UseCase to an extended UseCase that specifies how and when the behavior defined in
 * the extending UseCase can be inserted into the behavior defined in the extended UseCase.
 * 
 * Diagrams
 * 
 * Use Cases
 * 
 * Generalizations
 * 
 * NamedElement, DirectedRelationship
 * 
 * Association Ends
 * 
 *  ♦ condition : Constraint [0..1]{subsets Element::ownedElement} (opposite A_condition_extend::extend)
 * 
 * References the condition that must hold when the first ExtensionPoint is reached for the extension to take
 * place. If no constraint is associated with the Extend relationship, the extension is unconditional.
 * 
 *  extendedCase : UseCase [1..1]{subsets DirectedRelationship::target} (opposite
 * A_extendedCase_extend::extend)
 * 
 * The UseCase that is being extended.
 * 
 *  extension : UseCase [1..1]{subsets NamedElement::namespace, subsets DirectedRelationship::source}
 * (opposite UseCase::extend)
 * 
 * The UseCase that represents the extension and owns the Extend relationship.
 * 
 *  extensionLocation : ExtensionPoint [1..*]{ordered} (opposite A_extensionLocation_extension::extension)
 * 
 * An ordered list of ExtensionPoints belonging to the extended UseCase, specifying where the respective
 * behavioral fragments of the extending UseCase are to be inserted. The first fragment in the extending UseCase
 * is associated with the first extension point in the list, the second fragment with the second point, and so on.
 * Note that, in most practical cases, the extending UseCase has just a single behavior fragment, so that the list of
 * ExtensionPoints is trivial.
 * 
 * Constraints
 * 
 *  extension_points
 * 
 * The ExtensionPoints referenced by the Extend relationship must belong to the UseCase that is being extended.
 * inv: extensionLocation->forAll (xp | extendedCase.extensionPoint->includes(xp))
**/