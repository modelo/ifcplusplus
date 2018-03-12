/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCoveringTypeEnum.h"

// TYPE IfcCoveringTypeEnum = ENUMERATION OF	(CEILING	,FLOORING	,CLADDING	,ROOFING	,MOLDING	,SKIRTINGBOARD	,INSULATION	,MEMBRANE	,SLEEVING	,WRAPPING	,USERDEFINED	,NOTDEFINED);
IfcCoveringTypeEnum::IfcCoveringTypeEnum() {}
IfcCoveringTypeEnum::~IfcCoveringTypeEnum() {}
shared_ptr<BuildingObject> IfcCoveringTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCoveringTypeEnum> copy_self( new IfcCoveringTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCoveringTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOVERINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CEILING:	stream << ".CEILING."; break;
		case ENUM_FLOORING:	stream << ".FLOORING."; break;
		case ENUM_CLADDING:	stream << ".CLADDING."; break;
		case ENUM_ROOFING:	stream << ".ROOFING."; break;
		case ENUM_MOLDING:	stream << ".MOLDING."; break;
		case ENUM_SKIRTINGBOARD:	stream << ".SKIRTINGBOARD."; break;
		case ENUM_INSULATION:	stream << ".INSULATION."; break;
		case ENUM_MEMBRANE:	stream << ".MEMBRANE."; break;
		case ENUM_SLEEVING:	stream << ".SLEEVING."; break;
		case ENUM_WRAPPING:	stream << ".WRAPPING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCoveringTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CEILING:	return L"CEILING";
		case ENUM_FLOORING:	return L"FLOORING";
		case ENUM_CLADDING:	return L"CLADDING";
		case ENUM_ROOFING:	return L"ROOFING";
		case ENUM_MOLDING:	return L"MOLDING";
		case ENUM_SKIRTINGBOARD:	return L"SKIRTINGBOARD";
		case ENUM_INSULATION:	return L"INSULATION";
		case ENUM_MEMBRANE:	return L"MEMBRANE";
		case ENUM_SLEEVING:	return L"SLEEVING";
		case ENUM_WRAPPING:	return L"WRAPPING";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCoveringTypeEnum> IfcCoveringTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCoveringTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCoveringTypeEnum>(); }
	shared_ptr<IfcCoveringTypeEnum> type_object( new IfcCoveringTypeEnum() );
	if( boost::iequals( arg, L".CEILING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_CEILING;
	}
	else if( boost::iequals( arg, L".FLOORING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_FLOORING;
	}
	else if( boost::iequals( arg, L".CLADDING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_CLADDING;
	}
	else if( boost::iequals( arg, L".ROOFING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_ROOFING;
	}
	else if( boost::iequals( arg, L".MOLDING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_MOLDING;
	}
	else if( boost::iequals( arg, L".SKIRTINGBOARD." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_SKIRTINGBOARD;
	}
	else if( boost::iequals( arg, L".INSULATION." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_INSULATION;
	}
	else if( boost::iequals( arg, L".MEMBRANE." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_MEMBRANE;
	}
	else if( boost::iequals( arg, L".SLEEVING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_SLEEVING;
	}
	else if( boost::iequals( arg, L".WRAPPING." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_WRAPPING;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCoveringTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
