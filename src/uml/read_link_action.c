/**~action~
 * ReadLinkAction [Class]
 * 
 * Description
 * 
 * A ReadLinkAction is a LinkAction that navigates 
 * across an Association to retrieve the objects on one end.
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Generalizations
 * 
 * LinkAction
 * 
 * Association Ends
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite A_result_readLinkAction::readLinkAction)
 * 
 * The OutputPin on which the objects retrieved 
 * from the "open" end of those links whose 
 * values on other ends are given by the endData.
 * 
 * Operations
 * 
 *  openEnd() : Property [0..*]{ordered}
 * 
 * Returns the ends corresponding to endData
 * with no value InputPin. (A well-formed ReadLinkAction is
 * constrained to have only one of these.)
 * 
 * body: endData->select(value=null).end->asOrderedSet()
 * 
 * Constraints
 * 
 *  type_and_ordering
 * 
 * The type and ordering of the result OutputPin
 * are same as the type and ordering of the open Association end.
 * 
 * inv: self.openEnd()->forAll(type=result.type and isOrdered=result.isOrdered)
 * 
 *  compatible_multiplicity
 * 
 * The multiplicity of the open Association end
 * must be compatible with the multiplicity of the result OutputPin.
 * 
 * inv: self.openEnd()->first().compatibleWith(result)
 * 
 *  visibility
 * 
 * Visibility of the open end must allow access from the object performing the action.
 * 
 * inv: let openEnd : Property = self.openEnd()->first() in
 * openEnd.visibility = VisibilityKind::public or
 * endData->exists(oed |
 * oed.end<>openEnd and
 * (_'context' = oed.end.type or
 * (openEnd.visibility = VisibilityKind::protected and
 * _'context'.conformsTo(oed.end.type.oclAsType(Classifier)))))
 * 
 *  one_open_end
 * 
 * Exactly one linkEndData specification 
 * (corresponding to the "open" end) 
 * must not have a value InputPin.
 * 
 * inv: self.openEnd()->size() = 1
 * 
 *  navigable_open_end
 * 
 * The open end must be navigable.
 * 
 * inv: self.openEnd()->first().isNavigable()
**/