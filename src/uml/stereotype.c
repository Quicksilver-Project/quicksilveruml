/**~package~
 * Stereotype [Class]
 * 
 * Description
 * 
 * A stereotype defines how an existing metaclass may be extended,
 * and enables the use of platform or domain specific
 * terminology or notation in place of, or in addition to,
 * the ones used for the extended metaclass.
 * 
 * Diagrams
 * 
 * Profiles
 * 
 * Generalizations
 * 
 * Class
 * 
 * Association Ends
 * 
 *  ♦ icon : Image [0..*]
 * {subsets Element::ownedElement}
 * (opposite A_icon_stereotype::stereotype)
 * 
 * Stereotype can change the graphical appearance of the
 * extended model element by using attached icons.
 * When this association is not null,
 * it references the location of the icon content
 * to be displayed within diagrams
 * presenting the extended model elements.
 * 
 *  /profile : Profile [1..1]{}
 * (opposite A_profile_stereotype::stereotype)
 * 
 * The profile that directly or indirectly
 * contains this stereotype.
 * 
 * Operations
 * 
 *  containingProfile() : Profile
 * 
 * The query containingProfile returns the closest profile
 * directly or indirectly containing this stereotype.
 * 
 * body: self.namespace.oclAsType(Package).containingProfile()
 * 
 *  profile() : Profile
 * 
 * A stereotype must be contained,
 * directly or indirectly, in a profile.
 * 
 * body: self.containingProfile()
 * 
 * Constraints
 * 
 *  binaryAssociationsOnly
 * 
 * Stereotypes may only participate in binary associations.
 * 
 * inv: ownedAttribute.association->forAll(memberEnd->size()=2)
 * 
 *  generalize
 * 
 * A Stereotype may only generalize
 * or specialize another Stereotype.
 * 
 * inv: allParents()->forAll(oclIsKindOf(Stereotype))
 * and Classifier.allInstances()->forAll(c | c.allParents()->exists(oclIsKindOf(Stereotype))
 * implies c.oclIsKindOf(Stereotype))
 * 
 *  name_not_clash
 * 
 * Stereotype names should not clash with keyword names
 * for the extended model element.
 * 
 * Cannot be expressed in OCL
 * 
 *  associationEndOwnership
 * 
 * Where a stereotype’s property is an association end
 * for an association other than a kind of extension, and the
 * 
 * other end is not a stereotype, the other end
 * must be owned by the association itself.
 * 
 * inv: ownedAttribute
 * ->select(association->notEmpty() and not association.oclIsKindOf(Extension) and not
 * type.oclIsKindOf(Stereotype))
 * ->forAll(opposite.owner = association)
 * 
 *  base_property_upper_bound
 * 
 * The upper bound of base-properties is exactly 1.
 * 
 * Cannot be expressed in OCL
 * 
 *  base_property_multiplicity_single_extension
 * 
 * If a Stereotype extends only one metaclass,
 * the multiplicity of the corresponding base-property shall be 1..1.
 * 
 * Cannot be expressed in OCL
 * 
 *  base_property_multiplicity_multiple_extension
 * 
 * If a Stereotype extends more than one metaclass,
 * the multiplicity of the corresponding base-properties shall be [0..1].
 * At any point in time, only one of these base-properties
 * can contain a metaclass instance during runtime.
 * 
 * Cannot be expressed in OCL
**/