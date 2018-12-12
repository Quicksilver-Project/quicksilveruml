/**~action~
 * StartClassifierBehaviorAction [Class]
 * 
 * Description
 * 
 * A StartClassifierBehaviorAction
 * is an Action that starts
 * the classifierBehavior of the input object.
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
 *  ♦ object : InputPin [1..1]
 * {subsets Action::input}
 * (opposite
 * A_object_startClassifierBehaviorAction
 * ::startClassifierBehaviorAction)
 * 
 * The InputPin that holds the object
 * whose classifierBehavior is to be started.
 * 
 * Constraints
 * 
 *  multiplicity
 * 
 * The multiplicity of the object
 * InputPin is 1..1
 * 
 * inv: object.is(1,1)
 * 
 *  type_has_classifier
 * 
 * If the InputPin has a type, then
 * the type or one of its ancestors
 * must have a classifierBehavior.
 * 
 * inv: object.type->notEmpty() implies
 * (object.type.oclIsKindOf(BehavioredClassifier) and
 * object.type.oclAsType(BehavioredClassifier).classifierBehavior<>null)
**/