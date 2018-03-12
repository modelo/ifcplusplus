/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcBoundedCurve.h"
#include "ifcpp/IFC4/include/IfcPolygonalBoundedHalfSpace.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"

// ENTITY IfcPolygonalBoundedHalfSpace 
IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace() {}
IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace( int id ) { m_entity_id = id; }
IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace() {}
shared_ptr<BuildingObject> IfcPolygonalBoundedHalfSpace::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPolygonalBoundedHalfSpace> copy_self( new IfcPolygonalBoundedHalfSpace() );
	if( m_BaseSurface ) { copy_self->m_BaseSurface = dynamic_pointer_cast<IfcSurface>( m_BaseSurface->getDeepCopy(options) ); }
	if( m_AgreementFlag ) { copy_self->m_AgreementFlag = dynamic_pointer_cast<IfcBoolean>( m_AgreementFlag->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_PolygonalBoundary ) { copy_self->m_PolygonalBoundary = dynamic_pointer_cast<IfcBoundedCurve>( m_PolygonalBoundary->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPolygonalBoundedHalfSpace::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPOLYGONALBOUNDEDHALFSPACE" << "(";
	if( m_BaseSurface ) { stream << "#" << m_BaseSurface->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_AgreementFlag ) { m_AgreementFlag->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_PolygonalBoundary ) { stream << "#" << m_PolygonalBoundary->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcPolygonalBoundedHalfSpace::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPolygonalBoundedHalfSpace::toString() const { return L"IfcPolygonalBoundedHalfSpace"; }
void IfcPolygonalBoundedHalfSpace::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPolygonalBoundedHalfSpace, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BaseSurface, map );
	m_AgreementFlag = IfcBoolean::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	readEntityReference( args[3], m_PolygonalBoundary, map );
}
void IfcPolygonalBoundedHalfSpace::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcHalfSpaceSolid::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Position", m_Position ) );
	vec_attributes.push_back( std::make_pair( "PolygonalBoundary", m_PolygonalBoundary ) );
}
void IfcPolygonalBoundedHalfSpace::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcHalfSpaceSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcPolygonalBoundedHalfSpace::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcHalfSpaceSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcPolygonalBoundedHalfSpace::unlinkFromInverseCounterparts()
{
	IfcHalfSpaceSolid::unlinkFromInverseCounterparts();
}
