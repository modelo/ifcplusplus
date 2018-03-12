/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTransformerTypeEnum = ENUMERATION OF	(CURRENT	,FREQUENCY	,INVERTER	,RECTIFIER	,VOLTAGE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTransformerTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTransformerTypeEnumEnum
	{
		ENUM_CURRENT,
		ENUM_FREQUENCY,
		ENUM_INVERTER,
		ENUM_RECTIFIER,
		ENUM_VOLTAGE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTransformerTypeEnum();
	IfcTransformerTypeEnum( IfcTransformerTypeEnumEnum e ) { m_enum = e; }
	~IfcTransformerTypeEnum();
	virtual const char* className() const { return "IfcTransformerTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTransformerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTransformerTypeEnumEnum m_enum;
};

