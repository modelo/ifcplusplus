/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcAirTerminalBoxTypeEnum.h"

// TYPE IfcAirTerminalBoxTypeEnum = ENUMERATION OF	(CONSTANTFLOW	,VARIABLEFLOWPRESSUREDEPENDANT	,VARIABLEFLOWPRESSUREINDEPENDANT	,USERDEFINED	,NOTDEFINED);
IfcAirTerminalBoxTypeEnum::IfcAirTerminalBoxTypeEnum() {}
IfcAirTerminalBoxTypeEnum::~IfcAirTerminalBoxTypeEnum() {}
shared_ptr<BuildingObject> IfcAirTerminalBoxTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAirTerminalBoxTypeEnum> copy_self( new IfcAirTerminalBoxTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAirTerminalBoxTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCAIRTERMINALBOXTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONSTANTFLOW:	stream << ".CONSTANTFLOW."; break;
		case ENUM_VARIABLEFLOWPRESSUREDEPENDANT:	stream << ".VARIABLEFLOWPRESSUREDEPENDANT."; break;
		case ENUM_VARIABLEFLOWPRESSUREINDEPENDANT:	stream << ".VARIABLEFLOWPRESSUREINDEPENDANT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAirTerminalBoxTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONSTANTFLOW:	return L"CONSTANTFLOW";
		case ENUM_VARIABLEFLOWPRESSUREDEPENDANT:	return L"VARIABLEFLOWPRESSUREDEPENDANT";
		case ENUM_VARIABLEFLOWPRESSUREINDEPENDANT:	return L"VARIABLEFLOWPRESSUREINDEPENDANT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAirTerminalBoxTypeEnum> IfcAirTerminalBoxTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAirTerminalBoxTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAirTerminalBoxTypeEnum>(); }
	shared_ptr<IfcAirTerminalBoxTypeEnum> type_object( new IfcAirTerminalBoxTypeEnum() );
	if( boost::iequals( arg, L".CONSTANTFLOW." ) )
	{
		type_object->m_enum = IfcAirTerminalBoxTypeEnum::ENUM_CONSTANTFLOW;
	}
	else if( boost::iequals( arg, L".VARIABLEFLOWPRESSUREDEPENDANT." ) )
	{
		type_object->m_enum = IfcAirTerminalBoxTypeEnum::ENUM_VARIABLEFLOWPRESSUREDEPENDANT;
	}
	else if( boost::iequals( arg, L".VARIABLEFLOWPRESSUREINDEPENDANT." ) )
	{
		type_object->m_enum = IfcAirTerminalBoxTypeEnum::ENUM_VARIABLEFLOWPRESSUREINDEPENDANT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAirTerminalBoxTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAirTerminalBoxTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
