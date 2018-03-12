/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLagTime.h"
#include "ifcpp/IFC4/include/IfcTaskDurationEnum.h"
#include "ifcpp/IFC4/include/IfcTimeOrRatioSelect.h"

// ENTITY IfcLagTime 
IfcLagTime::IfcLagTime() {}
IfcLagTime::IfcLagTime( int id ) { m_entity_id = id; }
IfcLagTime::~IfcLagTime() {}
shared_ptr<BuildingObject> IfcLagTime::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLagTime> copy_self( new IfcLagTime() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_DataOrigin ) { copy_self->m_DataOrigin = dynamic_pointer_cast<IfcDataOriginEnum>( m_DataOrigin->getDeepCopy(options) ); }
	if( m_UserDefinedDataOrigin ) { copy_self->m_UserDefinedDataOrigin = dynamic_pointer_cast<IfcLabel>( m_UserDefinedDataOrigin->getDeepCopy(options) ); }
	if( m_LagValue ) { copy_self->m_LagValue = dynamic_pointer_cast<IfcTimeOrRatioSelect>( m_LagValue->getDeepCopy(options) ); }
	if( m_DurationType ) { copy_self->m_DurationType = dynamic_pointer_cast<IfcTaskDurationEnum>( m_DurationType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcLagTime::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCLAGTIME" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_LagValue ) { m_LagValue->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_DurationType ) { m_DurationType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcLagTime::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcLagTime::toString() const { return L"IfcLagTime"; }
void IfcLagTime::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLagTime, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[1], map );
	m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[2], map );
	m_LagValue = IfcTimeOrRatioSelect::createObjectFromSTEP( args[3], map );
	m_DurationType = IfcTaskDurationEnum::createObjectFromSTEP( args[4], map );
}
void IfcLagTime::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcSchedulingTime::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "LagValue", m_LagValue ) );
	vec_attributes.push_back( std::make_pair( "DurationType", m_DurationType ) );
}
void IfcLagTime::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcSchedulingTime::getAttributesInverse( vec_attributes_inverse );
}
void IfcLagTime::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSchedulingTime::setInverseCounterparts( ptr_self_entity );
}
void IfcLagTime::unlinkFromInverseCounterparts()
{
	IfcSchedulingTime::unlinkFromInverseCounterparts();
}
