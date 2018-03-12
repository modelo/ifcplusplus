/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcExternallyDefinedHatchStyle.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcURIReference.h"

// ENTITY IfcExternallyDefinedHatchStyle 
IfcExternallyDefinedHatchStyle::IfcExternallyDefinedHatchStyle() {}
IfcExternallyDefinedHatchStyle::IfcExternallyDefinedHatchStyle( int id ) { m_entity_id = id; }
IfcExternallyDefinedHatchStyle::~IfcExternallyDefinedHatchStyle() {}
shared_ptr<BuildingObject> IfcExternallyDefinedHatchStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcExternallyDefinedHatchStyle> copy_self( new IfcExternallyDefinedHatchStyle() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcURIReference>( m_Location->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcExternallyDefinedHatchStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCEXTERNALLYDEFINEDHATCHSTYLE" << "(";
	if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcExternallyDefinedHatchStyle::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcExternallyDefinedHatchStyle::toString() const { return L"IfcExternallyDefinedHatchStyle"; }
void IfcExternallyDefinedHatchStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcExternallyDefinedHatchStyle, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Location = IfcURIReference::createObjectFromSTEP( args[0], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[1], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
}
void IfcExternallyDefinedHatchStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcExternalReference::getAttributes( vec_attributes );
}
void IfcExternallyDefinedHatchStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcExternalReference::getAttributesInverse( vec_attributes_inverse );
}
void IfcExternallyDefinedHatchStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalReference::setInverseCounterparts( ptr_self_entity );
}
void IfcExternallyDefinedHatchStyle::unlinkFromInverseCounterparts()
{
	IfcExternalReference::unlinkFromInverseCounterparts();
}
