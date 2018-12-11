/**~action~
 * ExpansionNode [Class]
 * 
 * Description
 * 
 * An ExpansionNode is an ObjectNode used to indicate a collection input or output for an ExpansionRegion. A collection
 * input of an ExpansionRegion contains a collection that is broken into its individual elements inside the region, whose
 * content is executed once per element. A collection output of an ExpansionRegion combines individual elements
 * produced by the execution of the region into a collection for use outside the region.
 * 
 * Diagrams
 * 
 * Expansion Regions
 * 
 * Generalizations
 * 
 * ObjectNode
 * 
 * Association Ends
 * 
 *  regionAsInput : ExpansionRegion [0..1] (opposite ExpansionRegion::inputElement)
 * 
 * The ExpansionRegion for which the ExpansionNode is an input.
 * 
 *  regionAsOutput : ExpansionRegion [0..1] (opposite ExpansionRegion::outputElement)
 * 
 * The ExpansionRegion for which the ExpansionNode is an output.
 * 
 * Constraints
 * 
 *  region_as_input_or_output
 * 
 * One of regionAsInput or regionAsOutput must be non-empty, but not both.
 * 
 * inv: regionAsInput->notEmpty() xor regionAsOutput->notEmpty()
**/