/**~action~
 * ValuePin [Class]
 * 
 * Description
 * 
 * A ValuePin is an InputPin that provides a value by
 * evaluating a ValueSpecification.
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
 *  ♦ value : ValueSpecification [1..1]
 * {subsets Element::ownedElement}
 * (opposite A_value_valuePin::valuePin)
 * 
 * The ValueSpecification that is evaluated to
 * obtain the value that the ValuePin will provide.
 * 
 * Constraints
 * 
 *  no_incoming_edges
 * 
 * A ValuePin may have no incoming ActivityEdges.
 * 
 * inv: incoming->isEmpty()
 * 
 *  compatible_type
 * 
 * The type of the value ValueSpecification
 * must conform to the type of the ValuePin.
 * 
 * inv: value.type.conformsTo(type)
**/