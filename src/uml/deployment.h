#include "dependency.h"

/**~deployment~
 * A_configuration_deployment [Association]
 * 
 * Deployments
 * 
 * Member Ends
 * 
 *  Deployment::configuration
 *  DeploymentSpecification::deployment
 **/
/**
 * A_deployedArtifact_deploymentForArtifact [Association]
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Owned Ends
 * 
 *  deploymentForArtifact : Deployment [0..*]{subsets A_supplier_supplierDependency::supplierDependency}
 * (opposite Deployment::deployedArtifact)
**/
/**
 * A_deployment_location [Association]
 * 
 * Diagrams
 * 
 * Deployments
 * 
 * Member Ends
 * 
 *  DeploymentTarget::deployment
 *  Deployment::location
**/