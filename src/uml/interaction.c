/**~interaction~
 * Interaction [Class]
 * 
 * Description
 * 
 * An Interaction is a unit of Behavior that focuses on the observable exchange of information between connectable
 * elements.
 * 
 * Diagrams
 * 
 * Interactions, Messages, Lifelines, Interaction Uses
 * 
 * Generalizations
 * 
 * InteractionFragment, Behavior
 * 
 * Association Ends
 * 
 *  ♦ action : Action [0..*]{subsets Element::ownedElement} (opposite A_action_interaction::interaction)
 * 
 * Actions owned by the Interaction.
 * 
 *  ♦ formalGate : Gate [0..*]{subsets Namespace::ownedMember} (opposite
 * A_formalGate_interaction::interaction)
 * 
 * Specifies the gates that form the message interface between this Interaction and any InteractionUses which
 * reference it.
 * 
 *  ♦ fragment : InteractionFragment [0..*]{ordered, subsets Namespace::ownedMember} (opposite
 * InteractionFragment::enclosingInteraction)
 * 
 * The ordered set of fragments in the Interaction.
 * 
 *  ♦ lifeline : Lifeline [0..*]{subsets Namespace::ownedMember} (opposite Lifeline::interaction)
 * 
 * Specifies the participants in this Interaction.
 * 
 *  ♦ message : Message [0..*]{subsets Namespace::ownedMember} (opposite Message::interaction)
 * 
 * The Messages contained in this Interaction.
 * 
 * Constraints
 * 
 *  not_contained
 * 
 * An Interaction instance must not be contained within another Interaction instance.
 * inv: enclosingInteraction->isEmpty()
**/