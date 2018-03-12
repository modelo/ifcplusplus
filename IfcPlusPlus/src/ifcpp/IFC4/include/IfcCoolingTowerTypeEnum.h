/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCoolingTowerTypeEnum = ENUMERATION OF	(NATURALDRAFT	,MECHANICALINDUCEDDRAFT	,MECHANICALFORCEDDRAFT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCoolingTowerTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCoolingTowerTypeEnumEnum
	{
		ENUM_NATURALDRAFT,
		ENUM_MECHANICALINDUCEDDRAFT,
		ENUM_MECHANICALFORCEDDRAFT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCoolingTowerTypeEnum();
	IfcCoolingTowerTypeEnum( IfcCoolingTowerTypeEnumEnum e ) { m_enum = e; }
	~IfcCoolingTowerTypeEnum();
	virtual const char* className() const { return "IfcCoolingTowerTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCoolingTowerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCoolingTowerTypeEnumEnum m_enum;
};

