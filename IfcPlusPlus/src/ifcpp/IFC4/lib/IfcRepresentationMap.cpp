/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4/include/IfcMappedItem.h"
#include "ifcpp/IFC4/include/IfcRepresentation.h"
#include "ifcpp/IFC4/include/IfcRepresentationMap.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"

// ENTITY IfcRepresentationMap 
IfcRepresentationMap::IfcRepresentationMap() {}
IfcRepresentationMap::IfcRepresentationMap( int id ) { m_entity_id = id; }
IfcRepresentationMap::~IfcRepresentationMap() {}
shared_ptr<BuildingObject> IfcRepresentationMap::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRepresentationMap> copy_self( new IfcRepresentationMap() );
	if( m_MappingOrigin ) { copy_self->m_MappingOrigin = dynamic_pointer_cast<IfcAxis2Placement>( m_MappingOrigin->getDeepCopy(options) ); }
	if( m_MappedRepresentation ) { copy_self->m_MappedRepresentation = dynamic_pointer_cast<IfcRepresentation>( m_MappedRepresentation->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRepresentationMap::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREPRESENTATIONMAP" << "(";
	if( m_MappingOrigin ) { m_MappingOrigin->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_MappedRepresentation ) { stream << "#" << m_MappedRepresentation->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRepresentationMap::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRepresentationMap::toString() const { return L"IfcRepresentationMap"; }
void IfcRepresentationMap::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRepresentationMap, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_MappingOrigin = IfcAxis2Placement::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_MappedRepresentation, map );
}
void IfcRepresentationMap::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "MappingOrigin", m_MappingOrigin ) );
	vec_attributes.push_back( std::make_pair( "MappedRepresentation", m_MappedRepresentation ) );
}
void IfcRepresentationMap::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	if( m_HasShapeAspects_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasShapeAspects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasShapeAspects_inverse.size(); ++i )
		{
			if( !m_HasShapeAspects_inverse[i].expired() )
			{
				HasShapeAspects_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcShapeAspect>( m_HasShapeAspects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasShapeAspects_inverse", HasShapeAspects_inverse_vec_obj ) );
	}
	if( m_MapUsage_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> MapUsage_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_MapUsage_inverse.size(); ++i )
		{
			if( !m_MapUsage_inverse[i].expired() )
			{
				MapUsage_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcMappedItem>( m_MapUsage_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "MapUsage_inverse", MapUsage_inverse_vec_obj ) );
	}
}
void IfcRepresentationMap::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	shared_ptr<IfcRepresentationMap> ptr_self = dynamic_pointer_cast<IfcRepresentationMap>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRepresentationMap::setInverseCounterparts: type mismatch" ); }
	if( m_MappedRepresentation )
	{
		m_MappedRepresentation->m_RepresentationMap_inverse.push_back( ptr_self );
	}
}
void IfcRepresentationMap::unlinkFromInverseCounterparts()
{
	if( m_MappedRepresentation )
	{
		std::vector<weak_ptr<IfcRepresentationMap> >& RepresentationMap_inverse = m_MappedRepresentation->m_RepresentationMap_inverse;
		for( auto it_RepresentationMap_inverse = RepresentationMap_inverse.begin(); it_RepresentationMap_inverse != RepresentationMap_inverse.end(); )
		{
			shared_ptr<IfcRepresentationMap> self_candidate( *it_RepresentationMap_inverse );
			if( self_candidate.get() == this )
			{
				it_RepresentationMap_inverse= RepresentationMap_inverse.erase( it_RepresentationMap_inverse );
			}
			else
			{
				++it_RepresentationMap_inverse;
			}
		}
	}
}
