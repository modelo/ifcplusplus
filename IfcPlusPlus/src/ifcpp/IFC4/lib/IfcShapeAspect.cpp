/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcProductDefinitionShape.h"
#include "ifcpp/IFC4/include/IfcProductRepresentationSelect.h"
#include "ifcpp/IFC4/include/IfcRepresentationMap.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcShapeModel.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcShapeAspect 
IfcShapeAspect::IfcShapeAspect() {}
IfcShapeAspect::IfcShapeAspect( int id ) { m_entity_id = id; }
IfcShapeAspect::~IfcShapeAspect() {}
shared_ptr<BuildingObject> IfcShapeAspect::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcShapeAspect> copy_self( new IfcShapeAspect() );
	for( size_t ii=0; ii<m_ShapeRepresentations.size(); ++ii )
	{
		auto item_ii = m_ShapeRepresentations[ii];
		if( item_ii )
		{
			copy_self->m_ShapeRepresentations.push_back( dynamic_pointer_cast<IfcShapeModel>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ProductDefinitional ) { copy_self->m_ProductDefinitional = dynamic_pointer_cast<IfcLogical>( m_ProductDefinitional->getDeepCopy(options) ); }
	if( m_PartOfProductDefinitionShape ) { copy_self->m_PartOfProductDefinitionShape = dynamic_pointer_cast<IfcProductRepresentationSelect>( m_PartOfProductDefinitionShape->getDeepCopy(options) ); }
	return copy_self;
}
void IfcShapeAspect::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSHAPEASPECT" << "(";
	writeEntityList( stream, m_ShapeRepresentations );
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProductDefinitional ) { m_ProductDefinitional->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PartOfProductDefinitionShape ) { m_PartOfProductDefinitionShape->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcShapeAspect::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcShapeAspect::toString() const { return L"IfcShapeAspect"; }
void IfcShapeAspect::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcShapeAspect, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_ShapeRepresentations, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[1], map );
	m_Description = IfcText::createObjectFromSTEP( args[2], map );
	m_ProductDefinitional = IfcLogical::createObjectFromSTEP( args[3], map );
	m_PartOfProductDefinitionShape = IfcProductRepresentationSelect::createObjectFromSTEP( args[4], map );
}
void IfcShapeAspect::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	if( m_ShapeRepresentations.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ShapeRepresentations_vec_object( new AttributeObjectVector() );
		std::copy( m_ShapeRepresentations.begin(), m_ShapeRepresentations.end(), std::back_inserter( ShapeRepresentations_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "ShapeRepresentations", ShapeRepresentations_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "ProductDefinitional", m_ProductDefinitional ) );
	vec_attributes.push_back( std::make_pair( "PartOfProductDefinitionShape", m_PartOfProductDefinitionShape ) );
}
void IfcShapeAspect::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
}
void IfcShapeAspect::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	shared_ptr<IfcShapeAspect> ptr_self = dynamic_pointer_cast<IfcShapeAspect>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcShapeAspect::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcProductDefinitionShape>  PartOfProductDefinitionShape_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_PartOfProductDefinitionShape );
	if( PartOfProductDefinitionShape_IfcProductDefinitionShape )
	{
		PartOfProductDefinitionShape_IfcProductDefinitionShape->m_HasShapeAspects_inverse.push_back( ptr_self );
	}
	shared_ptr<IfcRepresentationMap>  PartOfProductDefinitionShape_IfcRepresentationMap = dynamic_pointer_cast<IfcRepresentationMap>( m_PartOfProductDefinitionShape );
	if( PartOfProductDefinitionShape_IfcRepresentationMap )
	{
		PartOfProductDefinitionShape_IfcRepresentationMap->m_HasShapeAspects_inverse.push_back( ptr_self );
	}
	for( size_t i=0; i<m_ShapeRepresentations.size(); ++i )
	{
		if( m_ShapeRepresentations[i] )
		{
			m_ShapeRepresentations[i]->m_OfShapeAspect_inverse.push_back( ptr_self );
		}
	}
}
void IfcShapeAspect::unlinkFromInverseCounterparts()
{
	shared_ptr<IfcProductDefinitionShape>  PartOfProductDefinitionShape_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_PartOfProductDefinitionShape );
	if( PartOfProductDefinitionShape_IfcProductDefinitionShape )
	{
		std::vector<weak_ptr<IfcShapeAspect> >& HasShapeAspects_inverse = PartOfProductDefinitionShape_IfcProductDefinitionShape->m_HasShapeAspects_inverse;
		for( auto it_HasShapeAspects_inverse = HasShapeAspects_inverse.begin(); it_HasShapeAspects_inverse != HasShapeAspects_inverse.end(); )
		{
			shared_ptr<IfcShapeAspect> self_candidate( *it_HasShapeAspects_inverse );
			if( self_candidate.get() == this )
			{
				it_HasShapeAspects_inverse= HasShapeAspects_inverse.erase( it_HasShapeAspects_inverse );
			}
			else
			{
				++it_HasShapeAspects_inverse;
			}
		}
	}
	shared_ptr<IfcRepresentationMap>  PartOfProductDefinitionShape_IfcRepresentationMap = dynamic_pointer_cast<IfcRepresentationMap>( m_PartOfProductDefinitionShape );
	if( PartOfProductDefinitionShape_IfcRepresentationMap )
	{
		std::vector<weak_ptr<IfcShapeAspect> >& HasShapeAspects_inverse = PartOfProductDefinitionShape_IfcRepresentationMap->m_HasShapeAspects_inverse;
		for( auto it_HasShapeAspects_inverse = HasShapeAspects_inverse.begin(); it_HasShapeAspects_inverse != HasShapeAspects_inverse.end(); )
		{
			shared_ptr<IfcShapeAspect> self_candidate( *it_HasShapeAspects_inverse );
			if( self_candidate.get() == this )
			{
				it_HasShapeAspects_inverse= HasShapeAspects_inverse.erase( it_HasShapeAspects_inverse );
			}
			else
			{
				++it_HasShapeAspects_inverse;
			}
		}
	}
	for( size_t i=0; i<m_ShapeRepresentations.size(); ++i )
	{
		if( m_ShapeRepresentations[i] )
		{
			std::vector<weak_ptr<IfcShapeAspect> >& OfShapeAspect_inverse = m_ShapeRepresentations[i]->m_OfShapeAspect_inverse;
			for( auto it_OfShapeAspect_inverse = OfShapeAspect_inverse.begin(); it_OfShapeAspect_inverse != OfShapeAspect_inverse.end(); )
			{
				shared_ptr<IfcShapeAspect> self_candidate( *it_OfShapeAspect_inverse );
				if( self_candidate.get() == this )
				{
					it_OfShapeAspect_inverse= OfShapeAspect_inverse.erase( it_OfShapeAspect_inverse );
				}
				else
				{
					++it_OfShapeAspect_inverse;
				}
			}
		}
	}
}
