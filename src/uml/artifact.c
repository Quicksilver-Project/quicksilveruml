/**~deployment~
 * Artifact [Class]
 * 
 * Description
 * 
 * An artifact is the specification of a physical piece of information that is used or produced by a software development
 * process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and
 * binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail
 * message. An artifact is the source of a deployment to a node.
 * 
 * Diagrams
 * 
 * Deployments, Artifacts
 * 
 * Generalizations
 * 
 * Classifier, DeployedArtifact
 * 
 * Specializations
 * 
 * DeploymentSpecification
 * 
 * Attributes
 * 
 *  fileName : String [0..1]
 * 
 * A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal
 * resource locator.
 * 
 * Association Ends
 * 
 *  ♦ manifestation : Manifestation [0..*]{subsets Element::ownedElement, subsets
 * NamedElement::clientDependency} (opposite A_manifestation_artifact::artifact)
 * 
 * The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the
 * construction (or generation) of the artifact.
 * 
 *  ♦ nestedArtifact : Artifact [0..*]{subsets Namespace::ownedMember} (opposite
 * A_nestedArtifact_artifact::artifact)
 * 
 * The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the
 * ownedMember association from Namespace to NamedElement.
 * 
 *  ♦ ownedAttribute : Property [0..*]{ordered, subsets Classifier::attribute, subsets Namespace::ownedMember}
 * (opposite A_ownedAttribute_artifact::artifact)
 * 
 * The attributes or association ends defined for the Artifact. The association is a specialization of the
 * ownedMember association.
 * 
 *  ♦ ownedOperation : Operation [0..*]{ordered, subsets Classifier::feature, subsets
 * A_redefinitionContext_redefinableElement::redefinableElement, subsets Namespace::ownedMember}
 * (opposite A_ownedOperation_artifact::artifact)
 * 
 * The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
**/