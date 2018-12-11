/**~classification~
 * A_classifier_instanceSpecification [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Specializations
 * 
 * A_classifier_enumerationLiteral
 * 
 * Owned Ends
 * 
 *  instanceSpecification : InstanceSpecification [0..*] (opposite InstanceSpecification::classifier)
**/
/**
 * A_slot_owningInstance [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Member Ends
 * 
 *  InstanceSpecification::slot
 * 
 *  Slot::owningInstance
**/
/**
 * A_specification_owningInstanceSpec [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Owned Ends
 * 
 *  owningInstanceSpec : InstanceSpecification [0..1]{subsets Element::owner} (opposite
 * InstanceSpecification::specification)
**/
/**
 * A_classifier_instanceSpecification [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Specializations
 * 
 * A_classifier_enumerationLiteral
 * 
 * Owned Ends
 * 
 *  instanceSpecification : InstanceSpecification [0..*] (opposite InstanceSpecification::classifier)
**/
/**
 * A_specification_owningInstanceSpec [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Owned Ends
 * 
 *  owningInstanceSpec : InstanceSpecification [0..1]{subsets Element::owner} (opposite
 * InstanceSpecification::specification)
**/
/**
 * A_slot_owningInstance [Association]
 * 
 * Diagrams
 * 
 * Instances
 * 
 * Member Ends
 * 
 *  InstanceSpecification::slot
 * 
 *  Slot::owningInstance
**/