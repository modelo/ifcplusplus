/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTextPath = ENUMERATION OF	(LEFT	,RIGHT	,UP	,DOWN);
class IFCQUERY_EXPORT IfcTextPath : virtual public BuildingObject
{
public:
	enum IfcTextPathEnum
	{
		ENUM_LEFT,
		ENUM_RIGHT,
		ENUM_UP,
		ENUM_DOWN
	};

	IfcTextPath();
	IfcTextPath( IfcTextPathEnum e ) { m_enum = e; }
	~IfcTextPath();
	virtual const char* className() const { return "IfcTextPath"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTextPath> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTextPathEnum m_enum;
};

