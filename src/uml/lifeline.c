/**~interaction~
 * Lifeline [Class]
 * 
 * Description
 * 
 * A Lifeline represents an individual participant in the Interaction. While parts and structural features may have
 * multiplicity greater than 1, Lifelines represent only one interacting entity.
 * 
 * Diagrams
 * 
 * Lifelines, Interaction Uses
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Association Ends
 * 
 *  coveredBy : InteractionFragment [0..*] (opposite InteractionFragment::covered)
 * 
 * References the InteractionFragments in which this Lifeline takes part.
 * 
 *  decomposedAs : PartDecomposition [0..1] (opposite A_decomposedAs_lifeline::lifeline)
 * 
 * References the Interaction that represents the decomposition.
 * 
 *  interaction : Interaction [1..1]{subsets NamedElement::namespace} (opposite Interaction::lifeline)
 * 
 * References the Interaction enclosing this Lifeline.
 * 
 *  represents : ConnectableElement [0..1] (opposite A_represents_lifeline::lifeline)
 * 
 * References the ConnectableElement within the classifier that contains the enclosing interaction.
 * 
 *  ♦ selector : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite A_selector_lifeline::lifeline)
 * 
 * If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that
 * set.
 * 
 * Constraints
 * 
 *  selector_specified
 * 
 * The selector for a Lifeline must only be specified if the referenced Part is multivalued.
 * 
 * inv: self.selector->notEmpty() = (self.represents.oclIsKindOf(MultiplicityElement) and
 * self.represents.oclAsType(MultiplicityElement).isMultivalued())
 * 
 *  interaction_uses_share_lifeline
 * 
 * If a lifeline is in an Interaction referred to by an InteractionUse in an enclosing Interaction, and that lifeline is
 * common with another lifeline in an Interaction referred to by another InteractonUse within that same enclosing
 * Interaction, it must be common to a lifeline within that enclosing Interaction. By common Lifelines we mean
 * Lifelines with the same selector and represents associations.
 * 
 * inv: let intUses : Set(InteractionUse) = interaction.interactionUse in
 * intUses->forAll
 * ( iuse : InteractionUse |
 * let usingInteraction : Set(Interaction) = iuse.enclosingInteraction->asSet()
 * ->union(
 * iuse.enclosingOperand.combinedFragment->asSet()-
 * >closure(enclosingOperand.combinedFragment).enclosingInteraction->asSet()
 * )
 * in
 * let peerUses : Set(InteractionUse) = usingInteraction.fragment-
 * >select(oclIsKindOf(InteractionUse)).oclAsType(InteractionUse)->asSet()
 * ->union(
 * usingInteraction.fragment-
 * >select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)->asSet()
 * ->closure(operand.fragment-
 * >select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)).operand.fragment->
 * select(oclIsKindOf(InteractionUse)).oclAsType(InteractionUse)->asSet()
 * )->excluding(iuse)
 * in
 * peerUses->forAll( peerUse : InteractionUse |
 * peerUse.refersTo.lifeline->forAll( l : Lifeline | (l.represents = self.represents and
 * ( self.selector.oclIsKindOf(LiteralString) implies
 * l.selector.oclIsKindOf(LiteralString) and
 * self.selector.oclAsType(LiteralString).value = l.selector.oclAsType(LiteralString).value )
 * and
 * ( self.selector.oclIsKindOf(LiteralInteger) implies
 * l.selector.oclIsKindOf(LiteralInteger) and
 * self.selector.oclAsType(LiteralInteger).value = l.selector.oclAsType(LiteralInteger).value
 * ))
 * implies
 * usingInteraction.lifeline->select(represents = self.represents and
 * ( self.selector.oclIsKindOf(LiteralString) implies
 * l.selector.oclIsKindOf(LiteralString) and
 * self.selector.oclAsType(LiteralString).value = l.selector.oclAsType(LiteralString).value )
 * and
 * ( self.selector.oclIsKindOf(LiteralInteger) implies
 * l.selector.oclIsKindOf(LiteralInteger) and
 * self.selector.oclAsType(LiteralInteger).value = l.selector.oclAsType(LiteralInteger).value
 * ))
 * )
 * )
 * )
 * 
 *  same_classifier
 * 
 * The classifier containing the referenced ConnectableElement must be the same classifier, or an ancestor, of the
 * classifier that contains the interaction enclosing this lifeline.
 * 
 * inv: represents.namespace->closure(namespace)->includes(interaction._'context')
 * 
 *  selector_int_or_string
 * 
 * The selector value, if present, must be a LiteralString or a LiteralInteger.
 * 
 * inv: self.selector->notEmpty() implies
 * self.selector.oclIsKindOf(LiteralInteger) or
 * self.selector.oclIsKindOf(LiteralString)
**/