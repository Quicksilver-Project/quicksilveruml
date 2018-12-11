/**~structured classifier~
 * ConnectableElement [Abstract Class]
 * 
 * Description
 * 
 * ConnectableElement is an abstract metaclass representing a set of instances that play roles of a StructuredClassifier.
 * ConnectableElements may be joined by attached Connectors and specify configurations of linked instances to be
 * created within an instance of the containing StructuredClassifier.
 * 
 * Diagrams
 * 
 * Structured Classifiers, Collaborations, Activities, Lifelines, Features, Properties
 * 
 * Generalizations
 * 
 * TypedElement, ParameterableElement
 * 
 * Specializations
 * 
 * Variable, Parameter, Property
 * 
 * Association Ends
 * 
 *  /end : ConnectorEnd [0..*]{} (opposite ConnectorEnd::role)
 * 
 * A set of ConnectorEnds that attach to this ConnectableElement.
 * 
 *  templateParameter : ConnectableElementTemplateParameter [0..1]{redefines
 * ParameterableElement::templateParameter} (opposite
 * ConnectableElementTemplateParameter::parameteredElement)
 * 
 * The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 * 
 * Operations
 * 
 *  end() : ConnectorEnd [0..*]
 * 
 * Derivation for ConnectableElement::/end : ConnectorEnd
 * body: ConnectorEnd.allInstances()->select(role = self)
**/