/**~common structure~
 * Element [Abstract Class]
 * 
 * Description
 * 
 * An Element is a constituent of a model. As such, it has the capability of owning other Elements.
 * 
 * Diagrams
 * 
 * Root, Template Bindings, Templates, Namespaces, Types, Constraints, Activity Groups, Executable Nodes,
 * Profiles, Instances, Link End Data, Structured Actions
 * 
 * Specializations
 * 
 * Comment, MultiplicityElement, NamedElement, ParameterableElement, Relationship, TemplateableElement,
 * TemplateParameter, TemplateParameterSubstitution, TemplateSignature, ExceptionHandler, Image, Slot,
 * Clause, LinkEndData, QualifierValue
 * 
 * Association Ends
 * 
 *  ♦ ownedComment : Comment [0..*]{subsets Element::ownedElement} (opposite 
 * A_ownedComment_owningElement::owningElement)
 * 
 * The Comments owned by this Element.
 * 
 *  ♦ /ownedElement : Element [0..*]{union} (opposite Element::owner)
 * 
 * The Elements owned by this Element.
 * 
 *  /owner : Element [0..1]{union} (opposite Element::ownedElement)
 * 
 * The Element that owns this Element.
 * 
 * Operations
 * 
 *  allOwnedElements() : Element [0..*]
 * 
 * The query allOwnedElements() gives all of the direct and indirect ownedElements of an Element.
 * 
 * body: ownedElement->union(ownedElement->collect(e | e.allOwnedElements()))->asSet()
 * 
 *  mustBeOwned() : Boolean
 * 
 * The query mustBeOwned() indicates whether Elements of this type must have an owner. Subclasses of
 * Element that do not require an owner must override this operation.
 * 
 * body: true
 * 
 * Constraints
 * 
 *  has_owner
 * 
 * Elements that must be owned must have an owner.
 * 
 * inv: mustBeOwned() implies owner->notEmpty()
 * 
 *  not_own_self
 * 
 * An element may not directly or indirectly own itself.
 * 
 * inv: not allOwnedElements()->includes(self)
**/