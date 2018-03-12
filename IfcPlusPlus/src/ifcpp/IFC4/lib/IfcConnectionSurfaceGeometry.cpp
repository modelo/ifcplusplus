/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionSurfaceGeometry.h"
#include "ifcpp/IFC4/include/IfcSurfaceOrFaceSurface.h"

// ENTITY IfcConnectionSurfaceGeometry 
IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry() {}
IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry( int id ) { m_entity_id = id; }
IfcConnectionSurfaceGeometry::~IfcConnectionSurfaceGeometry() {}
shared_ptr<BuildingObject> IfcConnectionSurfaceGeometry::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcConnectionSurfaceGeometry> copy_self( new IfcConnectionSurfaceGeometry() );
	if( m_SurfaceOnRelatingElement ) { copy_self->m_SurfaceOnRelatingElement = dynamic_pointer_cast<IfcSurfaceOrFaceSurface>( m_SurfaceOnRelatingElement->getDeepCopy(options) ); }
	if( m_SurfaceOnRelatedElement ) { copy_self->m_SurfaceOnRelatedElement = dynamic_pointer_cast<IfcSurfaceOrFaceSurface>( m_SurfaceOnRelatedElement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcConnectionSurfaceGeometry::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCONNECTIONSURFACEGEOMETRY" << "(";
	if( m_SurfaceOnRelatingElement ) { m_SurfaceOnRelatingElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_SurfaceOnRelatedElement ) { m_SurfaceOnRelatedElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcConnectionSurfaceGeometry::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcConnectionSurfaceGeometry::toString() const { return L"IfcConnectionSurfaceGeometry"; }
void IfcConnectionSurfaceGeometry::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConnectionSurfaceGeometry, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_SurfaceOnRelatingElement = IfcSurfaceOrFaceSurface::createObjectFromSTEP( args[0], map );
	m_SurfaceOnRelatedElement = IfcSurfaceOrFaceSurface::createObjectFromSTEP( args[1], map );
}
void IfcConnectionSurfaceGeometry::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcConnectionGeometry::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "SurfaceOnRelatingElement", m_SurfaceOnRelatingElement ) );
	vec_attributes.push_back( std::make_pair( "SurfaceOnRelatedElement", m_SurfaceOnRelatedElement ) );
}
void IfcConnectionSurfaceGeometry::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcConnectionGeometry::getAttributesInverse( vec_attributes_inverse );
}
void IfcConnectionSurfaceGeometry::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcConnectionGeometry::setInverseCounterparts( ptr_self_entity );
}
void IfcConnectionSurfaceGeometry::unlinkFromInverseCounterparts()
{
	IfcConnectionGeometry::unlinkFromInverseCounterparts();
}
