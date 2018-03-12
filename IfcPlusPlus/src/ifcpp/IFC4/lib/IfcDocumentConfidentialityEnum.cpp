/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDocumentConfidentialityEnum.h"

// TYPE IfcDocumentConfidentialityEnum = ENUMERATION OF	(PUBLIC	,RESTRICTED	,CONFIDENTIAL	,PERSONAL	,USERDEFINED	,NOTDEFINED);
IfcDocumentConfidentialityEnum::IfcDocumentConfidentialityEnum() {}
IfcDocumentConfidentialityEnum::~IfcDocumentConfidentialityEnum() {}
shared_ptr<BuildingObject> IfcDocumentConfidentialityEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDocumentConfidentialityEnum> copy_self( new IfcDocumentConfidentialityEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDocumentConfidentialityEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOCUMENTCONFIDENTIALITYENUM("; }
	switch( m_enum )
	{
		case ENUM_PUBLIC:	stream << ".PUBLIC."; break;
		case ENUM_RESTRICTED:	stream << ".RESTRICTED."; break;
		case ENUM_CONFIDENTIAL:	stream << ".CONFIDENTIAL."; break;
		case ENUM_PERSONAL:	stream << ".PERSONAL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDocumentConfidentialityEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PUBLIC:	return L"PUBLIC";
		case ENUM_RESTRICTED:	return L"RESTRICTED";
		case ENUM_CONFIDENTIAL:	return L"CONFIDENTIAL";
		case ENUM_PERSONAL:	return L"PERSONAL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDocumentConfidentialityEnum> IfcDocumentConfidentialityEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDocumentConfidentialityEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDocumentConfidentialityEnum>(); }
	shared_ptr<IfcDocumentConfidentialityEnum> type_object( new IfcDocumentConfidentialityEnum() );
	if( boost::iequals( arg, L".PUBLIC." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_PUBLIC;
	}
	else if( boost::iequals( arg, L".RESTRICTED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_RESTRICTED;
	}
	else if( boost::iequals( arg, L".CONFIDENTIAL." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_CONFIDENTIAL;
	}
	else if( boost::iequals( arg, L".PERSONAL." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_PERSONAL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
