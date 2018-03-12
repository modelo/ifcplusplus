/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcShadingDeviceTypeEnum.h"

// TYPE IfcShadingDeviceTypeEnum = ENUMERATION OF	(JALOUSIE	,SHUTTER	,AWNING	,USERDEFINED	,NOTDEFINED);
IfcShadingDeviceTypeEnum::IfcShadingDeviceTypeEnum() {}
IfcShadingDeviceTypeEnum::~IfcShadingDeviceTypeEnum() {}
shared_ptr<BuildingObject> IfcShadingDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcShadingDeviceTypeEnum> copy_self( new IfcShadingDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcShadingDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSHADINGDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_JALOUSIE:	stream << ".JALOUSIE."; break;
		case ENUM_SHUTTER:	stream << ".SHUTTER."; break;
		case ENUM_AWNING:	stream << ".AWNING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcShadingDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_JALOUSIE:	return L"JALOUSIE";
		case ENUM_SHUTTER:	return L"SHUTTER";
		case ENUM_AWNING:	return L"AWNING";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcShadingDeviceTypeEnum> IfcShadingDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcShadingDeviceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcShadingDeviceTypeEnum>(); }
	shared_ptr<IfcShadingDeviceTypeEnum> type_object( new IfcShadingDeviceTypeEnum() );
	if( boost::iequals( arg, L".JALOUSIE." ) )
	{
		type_object->m_enum = IfcShadingDeviceTypeEnum::ENUM_JALOUSIE;
	}
	else if( boost::iequals( arg, L".SHUTTER." ) )
	{
		type_object->m_enum = IfcShadingDeviceTypeEnum::ENUM_SHUTTER;
	}
	else if( boost::iequals( arg, L".AWNING." ) )
	{
		type_object->m_enum = IfcShadingDeviceTypeEnum::ENUM_AWNING;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcShadingDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcShadingDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
