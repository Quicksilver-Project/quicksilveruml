/**~action~
 * CreateLinkObjectAction [Class]
 * 
 * Description
 * 
 * A CreateLinkObjectAction is a CreateLinkAction for creating link objects (AssociationClasse instances).
 * 
 * Diagrams
 * 
 * Link Object Actions
 * 
 * Generalizations
 * 
 * CreateLinkAction
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite
 * A_result_createLinkObjectAction::createLinkObjectAction)
 * 
 * The output pin on which the newly created link object is placed.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  type_of_result
 * 
 * The type of the result OutputPin must be the same as the Association of the CreateLinkObjectAction.
 * 
 * inv: result.type = association()
 * 
 *  association_class
 * 
 * The Association must be an AssociationClass.
 * 
 * inv: self.association().oclIsKindOf(AssociationClass)
**/