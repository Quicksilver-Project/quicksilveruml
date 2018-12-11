/**~activity~
 * ActivityParameterNode [Class]
 * 
 * Description
 * 
 * An ActivityParameterNode is an ObjectNode for accepting values from the input Parameters or providing values to the
 * output Parameters of an Activity.
 * 
 * Diagrams
 * 
 * Object Nodes
 * 
 * Generalizations
 * 
 * ObjectNode
 * 
 * Association Ends
 * 
 *  parameter : Parameter [1..1] (opposite A_parameter_activityParameterNode::activityParameterNode)
 * 
 * The Parameter for which the ActivityParameterNode will be accepting or providing values.
 * 
 * Constraints
 * 
 *  no_outgoing_edges
 * 
 * An ActivityParameterNode with no outgoing ActivityEdges and one or more incoming ActivityEdges must
 * have a parameter with direction out, inout, or return.
 * inv: (incoming->notEmpty() and outgoing->isEmpty()) implies
 * (parameter.direction = ParameterDirectionKind::out or
 * parameter.direction = ParameterDirectionKind::inout or
 * parameter.direction = ParameterDirectionKind::return)
 * 
 *  has_parameters
 * 
 * The parameter of an ActivityParameterNode must be from the containing Activity.
 * inv: activity.ownedParameter->includes(parameter)
 * 
 *  same_type
 * 
 * The type of an ActivityParameterNode is the same as the type of its parameter.
 * inv: type = parameter.type
 * 
 *  no_incoming_edges
 * 
 * An ActivityParameterNode with no incoming ActivityEdges and one or more outgoing ActivityEdges must
 * have a parameter with direction in or inout.
 * inv: (outgoing->notEmpty() and incoming->isEmpty()) implies
 * (parameter.direction = ParameterDirectionKind::_'in' or
 * parameter.direction = ParameterDirectionKind::inout)
 * 
 *  no_edges
 * 
 * An ActivityParameterNode may have all incoming ActivityEdges or all outgoing ActivityEdges, but it must not
 * have both incoming and outgoing ActivityEdges.
 * inv: incoming->isEmpty() or outgoing->isEmpty()
**/