/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"

// TYPE IfcPositiveInteger = IfcInteger;
IfcPositiveInteger::IfcPositiveInteger() {}
IfcPositiveInteger::~IfcPositiveInteger() {}
shared_ptr<BuildingObject> IfcPositiveInteger::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPositiveInteger> copy_self( new IfcPositiveInteger() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPositiveInteger::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPOSITIVEINTEGER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPositiveInteger::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcPositiveInteger> IfcPositiveInteger::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPositiveInteger>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPositiveInteger>(); }
	shared_ptr<IfcPositiveInteger> type_object( new IfcPositiveInteger() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
