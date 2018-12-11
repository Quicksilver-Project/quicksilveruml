/**~activity~ 
 * ExceptionHandler [Class]
 * 
 * Description
 * 
 * An ExceptionHandler is an Element that specifies a handlerBody ExecutableNode to execute in case the specified
 * exception occurs during the execution of the protected ExecutableNode.
 * 
 * Diagrams
 * 
 * Executable Nodes
 * 
 * Generalizations
 * 
 * Element
 * 
 * Association Ends
 * 
 *  exceptionInput : ObjectNode [1..1] (opposite A_exceptionInput_exceptionHandler::exceptionHandler)
 * 
 * An ObjectNode within the handlerBody. When the ExceptionHandler catches an exception, the exception
 * token is placed on this ObjectNode, causing the handlerBody to execute.
 * 
 *  exceptionType : Classifier [1..*] (opposite A_exceptionType_exceptionHandler::exceptionHandler)
 * 
 * The Classifiers whose instances the ExceptionHandler catches as exceptions. If an exception occurs whose
 * type is any exceptionType, the ExceptionHandler catches the exception and executes the handlerBody.
 * 
 *  handlerBody : ExecutableNode [1..1] (opposite A_handlerBody_exceptionHandler::exceptionHandler)
 * 
 * An ExecutableNode that is executed if the ExceptionHandler catches an exception.
 * 
 *  protectedNode : ExecutableNode [1..1]{subsets Element::owner} (opposite ExecutableNode::handler)
 * 
 * The ExecutableNode protected by the ExceptionHandler. If an exception propagates out of the protectedNode
 * and has a type matching one of the exceptionTypes, then it is caught by this ExceptionHandler.
 * 
 * Constraints
 * 
 *  handler_body_edges
 * 
 * The handlerBody has no incoming or outgoing ActivityEdges and the exceptionInput has no incoming
 * ActivityEdges.
 * inv: handlerBody.incoming->isEmpty() and handlerBody.outgoing->isEmpty() and
 * exceptionInput.incoming->isEmpty()
 * 
 *  output_pins
 * 
 * If the protectedNode is an Action with OutputPins, then the handlerBody must also be an Action with the same
 * number of OutputPins, which are compatible in type, ordering, and multiplicity to those of the protectedNode.
 * inv: (protectedNode.oclIsKindOf(Action) and protectedNode.oclAsType(Action).output-
 * >notEmpty()) implies
 * (
 * handlerBody.oclIsKindOf(Action) and
 * let protectedNodeOutput : OrderedSet(OutputPin) = protectedNode.oclAsType(Action).output,
 * handlerBodyOutput : OrderedSet(OutputPin) = handlerBody.oclAsType(Action).output in
 * protectedNodeOutput->size() = handlerBodyOutput->size() and
 * Sequence{1..protectedNodeOutput->size()}->forAll(i |
 * handlerBodyOutput->at(i).type.conformsTo(protectedNodeOutput->at(i).type) and
 * handlerBodyOutput->at(i).isOrdered=protectedNodeOutput->at(i).isOrdered and
 * handlerBodyOutput->at(i).compatibleWith(protectedNodeOutput->at(i)))
 * )
 * 
 *  one_input
 * 
 * The handlerBody is an Action with one InputPin, and that InputPin is the same as the exceptionInput.
 * inv: handlerBody.oclIsKindOf(Action) and
 * let inputs: OrderedSet(InputPin) = handlerBody.oclAsType(Action).input in
 * inputs->size()=1 and inputs->first()=exceptionInput
 * 
 *  edge_source_target
 * 
 * An ActivityEdge that has a source within the handlerBody of an ExceptionHandler must have its target in the
 * handlerBody also, and vice versa.
 * inv: let nodes:Set(ActivityNode) = handlerBody.oclAsType(Action).allOwnedNodes() in
 * nodes.outgoing->forAll(nodes->includes(target)) and
 * nodes.incoming->forAll(nodes->includes(source))
 * 
 *  handler_body_owner
 * 
 * The handlerBody must have the same owner as the protectedNode.
 * inv: handlerBody.owner=protectedNode.owner
 * 
 *  exception_input_type
 * 
 * The exceptionInput must either have no type or every exceptionType must conform to the exceptionInput type.
 * inv: exceptionInput.type=null or
 * exceptionType->forAll(conformsTo(exceptionInput.type.oclAsType(Classifier)))
**/