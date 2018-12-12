/**~simple classifier~
 * Signal [Class]
 * 
 * Description
 * 
 * A Signal is a specification
 * of a kind of communication
 * between objects in which
 * a reaction is asynchronously triggered
 * in the receiver without a reply.
 * 
 * Diagrams
 * 
 * Signals, Events,
 * Invocation Actions
 * 
 * Generalizations
 * 
 * Classifier
 * 
 * Association Ends
 * 
 *  ♦ ownedAttribute : Property [0..*]
 * {ordered, subsets Classifier::attribute,
 * subsets Namespace::ownedMember}
 * (opposite A_ownedAttribute_owningSignal::owningSignal)
 * 
 * The attributes owned by the Signal.
**/