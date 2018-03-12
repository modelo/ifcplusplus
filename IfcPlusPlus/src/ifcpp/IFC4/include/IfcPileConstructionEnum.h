/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPileConstructionEnum = ENUMERATION OF	(CAST_IN_PLACE	,COMPOSITE	,PRECAST_CONCRETE	,PREFAB_STEEL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcPileConstructionEnum : virtual public BuildingObject
{
public:
	enum IfcPileConstructionEnumEnum
	{
		ENUM_CAST_IN_PLACE,
		ENUM_COMPOSITE,
		ENUM_PRECAST_CONCRETE,
		ENUM_PREFAB_STEEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPileConstructionEnum();
	IfcPileConstructionEnum( IfcPileConstructionEnumEnum e ) { m_enum = e; }
	~IfcPileConstructionEnum();
	virtual const char* className() const { return "IfcPileConstructionEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPileConstructionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPileConstructionEnumEnum m_enum;
};

