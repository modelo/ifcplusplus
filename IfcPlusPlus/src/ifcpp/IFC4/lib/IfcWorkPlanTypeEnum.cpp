/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcWorkPlanTypeEnum.h"

// TYPE IfcWorkPlanTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
IfcWorkPlanTypeEnum::IfcWorkPlanTypeEnum() {}
IfcWorkPlanTypeEnum::~IfcWorkPlanTypeEnum() {}
shared_ptr<BuildingObject> IfcWorkPlanTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWorkPlanTypeEnum> copy_self( new IfcWorkPlanTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWorkPlanTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWORKPLANTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACTUAL:	stream << ".ACTUAL."; break;
		case ENUM_BASELINE:	stream << ".BASELINE."; break;
		case ENUM_PLANNED:	stream << ".PLANNED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWorkPlanTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ACTUAL:	return L"ACTUAL";
		case ENUM_BASELINE:	return L"BASELINE";
		case ENUM_PLANNED:	return L"PLANNED";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcWorkPlanTypeEnum> IfcWorkPlanTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWorkPlanTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWorkPlanTypeEnum>(); }
	shared_ptr<IfcWorkPlanTypeEnum> type_object( new IfcWorkPlanTypeEnum() );
	if( boost::iequals( arg, L".ACTUAL." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_ACTUAL;
	}
	else if( boost::iequals( arg, L".BASELINE." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_BASELINE;
	}
	else if( boost::iequals( arg, L".PLANNED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_PLANNED;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWorkPlanTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
