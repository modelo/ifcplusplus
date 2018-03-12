/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcColumnTypeEnum.h"

// TYPE IfcColumnTypeEnum = ENUMERATION OF	(COLUMN	,PILASTER	,USERDEFINED	,NOTDEFINED);
IfcColumnTypeEnum::IfcColumnTypeEnum() {}
IfcColumnTypeEnum::~IfcColumnTypeEnum() {}
shared_ptr<BuildingObject> IfcColumnTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcColumnTypeEnum> copy_self( new IfcColumnTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcColumnTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOLUMNTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COLUMN:	stream << ".COLUMN."; break;
		case ENUM_PILASTER:	stream << ".PILASTER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcColumnTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_COLUMN:	return L"COLUMN";
		case ENUM_PILASTER:	return L"PILASTER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcColumnTypeEnum> IfcColumnTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcColumnTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcColumnTypeEnum>(); }
	shared_ptr<IfcColumnTypeEnum> type_object( new IfcColumnTypeEnum() );
	if( boost::iequals( arg, L".COLUMN." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_COLUMN;
	}
	else if( boost::iequals( arg, L".PILASTER." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_PILASTER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcColumnTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
