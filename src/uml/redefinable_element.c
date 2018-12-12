/**~classification~
 * RedefinableElement [Abstract Class]
 * 
 * Description
 * 
 * A RedefinableElement is an element that, 
 * when defined in the context of a Classifier,
 * can be redefined more specifically
 * or differently in the context of another Classifier
 * that specializes (directly or indirectly)
 * the context Classifier.
 * 
 * Diagrams
 * 
 * Classifiers, Classifier Templates, 
 * Features, Activities, Use Cases, 
 * State Machine Redefinition
 * 
 * Generalizations
 * 
 * NamedElement
 * 
 * Specializations
 * 
 * Classifier, Feature, 
 * RedefinableTemplateSignature, 
 * ActivityEdge, ActivityNode, 
 * ExtensionPoint, Region,
 * State, Transition
 * 
 * Attributes
 * 
 *  isLeaf : Boolean [1..1] = false
 * 
 * Indicates whether it is possible 
 * to further redefine a RedefinableElement.
 * If the value is true, then it is not
 * possible to further redefine the RedefinableElement.
 * 
 * Association Ends
 * 
 *  /redefinedElement : RedefinableElement [0..*]{union}
 * (opposite A_redefinedElement_redefinableElement::redefinableElement)
 * 
 * The RedefinableElement that is being redefined by this element.
 * 
 *  /redefinitionContext : Classifier [0..*]{union}
 * (opposite A_redefinitionContext_redefinableElement::redefinableElement)
 * 
 * The contexts that this
 * element may be redefined from.
 * 
 * Operations
 * 
 *  isConsistentWith(redefiningElement : RedefinableElement) : Boolean
 * 
 * The query isConsistentWith() specifies,
 * for any two RedefinableElements in a context
 * in which redefinition is possible,
 * whether redefinition would be logically consistent.
 * By default, this is false; this operation must be
 * overridden for subclasses of RedefinableElement
 * to define the consistency conditions.
 * 
 * pre: redefiningElement.isRedefinitionContextValid(self)
 * 
 * body: false
 * 
 *  isRedefinitionContextValid
 * (redefinedElement : RedefinableElement) : Boolean
 * 
 * The query isRedefinitionContextValid()
 * specifies whether the redefinition
 * contexts of this RedefinableElement
 * are properly related to the redefinition
 * contexts of the specified RedefinableElement
 * to allow this element to redefine the other.
 * By default at least one of 
 * the redefinition contexts of this 
 * element must be a specialization of
 * at least one of the redefinition 
 * contexts of the specified element.
 * 
 * body: redefinitionContext->exists(c | c.allParents()-
 * >includesAll(redefinedElement.redefinitionContext))
 * 
 * Constraints
 * 
 *  redefinition_consistent
 * 
 * A redefining element must be consistent with each redefined element.
 * 
 * inv: redefinedElement->forAll(re | re.isConsistentWith(self))
 * 
 *  non_leaf_redefinition
 * 
 * A RedefinableElement can only redefine non-leaf RedefinableElements.
 * 
 * inv: redefinedElement->forAll(re | not re.isLeaf)
 * 
 *  redefinition_context_valid
 * 
 * At least one of the redefinition contexts
 * of the redefining element must
 * be a specialization of
 * at least one of the
 * redefinition contexts
 * for each redefined element. 
 * 
 * inv: redefinedElement->forAll(re | self.isRedefinitionContextValid(re))
**/