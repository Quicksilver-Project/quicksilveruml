/**~action~
 * RemoveVariableValueAction [Class]
 * 
 * Description
 * 
 * A RemoveVariableValueAction is a WriteVariableAction that removes values from a Variables.
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
 *  isRemoveDuplicates : Boolean [1..1] = false
 * 
 * Specifies whether to remove duplicates of the value in nonunique Variables.
 * 
 * Association Ends
 * 
 *  ♦ removeAt : InputPin [0..1]{subsets Action::input} (opposite
 * A_removeAt_removeVariableValueAction::removeVariableValueAction)
 * 
 * An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The
 * type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
 * 
 * Constraints
 * 
 *  removeAt_and_value
 * 
 * ReadVariableActions removing a value from ordered, non-unique Variables must have a single removeAt
 * InputPin and no value InputPin, if isRemoveDuplicates is false. The removeAt InputPin must be of type
 * Unlimited Natural with multiplicity 1..1. Otherwise, the Action has a value InputPin and no removeAt
 * InputPin.
 * 
 * inv: if variable.isOrdered and not variable.isUnique and not isRemoveDuplicates then
 * value = null and
 * removeAt <> null and
 * removeAt.type = UnlimitedNatural and
 * removeAt.is(1,1)
 * else
 * removeAt = null and value <> null
 * endif
**/