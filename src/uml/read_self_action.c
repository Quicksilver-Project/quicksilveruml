/**~action~
 * ReadSelfAction [Class]
 * 
 * Description
 * 
 * A ReadSelfAction is an Action that retrieves the 
 * context object of the Behavior execution within which the
 * 
 * ReadSelfAction execution is taking place.
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
 *  ♦ result : OutputPin [1..1]{subsets Action::output} (opposite A_result_readSelfAction::readSelfAction)
 * 
 * The OutputPin on which the context object is placed.
 * 
 * Constraints
 * 
 *  contained
 * 
 * A ReadSelfAction must have a context Classifier.
 * 
 * inv: _'context' <> null
 * 
 *  multiplicity
 * 
 * The multiplicity of the result OutputPin is 1..1.
 * 
 * inv: result.is(1,1)
 * 
 *  not_static
 * 
 * If the ReadSelfAction is contained in a 
 * Behavior that is acting as a method, 
 * then the Operation of the method
 * must not be static.
 * 
 * inv: let behavior: Behavior = self.containingBehavior() in
 * behavior.specification<>null implies not behavior.specification.isStatic
 * 
 *  type
 * 
 * The type of the result OutputPin is the context Classifier.
 * 
 * inv: result.type = _'context'
**/