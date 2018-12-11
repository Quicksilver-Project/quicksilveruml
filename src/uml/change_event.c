/**~common behavior~
 * ChangeEvent [Class]
 * 
 * Description
 * 
 * A ChangeEvent models a change in the system configuration that makes a condition true.
 * 
 * Diagrams
 * 
 * Events
 * 
 * Generalizations
 * 
 * Event
 * 
 * Association Ends
 * 
 *  ♦ changeExpression : ValueSpecification [1..1]{subsets Element::ownedElement} (opposite
 * A_changeExpression_changeEvent::changeEvent)
 * 
 * A Boolean-valued ValueSpecification that will result in a ChangeEvent whenever its value changes from false
 * to true.
**/