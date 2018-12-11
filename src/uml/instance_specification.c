/**~classification~
 * InstanceSpecification [Class]
 * 
 * Description
 * 
 * An InstanceSpecification is a model element that represents an instance in a modeled system. An InstanceSpecification
 * can act as a DeploymentTarget in a Deployment relationship, in the case that it represents an instance of a Node. It can
 * also act as a DeployedArtifact, if it represents an instance of an Artifact.
 * 
 * Diagrams
 * 
 * Instances, DataTypes, Deployments
 * 
 * Generalizations
 * 
 * DeploymentTarget, PackageableElement, DeployedArtifact
 * 
 * Specializations
 * 
 * EnumerationLiteral
 * 
 * Association Ends
 * 
 *  classifier : Classifier [0..*] (opposite A_classifier_instanceSpecification::instanceSpecification)
 * 
 * The Classifier or Classifiers of the represented instance. If multiple Classifiers are specified, the instance is
 * classified by all of them.
 * 
 *  ♦ slot : Slot [0..*]{subsets Element::ownedElement} (opposite Slot::owningInstance)
 * 
 * A Slot giving the value or values of a StructuralFeature of the instance. An InstanceSpecification can have one
 * Slot per StructuralFeature of its Classifiers, including inherited features. It is not necessary to model a Slot for
 * every StructuralFeature, in which case the InstanceSpecification is a partial description.
 * 
 *  ♦ specification : ValueSpecification [0..1]{subsets Element::ownedElement} (opposite
 * A_specification_owningInstanceSpec::owningInstanceSpec)
 * 
 * A specification of how to compute, derive, or construct the instance.
 * 
 * Constraints
 * 
 *  deployment_artifact
 * 
 * An InstanceSpecification can act as a DeployedArtifact if it represents an instance of an Artifact.
 * 
 * inv: deploymentForArtifact->notEmpty() implies classifier->exists(oclIsKindOf(Artifact))
 * 
 *  structural_feature
 * 
 * No more than one slot in an InstanceSpecification may have the same definingFeature.
 * 
 * inv: classifier->forAll(c | (c.allSlottableFeatures()->forAll(f | slot->select(s |
 * s.definingFeature = f)->size() <= 1)))
 * 
 *  defining_feature
 * 
 * The definingFeature of each slot is a StructuralFeature related to a classifier of the InstanceSpecification,
 * including direct attributes, inherited attributes, private attributes in generalizations, and memberEnds of
 * Associations, but excluding redefined StructuralFeatures.
 * 
 * inv: slot->forAll(s | classifier->exists (c | c.allSlottableFeatures()->includes
 * (s.definingFeature)))
 * 
 *  deployment_target
 * 
 * An InstanceSpecification can act as a DeploymentTarget if it represents an instance of a Node and functions as
 * a part in the internal structure of an encompassing Node.
 * 
 * inv: deployment->notEmpty() implies classifier->exists(node | node.oclIsKindOf(Node) and
 * Node.allInstances()->exists(n | n.part->exists(p | p.type = node)))
**/