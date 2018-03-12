/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRepresentation.h"
#include "ifcpp/IFC4/include/IfcRepresentationContext.h"

// ENTITY IfcRepresentationContext 
IfcRepresentationContext::IfcRepresentationContext() {}
IfcRepresentationContext::IfcRepresentationContext( int id ) { m_entity_id = id; }
IfcRepresentationContext::~IfcRepresentationContext() {}
shared_ptr<BuildingObject> IfcRepresentationContext::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRepresentationContext> copy_self( new IfcRepresentationContext() );
	if( m_ContextIdentifier ) { copy_self->m_ContextIdentifier = dynamic_pointer_cast<IfcLabel>( m_ContextIdentifier->getDeepCopy(options) ); }
	if( m_ContextType ) { copy_self->m_ContextType = dynamic_pointer_cast<IfcLabel>( m_ContextType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRepresentationContext::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREPRESENTATIONCONTEXT" << "(";
	if( m_ContextIdentifier ) { m_ContextIdentifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ContextType ) { m_ContextType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcRepresentationContext::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRepresentationContext::toString() const { return L"IfcRepresentationContext"; }
void IfcRepresentationContext::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRepresentationContext, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ContextIdentifier = IfcLabel::createObjectFromSTEP( args[0], map );
	m_ContextType = IfcLabel::createObjectFromSTEP( args[1], map );
}
void IfcRepresentationContext::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "ContextIdentifier", m_ContextIdentifier ) );
	vec_attributes.push_back( std::make_pair( "ContextType", m_ContextType ) );
}
void IfcRepresentationContext::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	if( m_RepresentationsInContext_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> RepresentationsInContext_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_RepresentationsInContext_inverse.size(); ++i )
		{
			if( !m_RepresentationsInContext_inverse[i].expired() )
			{
				RepresentationsInContext_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRepresentation>( m_RepresentationsInContext_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "RepresentationsInContext_inverse", RepresentationsInContext_inverse_vec_obj ) );
	}
}
void IfcRepresentationContext::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcRepresentationContext::unlinkFromInverseCounterparts()
{
}
