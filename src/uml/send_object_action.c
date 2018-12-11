/**~action~
 * SendObjectAction [Class]
 * 
 * Description
 * 
 * A SendObjectAction is an InvocationAction that transmits an input object to the target object, which is handled as a
 * request message by the target object. The requestor continues execution immediately after the object is sent out and
 * cannot receive reply values.
 * 
 * Diagrams
 * 
 * Invocation Actions
 * 
 * Generalizations
 * 
 * InvocationAction
 * 
 * Association Ends
 * 
 *  ♦ request : InputPin [1..1]{redefines InvocationAction::argument} (opposite
 * A_request_sendObjectAction::sendObjectAction)
 * 
 * The request object, which is transmitted to the target object. The object may be copied in transmission, so
 * identity might not be preserved.
 * 
 *  ♦ target : InputPin [1..1]{subsets Action::input} (opposite A_target_sendObjectAction::sendObjectAction)
 * 
 * The target object to which the object is sent.
 * 
 * Constraints
 * 
 *  type_target_pin
 * 
 * If onPort is not empty, the Port given by onPort must be an owned or inherited feature of the type of the target
 * InputPin.
 * 
 * inv: onPort<>null implies target.type.oclAsType(Classifier).allFeatures()->includes(onPort)
**/