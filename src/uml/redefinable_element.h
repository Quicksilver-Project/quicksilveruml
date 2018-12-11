/**~classification~
 * A_redefinedClassifier_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Classifier::redefinedClassifier)
**/
/**
 * A_redefinedElement_redefinableElement [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  /redefinableElement : RedefinableElement [0..*]{union} (opposite RedefinableElement::redefinedElement)
**/
/**
 * A_redefinedOperation_operation [Association]
 * 
 * Diagrams
 * 
 * Operations
 * 
 * Owned Ends
 * 
 *  operation : Operation [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Operation::redefinedOperation)
**/
/**
 * A_redefinitionContext_redefinableElement [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Specializations
 * 
 * A_redefinitionContext_transition, A_redefinitionContext_state, A_redefinitionContext_region
 * 
 * Owned Ends
 * 
 *  /redefinableElement : RedefinableElement [0..*]{union} (opposite RedefinableElement::redefinitionContext)
**/
/**
 * A_redefinedEdge_activityEdge [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityEdge : ActivityEdge [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement}
 * (opposite ActivityEdge::redefinedEdge)
**/
/**
 * A_redefinedNode_activityNode [Association]
 * 
 * Diagrams
 * 
 * Activities
 * 
 * Owned Ends
 * 
 *  activityNode : ActivityNode [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement}
 * (opposite ActivityNode::redefinedNode)
**/
/**
 * A_context_behavior [Association]
 * 
 * Diagrams
 * 
 * Behaviors
 * 
 * Owned Ends
 * 
 *  behavior : Behavior [0..*]{subsets A_redefinitionContext_redefinableElement::redefinableElement} (opposite
 * Behavior::context)
**/
/**
 * A_attribute_classifier [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  classifier : Classifier [0..1]{union, subsets Feature::featuringClassifier, subsets
 * RedefinableElement::redefinitionContext} (opposite Classifier::attribute)
**/
/**
 * A_redefinitionContext_redefinableElement [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Specializations
 * 
 * A_redefinitionContext_transition, A_redefinitionContext_state, A_redefinitionContext_region
 * 
 * Owned Ends
 * 
 *  /redefinableElement : RedefinableElement [0..*]{union} (opposite RedefinableElement::redefinitionContext)
**/
/**
 * A_redefinedElement_redefinableElement [Association]
 * 
 * Diagrams
 * 
 * Classifiers
 * 
 * Owned Ends
 * 
 *  /redefinableElement : RedefinableElement [0..*]{union} (opposite RedefinableElement::redefinedElement)
**/