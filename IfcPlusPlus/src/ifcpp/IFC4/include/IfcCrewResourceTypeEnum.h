/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCrewResourceTypeEnum = ENUMERATION OF	(OFFICE	,SITE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCrewResourceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCrewResourceTypeEnumEnum
	{
		ENUM_OFFICE,
		ENUM_SITE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCrewResourceTypeEnum();
	IfcCrewResourceTypeEnum( IfcCrewResourceTypeEnumEnum e ) { m_enum = e; }
	~IfcCrewResourceTypeEnum();
	virtual const char* className() const { return "IfcCrewResourceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCrewResourceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCrewResourceTypeEnumEnum m_enum;
};

