/**~activity~ 
 * ExecutableNode [Abstract Class]
 * 
 * Description
 * 
 * An ExecutableNode is an abstract class for ActivityNodes whose execution may be controlled using ControlFlows and
 * to which ExceptionHandlers may be attached.
 * 
 * Diagrams
 * 
 * Executable Nodes, Actions, Structured Actions
 * 
 * Generalizations
 * 
 * ActivityNode
 * 
 * Specializations
 * 
 * Action
 * 
 * Association Ends
 * 
 *  ♦ handler : ExceptionHandler [0..*]{subsets Element::ownedElement} (opposite
 * ExceptionHandler::protectedNode)
 * 
 * A set of ExceptionHandlers that are examined if an exception propagates out of the ExceptionNode.
**/