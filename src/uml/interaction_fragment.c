 /**~interaction~
 * InteractionFragment [Abstract Class]
 * 
 * Description
 * 
 * InteractionFragment is an abstract notion of the most general interaction unit. An InteractionFragment is a piece of an
 * Interaction. Each InteractionFragment is conceptually like an Interaction by itself.
 * 
 * Diagrams
 * 
 * Interactions, Lifelines, Occurrences, Fragments, Interaction Uses
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * CombinedFragment, Continuation, ExecutionSpecification, Interaction, InteractionOperand, InteractionUse,
 * OccurrenceSpecification, StateInvariant
 * 
 * Association Ends
 * 
 *  covered : Lifeline [0..*] (opposite Lifeline::coveredBy)
 * 
 * References the Lifelines that the InteractionFragment involves.
 * 
 *  enclosingInteraction : Interaction [0..1]{subsets NamedElement::namespace} (opposite Interaction::fragment)
 * 
 * The Interaction enclosing this InteractionFragment.
 * 
 *  enclosingOperand : InteractionOperand [0..1]{subsets NamedElement::namespace} (opposite
 * InteractionOperand::fragment)
 * 
 * The operand enclosing this InteractionFragment (they may nest recursively).
 * 
 *  ♦ generalOrdering : GeneralOrdering [0..*]{subsets Element::ownedElement} (opposite
 * A_generalOrdering_interactionFragment::interactionFragment)
 * 
 * The general ordering relationships contained in this fragment.
**/