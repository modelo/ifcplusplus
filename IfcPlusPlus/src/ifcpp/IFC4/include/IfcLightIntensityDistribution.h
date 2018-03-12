/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcLightDistributionDataSourceSelect.h"
class IFCQUERY_EXPORT IfcLightDistributionCurveEnum;
class IFCQUERY_EXPORT IfcLightDistributionData;
//ENTITY
class IFCQUERY_EXPORT IfcLightIntensityDistribution : virtual public IfcLightDistributionDataSourceSelect, public BuildingEntity
{ 
public:
	IfcLightIntensityDistribution();
	IfcLightIntensityDistribution( int id );
	~IfcLightIntensityDistribution();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcLightIntensityDistribution"; }
	virtual const std::wstring toString() const;


	// IfcLightIntensityDistribution -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLightDistributionCurveEnum>			m_LightDistributionCurve;
	std::vector<shared_ptr<IfcLightDistributionData> >	m_DistributionData;
};

