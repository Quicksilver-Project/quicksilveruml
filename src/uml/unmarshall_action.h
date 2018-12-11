/**~action~
 * A_object_unmarshallAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  unmarshallAction : UnmarshallAction [0..1]{subsets A_input_action::action} (opposite
 * UnmarshallAction::object)
**/
/**
 * A_result_unmarshallAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  unmarshallAction : UnmarshallAction [0..1]{subsets A_output_action::action} (opposite
 * UnmarshallAction::result)
**/
/**
 * A_unmarshallType_unmarshallAction [Association]
 * 
 * Diagrams
 * 
 * Accept Event Actions
 * 
 * Owned Ends
 * 
 *  unmarshallAction : UnmarshallAction [0..*] (opposite UnmarshallAction::unmarshallType)
**/
