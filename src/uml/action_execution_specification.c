/**~interaction~
 * ActionExecutionSpecification [Class]
 * 
 * Description
 * 
 * An ActionExecutionSpecification is a kind of ExecutionSpecification representing the execution of an Action.
 * 
 * Diagrams
 * 
 * Occurrences
 * 
 * Generalizations
 * 
 * ExecutionSpecification
 * 
 * Association Ends
 * 
 *  action : Action [1..1] (opposite A_action_actionExecutionSpecification::actionExecutionSpecification)
 * 
 * Action whose execution is occurring.
 * 
 * Constraints
 * 
 *  action_referenced
 * 
 * The Action referenced by the ActionExecutionSpecification must be owned by the Interaction owning that
 * ActionExecutionSpecification.
 * inv: (enclosingInteraction->notEmpty() or enclosingOperand.combinedFragment->notEmpty()) and
 * let parentInteraction : Set(Interaction) = enclosingInteraction.oclAsType(Interaction)-
 * >asSet()->union(
 * enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
 * collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
 * (parentInteraction->size() = 1) and self.action.interaction->asSet() = parentInteraction
**/