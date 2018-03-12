/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcPropertyAbstraction.h"

// ENTITY IfcPropertyAbstraction 
IfcPropertyAbstraction::IfcPropertyAbstraction() {}
IfcPropertyAbstraction::IfcPropertyAbstraction( int id ) { m_entity_id = id; }
IfcPropertyAbstraction::~IfcPropertyAbstraction() {}
shared_ptr<BuildingObject> IfcPropertyAbstraction::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertyAbstraction> copy_self( new IfcPropertyAbstraction() );
	return copy_self;
}
void IfcPropertyAbstraction::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYABSTRACTION" << "(";
	stream << ");";
}
void IfcPropertyAbstraction::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertyAbstraction::toString() const { return L"IfcPropertyAbstraction"; }
void IfcPropertyAbstraction::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcPropertyAbstraction::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
}
void IfcPropertyAbstraction::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	if( m_HasExternalReferences_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasExternalReferences_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
		{
			if( !m_HasExternalReferences_inverse[i].expired() )
			{
				HasExternalReferences_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	}
}
void IfcPropertyAbstraction::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcPropertyAbstraction::unlinkFromInverseCounterparts()
{
}
