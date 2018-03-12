/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialConstituent.h"
#include "ifcpp/IFC4/include/IfcMaterialConstituentSet.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialConstituent 
IfcMaterialConstituent::IfcMaterialConstituent() {}
IfcMaterialConstituent::IfcMaterialConstituent( int id ) { m_entity_id = id; }
IfcMaterialConstituent::~IfcMaterialConstituent() {}
shared_ptr<BuildingObject> IfcMaterialConstituent::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialConstituent> copy_self( new IfcMaterialConstituent() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Material ) { copy_self->m_Material = dynamic_pointer_cast<IfcMaterial>( m_Material->getDeepCopy(options) ); }
	if( m_Fraction ) { copy_self->m_Fraction = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Fraction->getDeepCopy(options) ); }
	if( m_Category ) { copy_self->m_Category = dynamic_pointer_cast<IfcLabel>( m_Category->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialConstituent::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALCONSTITUENT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Material ) { stream << "#" << m_Material->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Fraction ) { m_Fraction->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialConstituent::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialConstituent::toString() const { return L"IfcMaterialConstituent"; }
void IfcMaterialConstituent::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialConstituent, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Material, map );
	m_Fraction = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[3], map );
	m_Category = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcMaterialConstituent::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcMaterialDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "Material", m_Material ) );
	vec_attributes.push_back( std::make_pair( "Fraction", m_Fraction ) );
	vec_attributes.push_back( std::make_pair( "Category", m_Category ) );
}
void IfcMaterialConstituent::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
	vec_attributes_inverse.push_back( std::make_pair( "ToMaterialConstituentSet_inverse", shared_ptr<BuildingEntity>( m_ToMaterialConstituentSet_inverse ) ) );
}
void IfcMaterialConstituent::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcMaterialConstituent::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
}
