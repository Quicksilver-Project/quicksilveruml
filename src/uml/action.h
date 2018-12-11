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
 * A_context_action [Association]
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Owned Ends
 * 
 *  action : Action [0..*] (opposite Action::context)
**/
/**
 * A_input_action [Association]
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Owned Ends
 * 
 *  /action : Action [0..1]{union, subsets Element::owner} (opposite Action::input)
**/
/**
 * A_localPostcondition_action [Association]
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Owned Ends
 * 
 *  action : Action [0..1]{subsets Element::owner} (opposite Action::localPostcondition)
**/
/**
 * A_localPrecondition_action [Association]
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Owned Ends
 * 
 *  action : Action [0..1]{subsets Element::owner} (opposite Action::localPrecondition)
**/
/**
 * A_output_action [Association]
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Owned Ends
 * 
 *  /action : Action [0..1]{union, subsets Element::owner} (opposite Action::output)
**/
