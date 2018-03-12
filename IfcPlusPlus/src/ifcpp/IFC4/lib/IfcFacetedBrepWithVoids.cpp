/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcClosedShell.h"
#include "ifcpp/IFC4/include/IfcFacetedBrepWithVoids.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcFacetedBrepWithVoids 
IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids() {}
IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids( int id ) { m_entity_id = id; }
IfcFacetedBrepWithVoids::~IfcFacetedBrepWithVoids() {}
shared_ptr<BuildingObject> IfcFacetedBrepWithVoids::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFacetedBrepWithVoids> copy_self( new IfcFacetedBrepWithVoids() );
	if( m_Outer ) { copy_self->m_Outer = dynamic_pointer_cast<IfcClosedShell>( m_Outer->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Voids.size(); ++ii )
	{
		auto item_ii = m_Voids[ii];
		if( item_ii )
		{
			copy_self->m_Voids.push_back( dynamic_pointer_cast<IfcClosedShell>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcFacetedBrepWithVoids::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCFACETEDBREPWITHVOIDS" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_entity_id; } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_Voids );
	stream << ");";
}
void IfcFacetedBrepWithVoids::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcFacetedBrepWithVoids::toString() const { return L"IfcFacetedBrepWithVoids"; }
void IfcFacetedBrepWithVoids::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFacetedBrepWithVoids, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Outer, map );
	readEntityReferenceList( args[1], m_Voids, map );
}
void IfcFacetedBrepWithVoids::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcFacetedBrep::getAttributes( vec_attributes );
	if( m_Voids.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Voids_vec_object( new AttributeObjectVector() );
		std::copy( m_Voids.begin(), m_Voids.end(), std::back_inserter( Voids_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Voids", Voids_vec_object ) );
	}
}
void IfcFacetedBrepWithVoids::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcFacetedBrep::getAttributesInverse( vec_attributes_inverse );
}
void IfcFacetedBrepWithVoids::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcFacetedBrep::setInverseCounterparts( ptr_self_entity );
}
void IfcFacetedBrepWithVoids::unlinkFromInverseCounterparts()
{
	IfcFacetedBrep::unlinkFromInverseCounterparts();
}
