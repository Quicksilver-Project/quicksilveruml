/**~package~
 * Profile [Class]
 * 
 * Description
 * 
 * A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific
 * platform or domain.
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * Package
 * 
 * Association Ends
 * 
 *  ♦ metaclassReference : ElementImport [0..*]{subsets Namespace::elementImport} (opposite
 * A_metaclassReference_profile::profile)
 * 
 * References a metaclass that may be extended.
 * 
 *  ♦ metamodelReference : PackageImport [0..*]{subsets Namespace::packageImport} (opposite
 * A_metamodelReference_profile::profile)
 * 
 * References a package containing (directly or indirectly) metaclasses that may be extended.
 * 
 * Constraints
 * 
 *  metaclass_reference_not_specialized
 * 
 * An element imported as a metaclassReference is not specialized or generalized in a Profile.
 * 
 * inv: metaclassReference.importedElement->
 * select(c | c.oclIsKindOf(Classifier) and
 * (c.oclAsType(Classifier).allParents()->collect(namespace)->includes(self)))-
 * >isEmpty()
 * and
 * packagedElement->
 * select(oclIsKindOf(Classifier))->collect(oclAsType(Classifier).allParents())->
 * intersection(metaclassReference.importedElement->select(oclIsKindOf(Classifier))-
 * >collect(oclAsType(Classifier)))->isEmpty()
 * 
 *  references_same_metamodel
 * 
 * All elements imported either as metaclassReferences or through metamodelReferences are members of the
 * same base reference metamodel.
 * 
 * inv: metamodelReference.importedPackage.elementImport.importedElement.allOwningPackages()->
 * union(metaclassReference.importedElement.allOwningPackages() )->notEmpty()
**/