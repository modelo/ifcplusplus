/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcDoorTypeOperationEnum = ENUMERATION OF	(SINGLE_SWING_LEFT	,SINGLE_SWING_RIGHT	,DOUBLE_DOOR_SINGLE_SWING	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT	,DOUBLE_SWING_LEFT	,DOUBLE_SWING_RIGHT	,DOUBLE_DOOR_DOUBLE_SWING	,SLIDING_TO_LEFT	,SLIDING_TO_RIGHT	,DOUBLE_DOOR_SLIDING	,FOLDING_TO_LEFT	,FOLDING_TO_RIGHT	,DOUBLE_DOOR_FOLDING	,REVOLVING	,ROLLINGUP	,SWING_FIXED_LEFT	,SWING_FIXED_RIGHT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcDoorTypeOperationEnum : virtual public BuildingObject
{
public:
	enum IfcDoorTypeOperationEnumEnum
	{
		ENUM_SINGLE_SWING_LEFT,
		ENUM_SINGLE_SWING_RIGHT,
		ENUM_DOUBLE_DOOR_SINGLE_SWING,
		ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT,
		ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT,
		ENUM_DOUBLE_SWING_LEFT,
		ENUM_DOUBLE_SWING_RIGHT,
		ENUM_DOUBLE_DOOR_DOUBLE_SWING,
		ENUM_SLIDING_TO_LEFT,
		ENUM_SLIDING_TO_RIGHT,
		ENUM_DOUBLE_DOOR_SLIDING,
		ENUM_FOLDING_TO_LEFT,
		ENUM_FOLDING_TO_RIGHT,
		ENUM_DOUBLE_DOOR_FOLDING,
		ENUM_REVOLVING,
		ENUM_ROLLINGUP,
		ENUM_SWING_FIXED_LEFT,
		ENUM_SWING_FIXED_RIGHT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDoorTypeOperationEnum();
	IfcDoorTypeOperationEnum( IfcDoorTypeOperationEnumEnum e ) { m_enum = e; }
	~IfcDoorTypeOperationEnum();
	virtual const char* className() const { return "IfcDoorTypeOperationEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDoorTypeOperationEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcDoorTypeOperationEnumEnum m_enum;
};

