/**~action~
 * AddVariableValueAction [Class]
 * 
 * Description
 * 
 * An AddVariableValueAction is a WriteVariableAction for adding values to a Variable.
 * 
 * Diagrams
 * 
 * Variable Actions
 * 
 * Generalizations
 * 
 * WriteVariableAction
 * 
 * Attributes
 * 
 *  isReplaceAll : Boolean [1..1] = false
 * 
 * Specifies whether existing values of the Variable should be removed before adding the new value.\
 * 
 * Association Ends
 * 
 *  ♦ insertAt : InputPin [0..1]{subsets Action::input} (opposite
 * A_insertAt_addVariableValueAction::addVariableValueAction)
 * 
 * The InputPin that gives the position at which to insert a new value or move an existing value in ordered
 * Variables. The type of the insertAt InputPin is UnlimitedNatural, but the value cannot be zero. It is omitted for
 * unordered Variables.
 * 
 * Constraints
 * 
 *  required_value
 * 
 * A value InputPin is required.
 * 
 * inv: value <> null
 * 
 *  insertAt_pin
 * 
 * AddVariableValueActions for ordered Variables must have a single InputPin for the insertion point with type
 * UnlimtedNatural and multiplicity of 1..1 if isReplaceAll=false, otherwise the Action has no InputPin for the
 * insertion point.
 * 
 * inv: if not variable.isOrdered then insertAt = null\
 * else
 * not isReplaceAll implies
 * insertAt<>null and
 * insertAt->forAll(type=UnlimitedNatural and is(1,1.oclAsType(UnlimitedNatural)))
 * endif
**/