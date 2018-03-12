/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSolidAngleMeasure.h"

// TYPE IfcSolidAngleMeasure = REAL;
IfcSolidAngleMeasure::IfcSolidAngleMeasure() {}
IfcSolidAngleMeasure::IfcSolidAngleMeasure( double value ) { m_value = value; }
IfcSolidAngleMeasure::~IfcSolidAngleMeasure() {}
shared_ptr<BuildingObject> IfcSolidAngleMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSolidAngleMeasure> copy_self( new IfcSolidAngleMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSolidAngleMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSOLIDANGLEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSolidAngleMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSolidAngleMeasure> IfcSolidAngleMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSolidAngleMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSolidAngleMeasure>(); }
	shared_ptr<IfcSolidAngleMeasure> type_object( new IfcSolidAngleMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
