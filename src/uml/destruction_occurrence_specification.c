/**~interaction~
 * DestructionOccurrenceSpecification [Class]
 * 
 * Description
 * 
 * A DestructionOccurenceSpecification models the destruction of an object.
 * 
 * Diagrams
 * 
 * Messages
 * 
 * Generalizations
 * 
 * MessageOccurrenceSpecification
 * 
 * Constraints
 * 
 *  no_occurrence_specifications_below
 * 
 * No other OccurrenceSpecifications on a given Lifeline in an InteractionOperand may appear below a
 * DestructionOccurrenceSpecification.
 * 
 * inv: let o : InteractionOperand = enclosingOperand in o->notEmpty() and
 * let peerEvents : OrderedSet(OccurrenceSpecification) = covered.events-
 * >select(enclosingOperand = o)
 * in peerEvents->last() = self
**/