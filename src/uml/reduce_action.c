/**~action~
 * ReduceAction [Class]
 * 
 * Description
 * 
 * A ReduceAction is an Action that reduces a collection to a single value by repeatedly combining the elements of the
 * collection using a reducer Behavior.
 * 
 * Diagrams
 * 
 * Other Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Attributes
 * 
 *  isOrdered : Boolean [1..1] = false
 * 
 * Indicates whether the order of the input collection should determine the order in which the reducer Behavior is
 * applied to its elements.
 * 
 * Association Ends
 * 
 *  ♦ collection : InputPin [1..1]{subsets Action::input} (opposite A_collection_reduceAction::reduceAction)
 * 
 * The InputPin that provides the collection to be reduced.
 * 
 *  reducer : Behavior [1..1] (opposite A_reducer_reduceAction::reduceAction)
 * 
 * A Behavior that is repreatedly applied to two elements of the input collection to produce a value that is of the
 * same type as elements of the collection.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite A_result_reduceAction::reduceAction)
 * 
 * The output pin on which the result value is placed.
 * 
 * Constraints
 * 
 *  reducer_inputs_output
 * 
 * The reducer Behavior must have two input ownedParameters and one output ownedParameter, where the type
 * 
 * of the output Parameter and the type of elements of the input collection conform to the types of the input
 * Parameters.
 * 
 * inv: let inputs: OrderedSet(Parameter) = reducer.inputParameters() in
 * let outputs: OrderedSet(Parameter) = reducer.outputParameters() in
 * inputs->size()=2 and outputs->size()=1 and
 * inputs.type->forAll(t |
 * outputs.type->forAll(conformsTo(t)) and
 * -- Note that the following only checks the case when the collection is via multiple
 * tokens.
 * collection.upperBound()>1 implies collection.type.conformsTo(t))
 * 
 *  input_type_is_collection
 * 
 * The type of the collection InputPin must be a collection.
 * Cannot be expressed in OCL
 * 
 *  output_types_are_compatible
 * 
 * The type of the output of the reducer Behavior must conform to the type of the result OutputPin.
 * 
 * inv: reducer.outputParameters().type->forAll(conformsTo(result.type))
**/