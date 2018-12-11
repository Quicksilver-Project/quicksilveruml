/**~action~
 * ActionInputPin [Class]
 * 
 * Description
 * 
 * An ActionInputPin is a kind of InputPin that executes an Action to determine the values to input to another Action.
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Generalizations
 * 
 * InputPin
 * 
 * Association Ends
 * 
 *  ♦ fromAction : Action [1..1]{subsets Element::ownedElement} (opposite
 * A_fromAction_actionInputPin::actionInputPin)
 * 
 * The Action used to provide the values of the ActionInputPin.
 * 
 * Constraints
 * 
 *  input_pin
 * 
 * The fromAction of an ActionInputPin must only have ActionInputPins as InputPins.
 * 
 * inv: fromAction.input->forAll(oclIsKindOf(ActionInputPin))
 * 
 *  one_output_pin
 * 
 * The fromAction of an ActionInputPin must have exactly one OutputPin.
 * 
 * inv: fromAction.output->size() = 1
 * 
 *  no_control_or_object_flow
 * 
 * The fromAction of an ActionInputPin cannot have ActivityEdges coming into or out of it or its Pins.
 * 
 * inv: fromAction.incoming->union(outgoing)->isEmpty() and
 * fromAction.input.incoming->isEmpty() and
 * fromAction.output.outgoing->isEmpty()
**/
