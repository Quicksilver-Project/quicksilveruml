/**~action~
 * ReadLinkObjectEndQualifierAction [Class]
 * 
 * Description
 * 
 * A ReadLinkObjectEndQualifierAction is an Action
 * that retrieves a qualifier end value from a link object.
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_readLinkObjectEndQualifierAction::readLinkObjectEndQualifierAction)
 * 
 * The InputPin from which the link object is obtained.
 * 
 *  qualifier : Property [1..1] (opposite
 * A_qualifier_readLinkObjectEndQualifierAction::readLinkObjectEndQualifierAction)
 * 
 * The qualifier Property to be read.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_readLinkObjectEndQualifierAction::readLinkObjectEndQualifierAction)
 * 
 * The OutputPin where the result value is placed.
 * 
 * Constraints
 * 
 *  multiplicity_of_object
 * 
 * The multiplicity of the object InputPin is 1..1.
 * 
 * inv: object.is(1,1)
 * 
 *  type_of_object
 * 
 * The type of the object InputPin is the 
 * AssociationClass that owns the 
 * Association end that has the given
 * qualifier Property.
 * 
 * inv: object.type = qualifier.associationEnd.association
 * 
 *  multiplicity_of_qualifier
 * 
 * The multiplicity of the qualifier Property is 1..1.
 * 
 * inv: qualifier.is(1,1)
 * 
 *  ends_of_association
 * 
 * The ends of the Association must not be static.
 * 
 * inv: qualifier.associationEnd.association.memberEnd->forAll(e | not e.isStatic)
 * 
 *  multiplicity_of_result
 * 
 * The multiplicity of the result OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  same_type
 * 
 * The type of the result OutputPin
 * is the same as the type of the qualifier Property.
 * 
 * inv: result.type = qualifier.type
 * 
 *  association_of_association
 * 
 * The association of the Association
 * end of the qualifier Property
 * must be an AssociationClass.
 * 
 * inv: qualifier.associationEnd.association.oclIsKindOf(AssociationClass)
 * 
 *  qualifier_attribute
 * 
 * The qualifier Property must be a qualifier of an Association end.
 * 
 * inv: qualifier.associationEnd <> null
**/