/**~action~
 * TestIdentityAction [Class]
 * 
 * Description
 * 
 * A TestIdentityAction is an Action
 * that tests if two values
 * are identical objects.
 * 
 * Diagrams
 * 
 * Object Actions
 * 
 * Generalizations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  ♦ first : InputPin [1..1]{subsets Action::input}
 * (opposite A_first_testIdentityAction::testIdentityAction)
 * 
 * The InputPin on which the first input object is placed.
 * 
 *  ♦ result : OutputPin [1..1]{subsets Action::output} 
 * opposite A_result_testIdentityAction::testIdentityAction)
 * 
 * The OutputPin whose Boolean value indicates
 * whether the two input objects are identical.
 * 
 *  ♦ second : InputPin [1..1]{subsets Action::input}
 * (opposite A_second_testIdentityAction::testIdentityAction)
 * 
 * The OutputPin on which the second
 * input object is placed.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the
 * InputPins is 1..1.
 * 
 * inv: first.is(1,1) and second.is(1,1)
 * 
 *  no_type
 * 
 * The InputPins have no type.
 * 
 * inv: first.type= null and second.type = null
 * 
 *  result_is_boolean
 * 
 * The type of the result
 * OutputPin is Boolean.
 * 
 * inv: result.type=Boolean
**/
