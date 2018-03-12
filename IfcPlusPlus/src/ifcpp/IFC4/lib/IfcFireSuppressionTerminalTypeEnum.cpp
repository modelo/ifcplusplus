/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFireSuppressionTerminalTypeEnum.h"

// TYPE IfcFireSuppressionTerminalTypeEnum = ENUMERATION OF	(BREECHINGINLET	,FIREHYDRANT	,HOSEREEL	,SPRINKLER	,SPRINKLERDEFLECTOR	,USERDEFINED	,NOTDEFINED);
IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnum() {}
IfcFireSuppressionTerminalTypeEnum::~IfcFireSuppressionTerminalTypeEnum() {}
shared_ptr<BuildingObject> IfcFireSuppressionTerminalTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFireSuppressionTerminalTypeEnum> copy_self( new IfcFireSuppressionTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFireSuppressionTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFIRESUPPRESSIONTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BREECHINGINLET:	stream << ".BREECHINGINLET."; break;
		case ENUM_FIREHYDRANT:	stream << ".FIREHYDRANT."; break;
		case ENUM_HOSEREEL:	stream << ".HOSEREEL."; break;
		case ENUM_SPRINKLER:	stream << ".SPRINKLER."; break;
		case ENUM_SPRINKLERDEFLECTOR:	stream << ".SPRINKLERDEFLECTOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFireSuppressionTerminalTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BREECHINGINLET:	return L"BREECHINGINLET";
		case ENUM_FIREHYDRANT:	return L"FIREHYDRANT";
		case ENUM_HOSEREEL:	return L"HOSEREEL";
		case ENUM_SPRINKLER:	return L"SPRINKLER";
		case ENUM_SPRINKLERDEFLECTOR:	return L"SPRINKLERDEFLECTOR";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFireSuppressionTerminalTypeEnum> IfcFireSuppressionTerminalTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFireSuppressionTerminalTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFireSuppressionTerminalTypeEnum>(); }
	shared_ptr<IfcFireSuppressionTerminalTypeEnum> type_object( new IfcFireSuppressionTerminalTypeEnum() );
	if( boost::iequals( arg, L".BREECHINGINLET." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_BREECHINGINLET;
	}
	else if( boost::iequals( arg, L".FIREHYDRANT." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_FIREHYDRANT;
	}
	else if( boost::iequals( arg, L".HOSEREEL." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_HOSEREEL;
	}
	else if( boost::iequals( arg, L".SPRINKLER." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_SPRINKLER;
	}
	else if( boost::iequals( arg, L".SPRINKLERDEFLECTOR." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_SPRINKLERDEFLECTOR;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
