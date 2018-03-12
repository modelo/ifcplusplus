/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcReflectanceMethodEnum = ENUMERATION OF	(BLINN	,FLAT	,GLASS	,MATT	,METAL	,MIRROR	,PHONG	,PLASTIC	,STRAUSS	,NOTDEFINED);
class IFCQUERY_EXPORT IfcReflectanceMethodEnum : virtual public BuildingObject
{
public:
	enum IfcReflectanceMethodEnumEnum
	{
		ENUM_BLINN,
		ENUM_FLAT,
		ENUM_GLASS,
		ENUM_MATT,
		ENUM_METAL,
		ENUM_MIRROR,
		ENUM_PHONG,
		ENUM_PLASTIC,
		ENUM_STRAUSS,
		ENUM_NOTDEFINED
	};

	IfcReflectanceMethodEnum();
	IfcReflectanceMethodEnum( IfcReflectanceMethodEnumEnum e ) { m_enum = e; }
	~IfcReflectanceMethodEnum();
	virtual const char* className() const { return "IfcReflectanceMethodEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcReflectanceMethodEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcReflectanceMethodEnumEnum m_enum;
};

