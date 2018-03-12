/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAirToAirHeatRecoveryTypeEnum = ENUMERATION OF	(FIXEDPLATECOUNTERFLOWEXCHANGER	,FIXEDPLATECROSSFLOWEXCHANGER	,FIXEDPLATEPARALLELFLOWEXCHANGER	,ROTARYWHEEL	,RUNAROUNDCOILLOOP	,HEATPIPE	,TWINTOWERENTHALPYRECOVERYLOOPS	,THERMOSIPHONSEALEDTUBEHEATEXCHANGERS	,THERMOSIPHONCOILTYPEHEATEXCHANGERS	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcAirToAirHeatRecoveryTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAirToAirHeatRecoveryTypeEnumEnum
	{
		ENUM_FIXEDPLATECOUNTERFLOWEXCHANGER,
		ENUM_FIXEDPLATECROSSFLOWEXCHANGER,
		ENUM_FIXEDPLATEPARALLELFLOWEXCHANGER,
		ENUM_ROTARYWHEEL,
		ENUM_RUNAROUNDCOILLOOP,
		ENUM_HEATPIPE,
		ENUM_TWINTOWERENTHALPYRECOVERYLOOPS,
		ENUM_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS,
		ENUM_THERMOSIPHONCOILTYPEHEATEXCHANGERS,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAirToAirHeatRecoveryTypeEnum();
	IfcAirToAirHeatRecoveryTypeEnum( IfcAirToAirHeatRecoveryTypeEnumEnum e ) { m_enum = e; }
	~IfcAirToAirHeatRecoveryTypeEnum();
	virtual const char* className() const { return "IfcAirToAirHeatRecoveryTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAirToAirHeatRecoveryTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAirToAirHeatRecoveryTypeEnumEnum m_enum;
};

