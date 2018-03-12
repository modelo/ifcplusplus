/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcDynamicViscosityMeasure.h"

// TYPE IfcDynamicViscosityMeasure = REAL;
IfcDynamicViscosityMeasure::IfcDynamicViscosityMeasure() {}
IfcDynamicViscosityMeasure::IfcDynamicViscosityMeasure( double value ) { m_value = value; }
IfcDynamicViscosityMeasure::~IfcDynamicViscosityMeasure() {}
shared_ptr<BuildingObject> IfcDynamicViscosityMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDynamicViscosityMeasure> copy_self( new IfcDynamicViscosityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDynamicViscosityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDYNAMICVISCOSITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDynamicViscosityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcDynamicViscosityMeasure> IfcDynamicViscosityMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDynamicViscosityMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDynamicViscosityMeasure>(); }
	shared_ptr<IfcDynamicViscosityMeasure> type_object( new IfcDynamicViscosityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
