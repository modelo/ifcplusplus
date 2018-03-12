/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcClosedShell.h"
#include "ifcpp/IFC4/include/IfcFacetedBrep.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcFacetedBrep 
IfcFacetedBrep::IfcFacetedBrep() {}
IfcFacetedBrep::IfcFacetedBrep( int id ) { m_entity_id = id; }
IfcFacetedBrep::~IfcFacetedBrep() {}
shared_ptr<BuildingObject> IfcFacetedBrep::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFacetedBrep> copy_self( new IfcFacetedBrep() );
	if( m_Outer ) { copy_self->m_Outer = dynamic_pointer_cast<IfcClosedShell>( m_Outer->getDeepCopy(options) ); }
	return copy_self;
}
void IfcFacetedBrep::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCFACETEDBREP" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_entity_id; } else { stream << "*"; }
	stream << ");";
}
void IfcFacetedBrep::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcFacetedBrep::toString() const { return L"IfcFacetedBrep"; }
void IfcFacetedBrep::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFacetedBrep, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Outer, map );
}
void IfcFacetedBrep::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcManifoldSolidBrep::getAttributes( vec_attributes );
}
void IfcFacetedBrep::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcManifoldSolidBrep::getAttributesInverse( vec_attributes_inverse );
}
void IfcFacetedBrep::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcManifoldSolidBrep::setInverseCounterparts( ptr_self_entity );
}
void IfcFacetedBrep::unlinkFromInverseCounterparts()
{
	IfcManifoldSolidBrep::unlinkFromInverseCounterparts();
}
