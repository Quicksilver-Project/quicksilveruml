/**~action~
 * Pin [Abstract Class]
 * 
 * Description
 * 
 * A Pin is an ObjectNode and MultiplicityElement that provides input values to an Action or accepts output values from
 * an Action.
 * 
 * Diagrams
 * 
 * Actions
 * 
 * Generalizations
 * 
 * ObjectNode, MultiplicityElement
 * 
 * Specializations
 * 
 * InputPin, OutputPin
 * 
 * Attributes
 * 
 *  isControl : Boolean [1..1] = false
 * 
 * Indicates whether the Pin provides data to the Action or just controls how the Action executes.
 * 
 * Constraints
 * 
 *  control_pins
 * 
 * A control Pin has a control type.
 * 
 * inv: isControl implies isControlType
 * 
 *  not_unique
 * 
 * Pin multiplicity is not unique.
 * 
 * inv: not isUnique
**/