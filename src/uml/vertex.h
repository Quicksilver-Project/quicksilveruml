/**~state machine~
 * A_incoming_target_vertex [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Vertex::incoming
 * 
 *  Transition::target
**/
/**
 * A_outgoing_source_vertex [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Vertex::outgoing
 * 
 *  Transition::source
**/
/**
 * A_redefinedVertex_vertex [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Owned Ends
 * 
 * • vertex : Vertex [0..*] {subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Vertex::redefinedVertex)
**/
/**
 * A_redefinitionContext_vertex [Association]
 * 
 * Diagrams
 * 
 * State Machine Redefinition
 * 
 * Generalizations
 * 
 * A_redefinitionContext_redefinableElement
 * 
 * Owned Ends
 * 
 *  vertex : Vertex [0..*]{subsets A_redefinitionContext_redefinableElement::redefinableElement}
 * (opposite Vertex::redefinitionContext)
**/
/**
 * A_subvertex_container [Association]
 * 
 * Diagrams
 * 
 * Behavior State Machines
 * 
 * Member Ends
 * 
 *  Region::subvertex
 * 
 *  Vertex::container
**/