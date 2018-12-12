/**~interaction~
 * InteractionOperand [Class]
 * 
 * Description
 * 
 * An InteractionOperand is contained in a CombinedFragment. An InteractionOperand represents one operand of the
 * expression given by the enclosing CombinedFragment.
 * 
 * Diagrams
 * 
 * Fragments
 * 
 * Generalizations
 * 
 * InteractionFragment, Namespace
 * 
 * Association Ends
 * 
 *  ♦ fragment : InteractionFragment [0..*]{ordered, subsets Namespace::ownedMember} (opposite
 * InteractionFragment::enclosingOperand)
 * 
 * The fragments of the operand.
 * 
 *  ♦ guard : InteractionConstraint [0..1]{subsets Element::ownedElement} (opposite
 * A_guard_interactionOperand::interactionOperand)
 * 
 * Constraint of the operand.
 * 
 * Constraints
 * 
 *  guard_contain_references
 * 
 * The guard must contain only references to values local to the Lifeline on which it resides, or values global to
 * the whole Interaction.
 * 
 * Cannot be expressed in OCL
 * 
 *  guard_directly_prior
 * 
 * The guard must be placed directly prior to (above) the OccurrenceSpecification that will become the first
 * OccurrenceSpecification within this InteractionOperand.
 * 
 * Cannot be expressed in OCL
**/