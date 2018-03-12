/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelConnectsElements.h"
#include "ifcpp/IFC4/include/IfcRelConnectsWithRealizingElements.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelCoversBldgElements.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelFillsElement.h"
#include "ifcpp/IFC4/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelProjectsElement.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary.h"
#include "ifcpp/IFC4/include/IfcRelVoidsElement.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcElement 
IfcElement::IfcElement() {}
IfcElement::IfcElement( int id ) { m_entity_id = id; }
IfcElement::~IfcElement() {}
shared_ptr<BuildingObject> IfcElement::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElement> copy_self( new IfcElement() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_Tag ) { copy_self->m_Tag = dynamic_pointer_cast<IfcIdentifier>( m_Tag->getDeepCopy(options) ); }
	return copy_self;
}
void IfcElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCELEMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcElement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcElement::toString() const { return L"IfcElement"; }
void IfcElement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcElement, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_Tag = IfcIdentifier::createObjectFromSTEP( args[7], map );
}
void IfcElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcProduct::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Tag", m_Tag ) );
}
void IfcElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcProduct::getAttributesInverse( vec_attributes_inverse );
	if( m_FillsVoids_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> FillsVoids_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_FillsVoids_inverse.size(); ++i )
		{
			if( !m_FillsVoids_inverse[i].expired() )
			{
				FillsVoids_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelFillsElement>( m_FillsVoids_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "FillsVoids_inverse", FillsVoids_inverse_vec_obj ) );
	}
	if( m_ConnectedTo_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ConnectedTo_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ConnectedTo_inverse.size(); ++i )
		{
			if( !m_ConnectedTo_inverse[i].expired() )
			{
				ConnectedTo_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelConnectsElements>( m_ConnectedTo_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ConnectedTo_inverse", ConnectedTo_inverse_vec_obj ) );
	}
	if( m_IsInterferedByElements_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> IsInterferedByElements_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsInterferedByElements_inverse.size(); ++i )
		{
			if( !m_IsInterferedByElements_inverse[i].expired() )
			{
				IsInterferedByElements_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelInterferesElements>( m_IsInterferedByElements_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsInterferedByElements_inverse", IsInterferedByElements_inverse_vec_obj ) );
	}
	if( m_InterferesElements_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> InterferesElements_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_InterferesElements_inverse.size(); ++i )
		{
			if( !m_InterferesElements_inverse[i].expired() )
			{
				InterferesElements_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelInterferesElements>( m_InterferesElements_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "InterferesElements_inverse", InterferesElements_inverse_vec_obj ) );
	}
	if( m_HasProjections_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasProjections_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasProjections_inverse.size(); ++i )
		{
			if( !m_HasProjections_inverse[i].expired() )
			{
				HasProjections_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelProjectsElement>( m_HasProjections_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasProjections_inverse", HasProjections_inverse_vec_obj ) );
	}
	if( m_ReferencedInStructures_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ReferencedInStructures_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ReferencedInStructures_inverse.size(); ++i )
		{
			if( !m_ReferencedInStructures_inverse[i].expired() )
			{
				ReferencedInStructures_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelReferencedInSpatialStructure>( m_ReferencedInStructures_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ReferencedInStructures_inverse", ReferencedInStructures_inverse_vec_obj ) );
	}
	if( m_HasOpenings_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasOpenings_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasOpenings_inverse.size(); ++i )
		{
			if( !m_HasOpenings_inverse[i].expired() )
			{
				HasOpenings_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelVoidsElement>( m_HasOpenings_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasOpenings_inverse", HasOpenings_inverse_vec_obj ) );
	}
	if( m_IsConnectionRealization_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> IsConnectionRealization_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsConnectionRealization_inverse.size(); ++i )
		{
			if( !m_IsConnectionRealization_inverse[i].expired() )
			{
				IsConnectionRealization_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelConnectsWithRealizingElements>( m_IsConnectionRealization_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsConnectionRealization_inverse", IsConnectionRealization_inverse_vec_obj ) );
	}
	if( m_ProvidesBoundaries_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ProvidesBoundaries_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ProvidesBoundaries_inverse.size(); ++i )
		{
			if( !m_ProvidesBoundaries_inverse[i].expired() )
			{
				ProvidesBoundaries_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelSpaceBoundary>( m_ProvidesBoundaries_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ProvidesBoundaries_inverse", ProvidesBoundaries_inverse_vec_obj ) );
	}
	if( m_ConnectedFrom_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ConnectedFrom_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ConnectedFrom_inverse.size(); ++i )
		{
			if( !m_ConnectedFrom_inverse[i].expired() )
			{
				ConnectedFrom_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelConnectsElements>( m_ConnectedFrom_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ConnectedFrom_inverse", ConnectedFrom_inverse_vec_obj ) );
	}
	if( m_ContainedInStructure_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ContainedInStructure_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ContainedInStructure_inverse.size(); ++i )
		{
			if( !m_ContainedInStructure_inverse[i].expired() )
			{
				ContainedInStructure_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelContainedInSpatialStructure>( m_ContainedInStructure_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ContainedInStructure_inverse", ContainedInStructure_inverse_vec_obj ) );
	}
	if( m_HasCoverings_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasCoverings_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasCoverings_inverse.size(); ++i )
		{
			if( !m_HasCoverings_inverse[i].expired() )
			{
				HasCoverings_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelCoversBldgElements>( m_HasCoverings_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasCoverings_inverse", HasCoverings_inverse_vec_obj ) );
	}
}
void IfcElement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProduct::setInverseCounterparts( ptr_self_entity );
}
void IfcElement::unlinkFromInverseCounterparts()
{
	IfcProduct::unlinkFromInverseCounterparts();
}
