/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadConfiguration.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadOrResult.h"

// ENTITY IfcStructuralLoadConfiguration 
IfcStructuralLoadConfiguration::IfcStructuralLoadConfiguration() {}
IfcStructuralLoadConfiguration::IfcStructuralLoadConfiguration( int id ) { m_entity_id = id; }
IfcStructuralLoadConfiguration::~IfcStructuralLoadConfiguration() {}
shared_ptr<BuildingObject> IfcStructuralLoadConfiguration::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadConfiguration> copy_self( new IfcStructuralLoadConfiguration() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Values.size(); ++ii )
	{
		auto item_ii = m_Values[ii];
		if( item_ii )
		{
			copy_self->m_Values.push_back( dynamic_pointer_cast<IfcStructuralLoadOrResult>(item_ii->getDeepCopy(options) ) );
		}
	}
	copy_self->m_Locations.resize( m_Locations.size() );
	for( size_t ii=0; ii<m_Locations.size(); ++ii )
	{
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii = m_Locations[ii];
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii_target = copy_self->m_Locations[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcLengthMeasure>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.push_back( dynamic_pointer_cast<IfcLengthMeasure>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcStructuralLoadConfiguration::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALLOADCONFIGURATION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_Values );
	stream << ",";
	writeNumericTypeList2D( stream, m_Locations );
	stream << ");";
}
void IfcStructuralLoadConfiguration::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralLoadConfiguration::toString() const { return L"IfcStructuralLoadConfiguration"; }
void IfcStructuralLoadConfiguration::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadConfiguration, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readEntityReferenceList( args[1], m_Values, map );
	readTypeOfRealList2D( args[2], m_Locations );
}
void IfcStructuralLoadConfiguration::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcStructuralLoad::getAttributes( vec_attributes );
	if( m_Values.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Values_vec_object( new AttributeObjectVector() );
		std::copy( m_Values.begin(), m_Values.end(), std::back_inserter( Values_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Values", Values_vec_object ) );
	}
}
void IfcStructuralLoadConfiguration::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcStructuralLoad::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadConfiguration::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoad::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadConfiguration::unlinkFromInverseCounterparts()
{
	IfcStructuralLoad::unlinkFromInverseCounterparts();
}
