/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcAbsorbedDoseMeasure.h"
#include "ifcpp/IFC4/include/IfcAccelerationMeasure.h"
#include "ifcpp/IFC4/include/IfcAngularVelocityMeasure.h"
#include "ifcpp/IFC4/include/IfcAreaDensityMeasure.h"
#include "ifcpp/IFC4/include/IfcCompoundPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcCurvatureMeasure.h"
#include "ifcpp/IFC4/include/IfcDoseEquivalentMeasure.h"
#include "ifcpp/IFC4/include/IfcDynamicViscosityMeasure.h"
#include "ifcpp/IFC4/include/IfcElectricCapacitanceMeasure.h"
#include "ifcpp/IFC4/include/IfcElectricChargeMeasure.h"
#include "ifcpp/IFC4/include/IfcElectricConductanceMeasure.h"
#include "ifcpp/IFC4/include/IfcElectricResistanceMeasure.h"
#include "ifcpp/IFC4/include/IfcElectricVoltageMeasure.h"
#include "ifcpp/IFC4/include/IfcEnergyMeasure.h"
#include "ifcpp/IFC4/include/IfcForceMeasure.h"
#include "ifcpp/IFC4/include/IfcFrequencyMeasure.h"
#include "ifcpp/IFC4/include/IfcHeatFluxDensityMeasure.h"
#include "ifcpp/IFC4/include/IfcHeatingValueMeasure.h"
#include "ifcpp/IFC4/include/IfcIlluminanceMeasure.h"
#include "ifcpp/IFC4/include/IfcInductanceMeasure.h"
#include "ifcpp/IFC4/include/IfcIntegerCountRateMeasure.h"
#include "ifcpp/IFC4/include/IfcIonConcentrationMeasure.h"
#include "ifcpp/IFC4/include/IfcIsothermalMoistureCapacityMeasure.h"
#include "ifcpp/IFC4/include/IfcKinematicViscosityMeasure.h"
#include "ifcpp/IFC4/include/IfcLinearForceMeasure.h"
#include "ifcpp/IFC4/include/IfcLinearMomentMeasure.h"
#include "ifcpp/IFC4/include/IfcLinearStiffnessMeasure.h"
#include "ifcpp/IFC4/include/IfcLinearVelocityMeasure.h"
#include "ifcpp/IFC4/include/IfcLuminousFluxMeasure.h"
#include "ifcpp/IFC4/include/IfcLuminousIntensityDistributionMeasure.h"
#include "ifcpp/IFC4/include/IfcMagneticFluxDensityMeasure.h"
#include "ifcpp/IFC4/include/IfcMagneticFluxMeasure.h"
#include "ifcpp/IFC4/include/IfcMassDensityMeasure.h"
#include "ifcpp/IFC4/include/IfcMassFlowRateMeasure.h"
#include "ifcpp/IFC4/include/IfcMassPerLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfElasticityMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfLinearSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfRotationalSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcMoistureDiffusivityMeasure.h"
#include "ifcpp/IFC4/include/IfcMolecularWeightMeasure.h"
#include "ifcpp/IFC4/include/IfcMomentOfInertiaMeasure.h"
#include "ifcpp/IFC4/include/IfcMonetaryMeasure.h"
#include "ifcpp/IFC4/include/IfcPHMeasure.h"
#include "ifcpp/IFC4/include/IfcPlanarForceMeasure.h"
#include "ifcpp/IFC4/include/IfcPowerMeasure.h"
#include "ifcpp/IFC4/include/IfcPressureMeasure.h"
#include "ifcpp/IFC4/include/IfcRadioActivityMeasure.h"
#include "ifcpp/IFC4/include/IfcRotationalFrequencyMeasure.h"
#include "ifcpp/IFC4/include/IfcRotationalMassMeasure.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessMeasure.h"
#include "ifcpp/IFC4/include/IfcSectionModulusMeasure.h"
#include "ifcpp/IFC4/include/IfcSectionalAreaIntegralMeasure.h"
#include "ifcpp/IFC4/include/IfcShearModulusMeasure.h"
#include "ifcpp/IFC4/include/IfcSoundPowerLevelMeasure.h"
#include "ifcpp/IFC4/include/IfcSoundPowerMeasure.h"
#include "ifcpp/IFC4/include/IfcSoundPressureLevelMeasure.h"
#include "ifcpp/IFC4/include/IfcSoundPressureMeasure.h"
#include "ifcpp/IFC4/include/IfcSpecificHeatCapacityMeasure.h"
#include "ifcpp/IFC4/include/IfcTemperatureGradientMeasure.h"
#include "ifcpp/IFC4/include/IfcTemperatureRateOfChangeMeasure.h"
#include "ifcpp/IFC4/include/IfcThermalAdmittanceMeasure.h"
#include "ifcpp/IFC4/include/IfcThermalConductivityMeasure.h"
#include "ifcpp/IFC4/include/IfcThermalExpansionCoefficientMeasure.h"
#include "ifcpp/IFC4/include/IfcThermalResistanceMeasure.h"
#include "ifcpp/IFC4/include/IfcThermalTransmittanceMeasure.h"
#include "ifcpp/IFC4/include/IfcTorqueMeasure.h"
#include "ifcpp/IFC4/include/IfcVaporPermeabilityMeasure.h"
#include "ifcpp/IFC4/include/IfcVolumetricFlowRateMeasure.h"
#include "ifcpp/IFC4/include/IfcWarpingConstantMeasure.h"
#include "ifcpp/IFC4/include/IfcWarpingMomentMeasure.h"
#include "ifcpp/IFC4/include/IfcValue.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"

