/**~action~
 * WriteLinkAction [Abstract Class]
 * 
 * Description
 * 
 * WriteLinkAction is an abstract class for LinkActions that create and destroy links.
 * 
 * Diagrams
 * 
 * Link Actions
 * 
 * Generalizations
 * 
 * LinkAction
 * 
 * Specializations
 * 
 * CreateLinkAction, DestroyLinkAction
 * 
 * Constraints
 * 
 *  allow_access
 * 
 * The visibility of at least one end must allow access from the context Classifier of the WriteLinkAction.
 * 
 * inv: endData.end->exists(end |
 * end.type=_'context' or
 * end.visibility=VisibilityKind::public or
 * end.visibility=VisibilityKind::protected and
 * endData.end->exists(other |
 * other<>end and _'context'.conformsTo(other.type.oclAsType(Classifier))))
**/