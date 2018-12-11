/**~structured classifier~
 * A_superClass_class [Association]
 * 
 * Diagrams
 * 
 * Classes
 * 
 * Owned Ends
 * 
 *  class : Class [0..*]{subsets A_general_classifier::classifier} (opposite Class::superClass)
**/
/**
 * A_ownedReception_class [Association]
 * 
 * Diagrams
 * 
 * Classes
 * 
 * Owned Ends
 * 
 *  class : Class [0..1]{subsets Feature::featuringClassifier, subsets NamedElement::namespace} (opposite
 * Class::ownedReception)
**/
/**
 * A_ownedOperation_class [Association]
 * 
 * Diagrams
 * 
 * Classes, Operations
 * 
 * Member Ends
 * 
 *  Class::ownedOperation
 * 
 *  Operation::class
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
 * 
 *  Property::class
**/
/**
 * A_nestedClassifier_nestingClass [Association]
 * 
 * Diagrams
 * 
 * Classes
 * 
 * Owned Ends
 * 
 *  nestingClass : Class [0..1]{subsets NamedElement::namespace, subsets
 * RedefinableElement::redefinitionContext} (opposite Class::nestedClassifier)
**/
/**
 * A_extension_metaclass [Association]
 * 
 * Diagrams
 * 
 * Classes, Profiles
 * 
 * Member Ends
 * 
 *  Class::extension
 * 
 *  Extension::metaclass
**/