/**~common structure~
 * Type [Abstract Class]
 * 
 * Description
 * 
 * A Type constrains the values represented by a TypedElement.
 * 
 * Diagrams
 * 
 * Types, Associations, Packages, Classifiers, Features, Operations
 * 
 * Generalizations
 * 
 * PackageableElement
 * 
 * Specializations
 * 
 * Classifier
 * 
 * Attributes
 * 
 * Association Ends
 * 
 *  package : Package [0..1]{subsets A_packagedElement_owningPackage::owningPackage} (opposite
 * Package::ownedType)
 * 
 * Specifies the owning Package of this Type, if any.
 * 
 * Operations
 * 
 *  conformsTo(other : Type) : Boolean
 * 
 * The query conformsTo() gives true for a Type that conforms to another. By default, two Types do not conform
 * to each other. This query is intended to be redefined for specific conformance situations.
 * 
 * body: false
**/