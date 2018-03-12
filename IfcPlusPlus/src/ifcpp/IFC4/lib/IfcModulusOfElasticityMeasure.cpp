/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcModulusOfElasticityMeasure.h"

// TYPE IfcModulusOfElasticityMeasure = REAL;
IfcModulusOfElasticityMeasure::IfcModulusOfElasticityMeasure() {}
IfcModulusOfElasticityMeasure::IfcModulusOfElasticityMeasure( double value ) { m_value = value; }
IfcModulusOfElasticityMeasure::~IfcModulusOfElasticityMeasure() {}
shared_ptr<BuildingObject> IfcModulusOfElasticityMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcModulusOfElasticityMeasure> copy_self( new IfcModulusOfElasticityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcModulusOfElasticityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMODULUSOFELASTICITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcModulusOfElasticityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcModulusOfElasticityMeasure> IfcModulusOfElasticityMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcModulusOfElasticityMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcModulusOfElasticityMeasure>(); }
	shared_ptr<IfcModulusOfElasticityMeasure> type_object( new IfcModulusOfElasticityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
