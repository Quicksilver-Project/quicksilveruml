/**~common structure~
 * TemplateableElement [Abstract Class]
 * 
 * Description
 * 
 * A TemplateableElement is an Element that can optionally be defined as a template and bound to other templates.
 * 
 * Diagrams
 * 
 * Template Bindings, Templates, Expressions, Packages, Classifiers, Classifier Templates, Operations
 * 
 * Generalizations
 * 
 * Element
 * 
 * Specializations
 * 
 * StringExpression, Package, Classifier, Operation
 * 
 * Association Ends
 * 
 *  ♦ ownedTemplateSignature : TemplateSignature [0..1]{subsets Element::ownedElement} (opposite
 * TemplateSignature::template)
 * 
 * The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a
 * TemplateableElement has a TemplateSignature, then it is a template.
 * 
 *  ♦ templateBinding : TemplateBinding [0..*]{subsets Element::ownedElement, subsets
 * A_source_directedRelationship::directedRelationship} (opposite TemplateBinding::boundElement)
 * 
 * The optional TemplateBindings from this TemplateableElement to one or more templates.
 * 
 * Operations
 * 
 *  isTemplate() : Boolean
 * 
 * The query isTemplate() returns whether this TemplateableElement is actually a template.
 * 
 * body: ownedTemplateSignature <> null
 * 
 *  parameterableElements() : ParameterableElement [0..*]
 * 
 * The query parameterableElements() returns the set of ParameterableElements that may be used as the
 * parameteredElements for a TemplateParameter of this TemplateableElement. By default, this set includes all
 * the ownedElements. Subclasses may override this operation if they choose to restrict the set of
 * ParameterableElements.
 * 
 * body: self.allOwnedElements()-
 * >select(oclIsKindOf(ParameterableElement)).oclAsType(ParameterableElement)->asSet()
**/