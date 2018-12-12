/**~interaction~
 * StateInvariant [Class]
 * 
 * Description
 * 
 * A StateInvariant is a runtime constraint
 * on the participants of the Interaction.
 * It may be used to specify a variety of
 * different kinds of Constraints,
 * such as values of Attributes or Variables,
 * internal or external States, and so on. A
 * StateInvariant is an InteractionFragment
 * and it is placed on a Lifeline.
 * 
 * Diagrams
 * 
 * Interactions, Lifelines
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Association Ends
 * 
 *  covered : Lifeline [1..1]
 * {redefines InteractionFragment::covered}
 * (opposite
 * A_covered_stateInvariant::stateInvariant)
 * 
 * References the Lifeline on which the
 * StateInvariant appears.
 * 
 *  ♦ invariant : Constraint [1..1]
 * {subsets Element::ownedElement}
 * (opposite
 * A_invariant_stateInvariant::stateInvariant)
 * 
 * A Constraint that should hold at
 * runtime for this StateInvariant.
**/