/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcStackTerminalTypeEnum.h"

// TYPE IfcStackTerminalTypeEnum = ENUMERATION OF	(BIRDCAGE	,COWL	,RAINWATERHOPPER	,USERDEFINED	,NOTDEFINED);
IfcStackTerminalTypeEnum::IfcStackTerminalTypeEnum() {}
IfcStackTerminalTypeEnum::~IfcStackTerminalTypeEnum() {}
shared_ptr<BuildingObject> IfcStackTerminalTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStackTerminalTypeEnum> copy_self( new IfcStackTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcStackTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTACKTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BIRDCAGE:	stream << ".BIRDCAGE."; break;
		case ENUM_COWL:	stream << ".COWL."; break;
		case ENUM_RAINWATERHOPPER:	stream << ".RAINWATERHOPPER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcStackTerminalTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BIRDCAGE:	return L"BIRDCAGE";
		case ENUM_COWL:	return L"COWL";
		case ENUM_RAINWATERHOPPER:	return L"RAINWATERHOPPER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcStackTerminalTypeEnum> IfcStackTerminalTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcStackTerminalTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcStackTerminalTypeEnum>(); }
	shared_ptr<IfcStackTerminalTypeEnum> type_object( new IfcStackTerminalTypeEnum() );
	if( boost::iequals( arg, L".BIRDCAGE." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_BIRDCAGE;
	}
	else if( boost::iequals( arg, L".COWL." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_COWL;
	}
	else if( boost::iequals( arg, L".RAINWATERHOPPER." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_RAINWATERHOPPER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStackTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
