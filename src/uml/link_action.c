/**~action~
 * LinkAction [Abstract Class]
 * 
 * Description
 * 
 * LinkAction is an abstract class for all Actions that identify the links to be acted on using LinkEndData.
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Specializations
 * 
 * WriteLinkAction, ReadLinkAction
 * 
 * Association Ends
 * 
 *  ♦ endData : LinkEndData [2..*]{subsets Element::ownedElement} (opposite
 * A_endData_linkAction::linkAction)
 * 
 * The LinkEndData identifying the values on the ends of the links acting on by this LinkAction.
 * 
 *  ♦ inputValue : InputPin [1..*]{subsets Action::input} (opposite A_inputValue_linkAction::linkAction)
 * 
 * InputPins used by the LinkEndData of the LinkAction.
 * 
 * Operations
 * 
 *  association() : Association
 * 
 * Returns the Association acted on by this LinkAction.
 * 
 * body: endData->asSequence()->first().end.association
 * 
 * Constraints
 * 
 *  same_pins
 * 
 * The inputValue InputPins is the same as the union of all the InputPins referenced by the endData.
 * 
 * inv: inputValue->asBag()=endData.allPins()
 * 
 *  same_association
 * 
 * The ends of the endData must all be from the same Association and include all and only the memberEnds of
 * that association.
 * 
 * inv: endData.end = self.association().memberEnd->asBag()
 * 
 *  not_static
 * 
 * The ends of the endData must not be static.
 * 
 * inv: endData->forAll(not end.isStatic)
**/