/**~common structure~
 * ElementImport [Class]
 * 
 * Description
 * 
 * An ElementImport identifies a NamedElement in a Namespace other than the one that owns that NamedElement and
 * allows the NamedElement to be referenced using an unqualified name in the Namespace owning the ElementImport.
 * 
 * Diagrams
 * 
 * Namespaces, Profiles
 * Generalizations
 * DirectedRelationship
 * 
 * Attributes
 * 
 *  alias : String [0..1]
 * 
 * Specifies the name that should be added to the importing Namespace in lieu of the name of the imported
 * PackagableElement. The alias must not clash with any other member in the importing Namespace. By default,
 * no alias is used.
 * 
 *  visibility : VisibilityKind [1..1] = public
 * 
 * Specifies the visibility of the imported PackageableElement within the importingNamespace, i.e., whether the
 * importedElement will in turn be visible to other Namespaces. If the ElementImport is public, the
 * importedElement will be visible outside the importingNamespace while, if the ElementImport is private, it will not.
 * 
 * Association Ends
 * 
 *  importedElement : PackageableElement [1..1]{subsets DirectedRelationship::target} (opposite
 * A_importedElement_import::import)
 * 
 * Specifies the PackageableElement whose name is to be added to a Namespace.
 * 
 *  importingNamespace : Namespace [1..1]{subsets DirectedRelationship::source, subsets Element::owner}
 * (opposite Namespace::elementImport)
 * 
 * Specifies the Namespace that imports a PackageableElement from another Namespace.
 * Operations
 * 
 *  getName() : String
 * 
 * The query getName() returns the name under which the imported PackageableElement will be known in the
 * importing namespace.
 * 
 * body: if alias->notEmpty() then
 * alias
 * else
 * importedElement.name
 * endif
 * 
 * Constraints
 * 
 *  imported_element_is_public
 * 
 * An importedElement has either public visibility or no visibility at all.
 * 
 * inv: importedElement.visibility <> null implies importedElement.visibility =
 * VisibilityKind::public
 * 
 *  visibility_public_or_private
 * 
 * The visibility of an ElementImport is either public or private.
 * 
 * inv: visibility = VisibilityKind::public or visibility = VisibilityKind::private
**/