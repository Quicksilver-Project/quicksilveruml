/**~UML Diagram Interchange~
 * A_UMLDiagramElement_localStyle_styledElement [Association]
 * 
 * Owned Ends
 * 
 *  styledElement : UMLDiagramElement [0..*]{redefines A_sharedStyle_styledElement::styledElement}
 * (opposite UMLDiagramElement::localStyle)
**/
/**
 * A_UMLDiagramElement_modelElement_umlDiagramElement [Association]
 * 
 * Owned Ends
 * 
 *  umlDiagramElement : UMLDiagramElement [0..*]{subsets
 * A_modelElement_diagramElement::diagramElement} (opposite UMLDiagramElement::modelElement)
**/
/**
 * A_UMLDiagramElement_ownedElement_owningElement [Association]
 * 
 * Member Ends
 * 
 *  UMLDiagramElement::ownedElement
 *  UMLDiagramElement::owningElement
**/
/**
 * A_UMLDiagramElement_sharedStyle_styledElement [Association]
 * 
 * Owned Ends
 * 
 *  styledElement : UMLDiagramElement [0..*]{redefines A_sharedStyle_styledElement::styledElement}
 * (opposite UMLDiagramElement::sharedStyle)
**/