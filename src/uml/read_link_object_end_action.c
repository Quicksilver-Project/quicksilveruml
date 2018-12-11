/**~action~
 * ReadLinkObjectEndAction [Class]
 * 
 * Description
 * 
 * A ReadLinkObjectEndAction is an Action that retrieves an end object from a link object.
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
 *  end : Property [1..1] (opposite A_end_readLinkObjectEndAction::readLinkObjectEndAction)
 * 
 * The Association end to be read.
 * 
 *  ♦ object : InputPin [1..1]{subsets Action::input} (opposite
 * A_object_readLinkObjectEndAction::readLinkObjectEndAction)
 * 
 * The input pin from which the link object is obtained.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_readLinkObjectEndAction::readLinkObjectEndAction)
 * 
 * The OutputPin where the result value is placed.
 * 
 * Constraints
 * 
 *  property
 * 
 * The end Property must be an Association memberEnd.
 * 
 * inv: end.association <> null
 * 
 *  multiplicity_of_object
 * 
 * The multiplicity of the object InputPin is 1..1.
 * 
 * inv: object.is(1,1)
 * 
 *  ends_of_association
 * 
 * The ends of the association must not be static.
 * 
 * inv: end.association.memberEnd->forAll(e | not e.isStatic)
 * 
 *  type_of_result
 * 
 * The type of the result OutputPin is the same as the type of the end Property.
 * 
 * inv: result.type = end.type
 * 
 *  multiplicity_of_result
 * 
 * The multiplicity of the result OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  type_of_object
 * 
 * The type of the object InputPin is the AssociationClass that owns the end Property.
 * 
 * inv: object.type = end.association
 * 
 *  association_of_association
 * 
 * The association of the end must be an AssociationClass.
 * 
 * inv: end.association.oclIsKindOf(AssociationClass)
**/