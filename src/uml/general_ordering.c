/**~interaction~
 * GeneralOrdering [Class]
 * 
 * Description
 * 
 * A GeneralOrdering represents a binary relation between two OccurrenceSpecifications, to describe that one
 * OccurrenceSpecification must occur before the other in a valid trace. This mechanism provides the ability to define
 * partial orders of OccurrenceSpecifications that may otherwise not have a specified order.
 * 
 * Diagrams
 * 
 * Occurrences
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Association Ends
 * 
 *  after : OccurrenceSpecification [1..1] (opposite OccurrenceSpecification::toBefore)
 * 
 * The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before.
 * 
 *  before : OccurrenceSpecification [1..1] (opposite OccurrenceSpecification::toAfter)
 * 
 * The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after.
 * 
 * Constraints
 * 
 *  irreflexive_transitive_closure
 * 
 * An occurrence specification must not be ordered relative to itself through a series of general orderings. (In
 * other words, the transitive closure of the general orderings is irreflexive.)
 * 
 * inv: after->closure(toAfter.after)->excludes(before)
**/