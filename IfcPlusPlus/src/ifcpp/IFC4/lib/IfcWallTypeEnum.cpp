/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcWallTypeEnum.h"

// TYPE IfcWallTypeEnum = ENUMERATION OF	(MOVABLE	,PARAPET	,PARTITIONING	,PLUMBINGWALL	,SHEAR	,SOLIDWALL	,STANDARD	,POLYGONAL	,ELEMENTEDWALL	,USERDEFINED	,NOTDEFINED);
IfcWallTypeEnum::IfcWallTypeEnum() {}
IfcWallTypeEnum::~IfcWallTypeEnum() {}
shared_ptr<BuildingObject> IfcWallTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWallTypeEnum> copy_self( new IfcWallTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWallTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWALLTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_MOVABLE:	stream << ".MOVABLE."; break;
		case ENUM_PARAPET:	stream << ".PARAPET."; break;
		case ENUM_PARTITIONING:	stream << ".PARTITIONING."; break;
		case ENUM_PLUMBINGWALL:	stream << ".PLUMBINGWALL."; break;
		case ENUM_SHEAR:	stream << ".SHEAR."; break;
		case ENUM_SOLIDWALL:	stream << ".SOLIDWALL."; break;
		case ENUM_STANDARD:	stream << ".STANDARD."; break;
		case ENUM_POLYGONAL:	stream << ".POLYGONAL."; break;
		case ENUM_ELEMENTEDWALL:	stream << ".ELEMENTEDWALL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWallTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_MOVABLE:	return L"MOVABLE";
		case ENUM_PARAPET:	return L"PARAPET";
		case ENUM_PARTITIONING:	return L"PARTITIONING";
		case ENUM_PLUMBINGWALL:	return L"PLUMBINGWALL";
		case ENUM_SHEAR:	return L"SHEAR";
		case ENUM_SOLIDWALL:	return L"SOLIDWALL";
		case ENUM_STANDARD:	return L"STANDARD";
		case ENUM_POLYGONAL:	return L"POLYGONAL";
		case ENUM_ELEMENTEDWALL:	return L"ELEMENTEDWALL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcWallTypeEnum> IfcWallTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWallTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWallTypeEnum>(); }
	shared_ptr<IfcWallTypeEnum> type_object( new IfcWallTypeEnum() );
	if( boost::iequals( arg, L".MOVABLE." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_MOVABLE;
	}
	else if( boost::iequals( arg, L".PARAPET." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_PARAPET;
	}
	else if( boost::iequals( arg, L".PARTITIONING." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_PARTITIONING;
	}
	else if( boost::iequals( arg, L".PLUMBINGWALL." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_PLUMBINGWALL;
	}
	else if( boost::iequals( arg, L".SHEAR." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_SHEAR;
	}
	else if( boost::iequals( arg, L".SOLIDWALL." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_SOLIDWALL;
	}
	else if( boost::iequals( arg, L".STANDARD." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_STANDARD;
	}
	else if( boost::iequals( arg, L".POLYGONAL." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_POLYGONAL;
	}
	else if( boost::iequals( arg, L".ELEMENTEDWALL." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_ELEMENTEDWALL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWallTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
