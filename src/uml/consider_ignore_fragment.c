/**~interaction~
 * ConsiderIgnoreFragment [Class]
 * 
 * Description
 * 
 * A ConsiderIgnoreFragment is a kind of CombinedFragment that is used for the consider and ignore cases, which require
 * lists of pertinent Messages to be specified.
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Generalizations
 * 
 * CombinedFragment
 * 
 * Association Ends
 * 
 *  message : NamedElement [0..*] (opposite A_message_considerIgnoreFragment::considerIgnoreFragment)
 * 
 * The set of messages that apply to this fragment.
 * 
 * Constraints
 * 
 *  consider_or_ignore
 * 
 * The interaction operator of a ConsiderIgnoreFragment must be either 'consider' or 'ignore'.
 * inv: (interactionOperator = InteractionOperatorKind::consider) or (interactionOperator =
 * InteractionOperatorKind::ignore)
 * 
 *  type
 * 
 * The NamedElements must be of a type of element that can be a signature for a message (i.e.., an Operation, or
 * a Signal).
 * inv: message->forAll(m | m.oclIsKindOf(Operation) or m.oclIsKindOf(Signal))
**/