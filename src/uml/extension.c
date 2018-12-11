/**~package~
 * Extension [Class]
 * 
 * Description
 * 
 * An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the
 * ability to flexibly add (and later remove) stereotypes to classes.
 * 
 * Diagrams
 * 
 * Profiles, Classes
 * 
 * Generalizations
 * 
 * Association
 * 
 * Attributes
 * 
 *  /isRequired : Boolean [1..1]
 * 
 * Indicates whether an instance of the extending stereotype must be created when an instance of the extended
 * class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd
 * referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false.
 * Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 * 
 * Association Ends
 * 
 *  /metaclass : Class [1..1]{} (opposite Class::extension)
 * 
 * References the Class that is extended through an Extension. The property is derived from the type of the
 * memberEnd that is not the ownedEnd.
 * 
 *  ♦ ownedEnd : ExtensionEnd [1..1]{redefines Association::ownedEnd} (opposite
 * A_ownedEnd_extension::extension)
 * 
 * References the end of the extension that is typed by a Stereotype.
 * 
 * Operations
 * 
 *  isRequired() : Boolean
 * 
 * The query isRequired() is true if the owned end has a multiplicity with the lower bound of 1.
 * body: ownedEnd.lowerBound() = 1
 * 
 *  metaclass() : Class
 * 
 * The query metaclass() returns the metaclass that is being extended (as opposed to the extending stereotype).
 * body: metaclassEnd().type.oclAsType(Class)
 * 
 *  metaclassEnd() : Property
 * 
 * The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 * body: memberEnd->reject(p | ownedEnd->includes(p.oclAsType(ExtensionEnd)))->any(true)
 * 
 * Constraints
 * 
 *  non_owned_end
 * 
 * The non-owned end of an Extension is typed by a Class.
 * inv: metaclassEnd()->notEmpty() and metaclassEnd().type.oclIsKindOf(Class)
 * 
 *  is_binary
 * 
 * An Extension is binary, i.e., it has only two memberEnds.
 * inv: memberEnd->size() = 2
**/