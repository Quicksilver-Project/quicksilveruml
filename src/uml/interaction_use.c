/**~interaction~
 * InteractionUse [Class]
 * 
 * Description
 * 
 * An InteractionUse refers to an Interaction. The InteractionUse is a shorthand for copying the contents of the referenced
 * Interaction where the InteractionUse is. To be accurate the copying must take into account substituting parameters with
 * arguments and connect the formal Gates with the actual ones.
 * 
 * Diagrams
 * 
 * Interaction Uses
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Specializations
 * 
 * PartDecomposition
 * 
 * Association Ends
 * 
 *  ♦ actualGate : Gate [0..*]{subsets Element::ownedElement} (opposite
 * A_actualGate_interactionUse::interactionUse)
 * The actual gates of the InteractionUse.
 * 
 *  ♦ argument : ValueSpecification [0..*]{ordered, subsets Element::ownedElement} (opposite
 * A_argument_interactionUse::interactionUse)
 * 
 * The actual arguments of the Interaction.
 * 
 *  refersTo : Interaction [1..1] (opposite A_refersTo_interactionUse::interactionUse)
 * 
 * Refers to the Interaction that defines its meaning.
 * 
 *  ♦ returnValue : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_returnValue_interactionUse::interactionUse)
 * 
 * The value of the executed Interaction.
 * 
 *  returnValueRecipient : Property [0..1] (opposite A_returnValueRecipient_interactionUse::interactionUse)
 * 
 * The recipient of the return value.
 * 
 * Constraints
 * 
 *  gates_match
 * 
 * Actual Gates of the InteractionUse must match Formal Gates of the referred Interaction. Gates match when
 * their names are equal and their messages correspond.
 * inv: actualGate->notEmpty() implies
 * refersTo.formalGate->forAll( fg : Gate | self.actualGate->select(matches(fg))->size()=1) and
 * self.actualGate->forAll(ag : Gate | refersTo.formalGate->select(matches(ag))->size()=1)
 * 
 *  arguments_are_constants
 * 
 * The arguments must only be constants, parameters of the enclosing Interaction or attributes of the classifier
 * owning the enclosing Interaction.
 * Cannot be expressed in OCL
 * 
 *  returnValueRecipient_coverage
 * 
 * The returnValueRecipient must be a Property of a ConnectableElement that is represented by a Lifeline
 * covered by this InteractionUse.
 * inv: returnValueRecipient->asSet()->notEmpty() implies
 * let covCE : Set(ConnectableElement) = covered.represents->asSet() in
 * covCE->notEmpty() and let classes:Set(Classifier) =
 * covCE.type.oclIsKindOf(Classifier).oclAsType(Classifier)->asSet() in
 * let allProps : Set(Property) = classes.attribute->union(classes.allParents().attribute)-
 * >asSet() in
 * allProps->includes(returnValueRecipient)
 * 
 *  arguments_correspond_to_parameters
 * 
 * The arguments of the InteractionUse must correspond to parameters of the referred Interaction.
 * Cannot be expressed in OCL
 * 
 *  returnValue_type_recipient_correspondence
 * 
 * The type of the returnValue must correspond to the type of the returnValueRecipient.
 * inv: returnValue.type->asSequence()->notEmpty() implies returnValue.type->asSequence()-
 * >first() = returnValueRecipient.type->asSequence()->first()
 * 
 *  all_lifelines
 * 
 * The InteractionUse must cover all Lifelines of the enclosing Interaction that are common with the lifelines
 * covered by the referred Interaction. Lifelines are common if they have the same selector and represents
 * associationEnd values.
 * inv: let parentInteraction : Set(Interaction) = enclosingInteraction->asSet()->
 * union(enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
 * collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
 * parentInteraction->size()=1 and let refInteraction : Interaction = refersTo in
 * parentInteraction.covered-> forAll(intLifeline : Lifeline | refInteraction.covered->
 * forAll( refLifeline : Lifeline | refLifeline.represents = intLifeline.represents and
 * (
 * ( refLifeline.selector.oclIsKindOf(LiteralString) implies
 * intLifeline.selector.oclIsKindOf(LiteralString) and
 * refLifeline.selector.oclAsType(LiteralString).value =
 * intLifeline.selector.oclAsType(LiteralString).value ) and
 * ( refLifeline.selector.oclIsKindOf(LiteralInteger) implies
 * intLifeline.selector.oclIsKindOf(LiteralInteger) and
 * refLifeline.selector.oclAsType(LiteralInteger).value =
 * intLifeline.selector.oclAsType(LiteralInteger).value )
 * )
 * implies self.covered->asSet()->includes(intLifeline)))
**/
