/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcApplication.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOrganization.h"

// ENTITY IfcApplication 
IfcApplication::IfcApplication() {}
IfcApplication::IfcApplication( int id ) { m_entity_id = id; }
IfcApplication::~IfcApplication() {}
shared_ptr<BuildingObject> IfcApplication::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcApplication> copy_self( new IfcApplication() );
	if( m_ApplicationDeveloper ) { copy_self->m_ApplicationDeveloper = dynamic_pointer_cast<IfcOrganization>( m_ApplicationDeveloper->getDeepCopy(options) ); }
	if( m_Version ) { copy_self->m_Version = dynamic_pointer_cast<IfcLabel>( m_Version->getDeepCopy(options) ); }
	if( m_ApplicationFullName ) { copy_self->m_ApplicationFullName = dynamic_pointer_cast<IfcLabel>( m_ApplicationFullName->getDeepCopy(options) ); }
	if( m_ApplicationIdentifier ) { copy_self->m_ApplicationIdentifier = dynamic_pointer_cast<IfcIdentifier>( m_ApplicationIdentifier->getDeepCopy(options) ); }
	return copy_self;
}
void IfcApplication::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCAPPLICATION" << "(";
	if( m_ApplicationDeveloper ) { stream << "#" << m_ApplicationDeveloper->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Version ) { m_Version->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ApplicationFullName ) { m_ApplicationFullName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ApplicationIdentifier ) { m_ApplicationIdentifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcApplication::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcApplication::toString() const { return L"IfcApplication"; }
void IfcApplication::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcApplication, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_ApplicationDeveloper, map );
	m_Version = IfcLabel::createObjectFromSTEP( args[1], map );
	m_ApplicationFullName = IfcLabel::createObjectFromSTEP( args[2], map );
	m_ApplicationIdentifier = IfcIdentifier::createObjectFromSTEP( args[3], map );
}
void IfcApplication::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "ApplicationDeveloper", m_ApplicationDeveloper ) );
	vec_attributes.push_back( std::make_pair( "Version", m_Version ) );
	vec_attributes.push_back( std::make_pair( "ApplicationFullName", m_ApplicationFullName ) );
	vec_attributes.push_back( std::make_pair( "ApplicationIdentifier", m_ApplicationIdentifier ) );
}
void IfcApplication::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
}
void IfcApplication::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcApplication::unlinkFromInverseCounterparts()
{
}