// TYPE IfcDerivedMeasureValue = SELECT	(IfcAbsorbedDoseMeasure	,IfcAccelerationMeasure	,IfcAngularVelocityMeasure	,IfcAreaDensityMeasure	,IfcCompoundPlaneAngleMeasure	,IfcCurvatureMeasure	,IfcDoseEquivalentMeasure	,IfcDynamicViscosityMeasure	,IfcElectricCapacitanceMeasure	,IfcElectricChargeMeasure	,IfcElectricConductanceMeasure	,IfcElectricResistanceMeasure	,IfcElectricVoltageMeasure	,IfcEnergyMeasure	,IfcForceMeasure	,IfcFrequencyMeasure	,IfcHeatFluxDensityMeasure	,IfcHeatingValueMeasure	,IfcIlluminanceMeasure	,IfcInductanceMeasure	,IfcIntegerCountRateMeasure	,IfcIonConcentrationMeasure	,IfcIsothermalMoistureCapacityMeasure	,IfcKinematicViscosityMeasure	,IfcLinearForceMeasure	,IfcLinearMomentMeasure	,IfcLinearStiffnessMeasure	,IfcLinearVelocityMeasure	,IfcLuminousFluxMeasure	,IfcLuminousIntensityDistributionMeasure	,IfcMagneticFluxDensityMeasure	,IfcMagneticFluxMeasure	,IfcMassDensityMeasure	,IfcMassFlowRateMeasure	,IfcMassPerLengthMeasure	,IfcModulusOfElasticityMeasure	,IfcModulusOfLinearSubgradeReactionMeasure	,IfcModulusOfRotationalSubgradeReactionMeasure	,IfcModulusOfSubgradeReactionMeasure	,IfcMoistureDiffusivityMeasure	,IfcMolecularWeightMeasure	,IfcMomentOfInertiaMeasure	,IfcMonetaryMeasure	,IfcPHMeasure	,IfcPlanarForceMeasure	,IfcPowerMeasure	,IfcPressureMeasure	,IfcRadioActivityMeasure	,IfcRotationalFrequencyMeasure	,IfcRotationalMassMeasure	,IfcRotationalStiffnessMeasure	,IfcSectionModulusMeasure	,IfcSectionalAreaIntegralMeasure	,IfcShearModulusMeasure	,IfcSoundPowerLevelMeasure	,IfcSoundPowerMeasure	,IfcSoundPressureLevelMeasure	,IfcSoundPressureMeasure	,IfcSpecificHeatCapacityMeasure	,IfcTemperatureGradientMeasure	,IfcTemperatureRateOfChangeMeasure	,IfcThermalAdmittanceMeasure	,IfcThermalConductivityMeasure	,IfcThermalExpansionCoefficientMeasure	,IfcThermalResistanceMeasure	,IfcThermalTransmittanceMeasure	,IfcTorqueMeasure	,IfcVaporPermeabilityMeasure	,IfcVolumetricFlowRateMeasure	,IfcWarpingConstantMeasure	,IfcWarpingMomentMeasure);
shared_ptr<IfcDerivedMeasureValue> IfcDerivedMeasureValue::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcDerivedMeasureValue>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcDerivedMeasureValue>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcDerivedMeasureValue>();
	}
	shared_ptr<IfcDerivedMeasureValue> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
