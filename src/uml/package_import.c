/**~common structure~
 * PackageImport [Class]
 * 
 * Description
 * 
 * A PackageImport is a Relationship that imports all the non-private members of a Package into the Namespace owning
 * the PackageImport, so that those Elements may be referred to by their unqualified names in the importingNamespace.
 * 
 * Diagrams
 * 
 * Namespaces, Profiles
 * 
 * Generalizations
 * 
 * DirectedRelationship
 * 
 * Attributes
 * 
 *  visibility : VisibilityKind [1..1] = public
 * 
 * Specifies the visibility of the imported PackageableElements within the importingNamespace, i.e., whether
 * imported Elements will in turn be visible to other Namespaces. If the PackageImport is public, the imported
 * Elements will be visible outside the importingNamespace, while, if the PackageImport is private, they will not.
 * 
 * Association Ends
 * 
 *  importedPackage : Package [1..1]{subsets DirectedRelationship::target} (opposite
 * A_importedPackage_packageImport::packageImport)
 * 
 * Specifies the Package whose members are imported into a Namespace.
 * 
 *  importingNamespace : Namespace [1..1]{subsets DirectedRelationship::source, subsets Element::owner}
 * (opposite Namespace::packageImport)
 * 
 * Specifies the Namespace that imports the members from a Package.
 * 
 * Constraints
 * 
 *  public_or_private
 * 
 * The visibility of a PackageImport is either public or private.
 * 
 * inv: visibility = VisibilityKind::public or visibility = VisibilityKind::private
**/