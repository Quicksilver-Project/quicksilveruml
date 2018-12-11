/**~action~
 * A_collection_reduceAction [Association]
 * 
 * Diagrams
 * 
 * Other Actions
 * 
 * Owned Ends
 * 
 *  reduceAction : ReduceAction [0..1]{subsets A_input_action::action} (opposite ReduceAction::collection)
**/
/**
 * A_reducer_reduceAction [Association]
 * 
 * Diagrams
 * 
 * Other Actions
 * 
 * Owned Ends
 * 
 *  reduceAction : ReduceAction [0..*] (opposite ReduceAction::reducer)
**/
/**
 * A_result_reduceAction [Association]
 * 
 * Diagrams
 * 
 * Other Actions
 * 
 * Owned Ends
 * 
 *  reduceAction : ReduceAction [0..1]{subsets A_output_action::action} (opposite ReduceAction::result)
**/