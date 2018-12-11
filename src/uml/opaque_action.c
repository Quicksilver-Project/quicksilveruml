/**~action~
 * OpaqueAction [Class]
 * 
 * Description
 * 
 * An OpaqueAction is an Action whose functionality is not specified within UML.
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Attributes
 * 
 *  body : String [0..*]
 * 
 * Provides a textual specification of the functionality of the Action, in one or more languages other than UML.
 * 
 *  language : String [0..*]
 * 
 * If provided, a specification of the language used for each of the body Strings.
 * 
 * Association Ends
 * 
 *  ♦ inputValue : InputPin [0..*]{subsets Action::input} (opposite A_inputValue_opaqueAction::opaqueAction)
 * 
 * The InputPins providing inputs to the OpaqueAction.
 * 
 *  ♦ outputValue : OutputPin [0..*]{subsets Action::output} (opposite
 * A_outputValue_opaqueAction::opaqueAction)
 * 
 * The OutputPins on which the OpaqueAction provides outputs.
 * 
 * Constraints
 * 
 *  language_body_size
 * 
 * If the language attribute is not empty, then the size of the body and language lists must be the same.
 * 
 * inv: language->notEmpty() implies (_'body'->size() = language->size())
**/