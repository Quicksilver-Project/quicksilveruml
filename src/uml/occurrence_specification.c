/**~interaction~
 * OccurrenceSpecification [Class]
 * 
 * Description
 * 
 * An OccurrenceSpecification is the basic semantic unit of Interactions. The sequences of occurrences specified by them
 * are the meanings of Interactions.
 * 
 * Diagrams
 * 
 * Interactions, Messages, Lifelines, Occurrences
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Specializations
 * 
 * ExecutionOccurrenceSpecification, MessageOccurrenceSpecification
 * 
 * Association Ends
 * 
 *  covered : Lifeline [1..1]{redefines InteractionFragment::covered} (opposite A_covered_events::events)
 * 
 * References the Lifeline on which the OccurrenceSpecification appears.
 * 
 *  toAfter : GeneralOrdering [0..*] (opposite GeneralOrdering::before)
 * 
 * References the GeneralOrderings that specify EventOcurrences that must occur after this
 * OccurrenceSpecification.
 * 
 *  toBefore : GeneralOrdering [0..*] (opposite GeneralOrdering::after)
 * 
 * References the GeneralOrderings that specify EventOcurrences that must occur before this
 * OccurrenceSpecification.
**/