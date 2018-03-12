/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCompositeCurveOnSurface.h"
#include "ifcpp/IFC4/include/IfcCompositeCurveSegment.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCompositeCurveOnSurface 
IfcCompositeCurveOnSurface::IfcCompositeCurveOnSurface() {}
IfcCompositeCurveOnSurface::IfcCompositeCurveOnSurface( int id ) { m_entity_id = id; }
IfcCompositeCurveOnSurface::~IfcCompositeCurveOnSurface() {}
shared_ptr<BuildingObject> IfcCompositeCurveOnSurface::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCompositeCurveOnSurface> copy_self( new IfcCompositeCurveOnSurface() );
	for( size_t ii=0; ii<m_Segments.size(); ++ii )
	{
		auto item_ii = m_Segments[ii];
		if( item_ii )
		{
			copy_self->m_Segments.push_back( dynamic_pointer_cast<IfcCompositeCurveSegment>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCompositeCurveOnSurface::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCOMPOSITECURVEONSURFACE" << "(";
	writeEntityList( stream, m_Segments );
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcCompositeCurveOnSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCompositeCurveOnSurface::toString() const { return L"IfcCompositeCurveOnSurface"; }
void IfcCompositeCurveOnSurface::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCompositeCurveOnSurface, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Segments, map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[1], map );
}
void IfcCompositeCurveOnSurface::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcCompositeCurve::getAttributes( vec_attributes );
}
void IfcCompositeCurveOnSurface::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcCompositeCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcCompositeCurveOnSurface::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCompositeCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcCompositeCurveOnSurface::unlinkFromInverseCounterparts()
{
	IfcCompositeCurve::unlinkFromInverseCounterparts();
}
