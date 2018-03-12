/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBendingParameterSelect.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"

// TYPE IfcLengthMeasure = REAL;
IfcLengthMeasure::IfcLengthMeasure() {}
IfcLengthMeasure::IfcLengthMeasure( double value ) { m_value = value; }
IfcLengthMeasure::~IfcLengthMeasure() {}
shared_ptr<BuildingObject> IfcLengthMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLengthMeasure> copy_self( new IfcLengthMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLengthMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLENGTHMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLengthMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcLengthMeasure> IfcLengthMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLengthMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLengthMeasure>(); }
	shared_ptr<IfcLengthMeasure> type_object( new IfcLengthMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
