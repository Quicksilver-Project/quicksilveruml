/**~package~
 * Package [Class]
 * 
 * Description
 * 
 * A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a
 * package, it is possible to apply a profile not only to packages, but also to profiles. Package specializes
 * TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used
 * as a template and a PackageableElement as a template parameter. A package is used to group elements, and provides a
 * namespace for the grouped elements.
 * 
 * Diagrams
 * 
 * Packages, Profiles, Namespaces
 * 
 * Generalizations
 * 
 * PackageableElement, TemplateableElement, Namespace
 * 
 * Specializations
 * 
 * Model, Profile
 * 
 * Attributes
 * 
 *  URI : String [0..1]
 * 
 * Provides an identifier for the package that can be used for many purposes. A URI is the universally unique
 * identification of the package following the IETF URI specification, RFC 2396
 * http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 * 
 * Association Ends
 * 
 *  ♦ /nestedPackage : Package [0..*]{subsets Package::packagedElement} (opposite Package::nestingPackage)
 * 
 * References the packaged elements that are Packages.
 * 
 *  nestingPackage : Package [0..1]{subsets A_packagedElement_owningPackage::owningPackage} (opposite
 * Package::nestedPackage)
 * 
 * References the Package that owns this Package.
 * 
 *  ♦ /ownedStereotype : Stereotype [0..*]{subsets Package::packagedElement} (opposite
 * A_ownedStereotype_owningPackage::owningPackage)
 * 
 * References the Stereotypes that are owned by the Package.
 * 
 *  ♦ /ownedType : Type [0..*]{subsets Package::packagedElement} (opposite Type::package)
 * 
 * References the packaged elements that are Types.
 * 
 *  ♦ packageMerge : PackageMerge [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite PackageMerge::receivingPackage)
 * 
 * References the PackageMerges that are owned by this Package.
 * 
 *  ♦ packagedElement : PackageableElement [0..*]{subsets Namespace::ownedMember} (opposite
 * A_packagedElement_owningPackage::owningPackage)
 * 
 * Specifies the packageable elements that are owned by this Package.
 * 
 *  ♦ profileApplication : ProfileApplication [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite ProfileApplication::applyingPackage)
 * 
 * References the ProfileApplications that indicate which profiles have been applied to the Package.
 * 
 * Operations
 * 
 *  allApplicableStereotypes() : Stereotype [0..*]
 * 
 * The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including
 * stereotypes contained in sub-profiles.
 * body: let ownedPackages : Bag(Package) = ownedMember->select(oclIsKindOf(Package))-
 * >collect(oclAsType(Package)) in
 * ownedStereotype->union(ownedPackages.allApplicableStereotypes())->flatten()->asSet()
 * 
 *  containingProfile() : Profile [0..1]
 * 
 * The query containingProfile() returns the closest profile directly or indirectly containing this package (or this
 * package itself, if it is a profile).
 * body: if self.oclIsKindOf(Profile) then
 * self.oclAsType(Profile)
 * else
 * self.namespace.oclAsType(Package).containingProfile()
 * endif
 * 
 *  makesVisible(el : NamedElement) : Boolean
 * 
 * The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no
 * visibility and elements with public visibility are made visible.
 * pre: member->includes(el)
 * body: ownedMember->includes(el) or
 * (elementImport->select(ei|ei.importedElement = VisibilityKind::public)-
 * >collect(importedElement.oclAsType(NamedElement))->includes(el)) or
 * (packageImport->select(visibility = VisibilityKind::public)->collect(importedPackage.member-
 * >includes(el))->notEmpty())
 * 
 *  mustBeOwned() : Boolean {redefines Element::mustBeOwned()}
 * 
 * The query mustBeOwned() indicates whether elements of this type must have an owner.
 * body: false
 * 
 *  nestedPackage() : Package [0..*]
 * 
 * Derivation for Package::/nestedPackage
 * body: packagedElement->select(oclIsKindOf(Package))->collect(oclAsType(Package))->asSet()
 * 
 *  ownedStereotype() : Stereotype [0..*]
 * 
 * Derivation for Package::/ownedStereotype
 * body: packagedElement->select(oclIsKindOf(Stereotype))->collect(oclAsType(Stereotype))-
 * >asSet()
 * 
 *  ownedType() : Type [0..*]
 * 
 * Derivation for Package::/ownedType
 * body: packagedElement->select(oclIsKindOf(Type))->collect(oclAsType(Type))->asSet()
 * 
 *  visibleMembers() : PackageableElement [0..*]
 * 
 * The query visibleMembers() defines which members of a Package can be accessed outside it.
 * body: member->select( m | m.oclIsKindOf(PackageableElement) and self.makesVisible(m))-
 * >collect(oclAsType(PackageableElement))->asSet()
 * 
 * Constraints
 * 
 *  elements_public_or_private
 * 
 * If an element that is owned by a package has visibility, it is public or private.
 * inv: packagedElement->forAll(e | e.visibility<> null implies e.visibility =
 * VisibilityKind::public or e.visibility = VisibilityKind::private)
**/