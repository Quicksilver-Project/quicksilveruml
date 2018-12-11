/**~common structure~
 * TemplateParameter [Class]
 * 
 * Description
 * 
 * A TemplateParameter exposes a ParameterableElement as a formal parameter of a template.
 * 
 * Diagrams
 * 
 * Template Bindings, Templates, Structured Classifiers, Classifier Templates, Operations
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * ConnectableElementTemplateParameter, ClassifierTemplateParameter, OperationTemplateParameter
 * 
 * Association Ends
 * 
 *  default : ParameterableElement [0..1] (opposite A_default_templateParameter::templateParameter)
 * 
 * The ParameterableElement that is the default for this formal TemplateParameter.
 * 
 *  ♦ ownedDefault : ParameterableElement [0..1]{subsets Element::ownedElement, subsets
 * TemplateParameter::default} (opposite A_ownedDefault_templateParameter::templateParameter)
 * 
 * The ParameterableElement that is owned by this TemplateParameter for the purpose of providing a default.
 * 
 *  ♦ ownedParameteredElement : ParameterableElement [0..1]{subsets Element::ownedElement, subsets
 * TemplateParameter::parameteredElement} (opposite ParameterableElement::owningTemplateParameter)
 * 
 * The ParameterableElement that is owned by this TemplateParameter for the purpose of exposing it as the
 * parameteredElement.
 * 
 *  parameteredElement : ParameterableElement [1..1] (opposite ParameterableElement::templateParameter)
 * 
 * The ParameterableElement exposed by this TemplateParameter.
 * 
 *  signature : TemplateSignature [1..1]{subsets A_parameter_templateSignature::templateSignature, subsets
 * Element::owner} (opposite TemplateSignature::ownedParameter)
 * 
 * The TemplateSignature that owns this TemplateParameter.
 * 
 * Constraints
 * 
 *  must_be_compatible
 * 
 * The default must be compatible with the formal TemplateParameter.
 * 
 * inv: default <> null implies default.isCompatibleWith(parameteredElement)
**/