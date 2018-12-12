#include "connectable_element.h"
#include "deployment_target.h"
#include "structural_feature.h"
/**~classification~
 * A_opposite_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  property : Property [0..1] (opposite Property::opposite)
**/
/**
 * A_qualifier_associationEnd [Association]
 * 
 * Diagrams
 * 
 * Properties, Associations
 * 
 * Member Ends
 * 
 *  Property::qualifier
 *  Property::associationEnd
**/
/**
 * A_redefinedProperty_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 *  property : Property [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Property::redefinedProperty)
**/
/**
 * A_subsettedProperty_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  property : Property [0..*] (opposite Property::subsettedProperty)
**/
/**
 * A_ownedEnd_extension [Association]
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Owned Ends
 * 
 *  extension : Extension [1..1]{subsets Property::owningAssociation} (opposite Extension::ownedEnd)
**/
/**
 * A_ownedEnd_owningAssociation [Association]
 * 
 * Diagrams
 * 
 * Associations, Properties
 * 
 * Member Ends
 * 
 *  Association::ownedEnd
 *  Property::owningAssociation
**/
/**
 * A_ownedAttribute_class [Association]
 * 
 * Diagrams
 * 
 * Classes, Properties
 * 
 * Member Ends
 * 
 *  Class::ownedAttribute
 *  Property::class
**/
/**
 * A_memberEnd_association [Association]
 * 
 * Diagrams
 * 
 * Associations, Properties
 * 
 * Member Ends
 * 
 *  Association::memberEnd
 *  Property::association
**/
/**
 * A_ownedAttribute_interface [Association]
 * 
 * Diagrams
 * 
 * Interfaces, Properties
 * 
 * Member Ends
 * 
 *  Interface::ownedAttribute
 *  Property::interface
**/
/**
 * A_ownedAttribute_datatype [Association]
 * 
 * Diagrams
 * 
 * DataTypes, Properties
 * 
 * Member Ends
 * 
 *  DataType::ownedAttribute
 *  Property::datatype
**/
/**
 * A_subsettedProperty_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  property : Property [0..*] (opposite Property::subsettedProperty)
**/
/**
 * A_redefinedProperty_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  property : Property [0..*]{subsets A_redefinedElement_redefinableElement::redefinableElement} (opposite
 * Property::redefinedProperty)
**/
/**
 * A_qualifier_associationEnd [Association]
 * 
 * Diagrams
 * 
 * Properties, Associations
 * 
 * Member Ends
 * 
 *  Property::qualifier
 *  Property::associationEnd
**/
/**
 * A_opposite_property [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  property : Property [0..1] (opposite Property::opposite)
**/
/**
 * A_defaultValue_owningProperty [Association]
 * 
 * Diagrams
 * 
 * Properties
 * 
 * Owned Ends
 * 
 *  owningProperty : Property [0..1]{subsets Element::owner} (opposite Property::defaultValue)
**/