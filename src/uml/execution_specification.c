/**~interaction~
 * ExecutionSpecification [Abstract Class]
 * 
 * Description
 * 
 * An ExecutionSpecification is a specification of the execution of a unit of Behavior or Action within the Lifeline. The
 * duration of an ExecutionSpecification is represented by two OccurrenceSpecifications, the start
 * OccurrenceSpecification and the finish OccurrenceSpecification.
 * 
 * Diagrams
 * 
 * Interactions, Occurrences
 * 
 * Generalizations
 * 
 * InteractionFragment
 * 
 * Specializations
 * 
 * ActionExecutionSpecification, BehaviorExecutionSpecification
 * 
 * Association Ends
 * 
 *  finish : OccurrenceSpecification [1..1] (opposite A_finish_executionSpecification::executionSpecification)
 * 
 * References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 * 
 *  start : OccurrenceSpecification [1..1] (opposite A_start_executionSpecification::executionSpecification)
 * 
 * References the OccurrenceSpecification that designates the start of the Action or Behavior.
 * 
 * Constraints
 * 
 *  same_lifeline
 * 
 * The startEvent and the finishEvent must be on the same Lifeline.
 * 
 * inv: start.covered = finish.covered
**/

