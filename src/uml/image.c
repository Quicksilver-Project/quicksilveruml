/**~package~
 * Image [Class]
 * 
 * Description
 * 
 * Physical definition of a graphical image.
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * Element
 * 
 * Attributes
 * 
 *  content : String [0..1]
 * 
 * This contains the serialization of the image according to the format. The value could represent a bitmap, image
 * such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is
 * XML based).
 * 
 *  format : String [0..1]
 * 
 * This indicates the format of the content, which is how the string content should be interpreted. The following
 * values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved.
 * This option can be used as an alternative to express the reserved values above, for example "SVG" could
 * instead be expressed as "MIME: image/svg+xml".
 * 
 *  location : String [0..1]
 * 
 * This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the
 * stereotype.
**/