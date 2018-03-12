/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcLogicalOperatorEnum = ENUMERATION OF	(LOGICALAND	,LOGICALOR	,LOGICALXOR	,LOGICALNOTAND	,LOGICALNOTOR);
class IFCQUERY_EXPORT IfcLogicalOperatorEnum : virtual public BuildingObject
{
public:
	enum IfcLogicalOperatorEnumEnum
	{
		ENUM_LOGICALAND,
		ENUM_LOGICALOR,
		ENUM_LOGICALXOR,
		ENUM_LOGICALNOTAND,
		ENUM_LOGICALNOTOR
	};

	IfcLogicalOperatorEnum();
	IfcLogicalOperatorEnum( IfcLogicalOperatorEnumEnum e ) { m_enum = e; }
	~IfcLogicalOperatorEnum();
	virtual const char* className() const { return "IfcLogicalOperatorEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLogicalOperatorEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcLogicalOperatorEnumEnum m_enum;
};

