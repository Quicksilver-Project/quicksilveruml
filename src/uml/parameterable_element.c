/**~common structure~
 * ParameterableElement [Abstract Class]
 * 
 * Description
 * 
 * A ParameterableElement is an Element that can be exposed as a formal TemplateParameter for a template, or specified
 * as an actual parameter in a binding of a template.
 * 
 * Diagrams
 * 
 * Template Bindings, Templates, Namespaces, Structured Classifiers, Properties, Operations
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * PackageableElement, ConnectableElement, Operation
 * 
 * Association Ends
 * 
 *  owningTemplateParameter : TemplateParameter [0..1]{subsets ParameterableElement::templateParameter,
 * subsets Element::owner} (opposite TemplateParameter::ownedParameteredElement)
 * 
 * The formal TemplateParameter that owns this ParameterableElement.
 * 
 *  templateParameter : TemplateParameter [0..1] (opposite TemplateParameter::parameteredElement)
 * 
 * The TemplateParameter that exposes this ParameterableElement as a formal parameter.
 * 
 * Operations
 * 
 *  isCompatibleWith(p : ParameterableElement) : Boolean
 * 
 * The query isCompatibleWith() determines if this ParameterableElement is compatible with the specified
 * ParameterableElement. By default, this ParameterableElement is compatible with another
 * ParameterableElement p if the kind of this ParameterableElement is the same as or a subtype of the kind of p.
 * Subclasses of ParameterableElement should override this operation to specify different compatibility
 * constraints.
 * 
 * body: self.oclIsKindOf(p.oclType())
 * 
 *  isTemplateParameter() : Boolean
 * 
 * The query isTemplateParameter() determines if this ParameterableElement is exposed as a formal
 * TemplateParameter.
 * 
 * body: templateParameter->notEmpty()
**/