/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAreaMeasure.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcReinforcingMesh.h"
#include "ifcpp/IFC4/include/IfcReinforcingMeshTypeEnum.h"
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

// ENTITY IfcReinforcingMesh 
IfcReinforcingMesh::IfcReinforcingMesh() {}
IfcReinforcingMesh::IfcReinforcingMesh( int id ) { m_entity_id = id; }
IfcReinforcingMesh::~IfcReinforcingMesh() {}
shared_ptr<BuildingObject> IfcReinforcingMesh::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReinforcingMesh> copy_self( new IfcReinforcingMesh() );
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
	if( m_SteelGrade ) { copy_self->m_SteelGrade = dynamic_pointer_cast<IfcLabel>( m_SteelGrade->getDeepCopy(options) ); }
	if( m_MeshLength ) { copy_self->m_MeshLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_MeshLength->getDeepCopy(options) ); }
	if( m_MeshWidth ) { copy_self->m_MeshWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_MeshWidth->getDeepCopy(options) ); }
	if( m_LongitudinalBarNominalDiameter ) { copy_self->m_LongitudinalBarNominalDiameter = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_LongitudinalBarNominalDiameter->getDeepCopy(options) ); }
	if( m_TransverseBarNominalDiameter ) { copy_self->m_TransverseBarNominalDiameter = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_TransverseBarNominalDiameter->getDeepCopy(options) ); }
	if( m_LongitudinalBarCrossSectionArea ) { copy_self->m_LongitudinalBarCrossSectionArea = dynamic_pointer_cast<IfcAreaMeasure>( m_LongitudinalBarCrossSectionArea->getDeepCopy(options) ); }
	if( m_TransverseBarCrossSectionArea ) { copy_self->m_TransverseBarCrossSectionArea = dynamic_pointer_cast<IfcAreaMeasure>( m_TransverseBarCrossSectionArea->getDeepCopy(options) ); }
	if( m_LongitudinalBarSpacing ) { copy_self->m_LongitudinalBarSpacing = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_LongitudinalBarSpacing->getDeepCopy(options) ); }
	if( m_TransverseBarSpacing ) { copy_self->m_TransverseBarSpacing = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_TransverseBarSpacing->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcReinforcingMeshTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcReinforcingMesh::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREINFORCINGMESH" << "(";
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
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_SteelGrade ) { m_SteelGrade->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_MeshLength ) { m_MeshLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MeshWidth ) { m_MeshWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LongitudinalBarNominalDiameter ) { m_LongitudinalBarNominalDiameter->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TransverseBarNominalDiameter ) { m_TransverseBarNominalDiameter->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LongitudinalBarCrossSectionArea ) { m_LongitudinalBarCrossSectionArea->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TransverseBarCrossSectionArea ) { m_TransverseBarCrossSectionArea->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LongitudinalBarSpacing ) { m_LongitudinalBarSpacing->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TransverseBarSpacing ) { m_TransverseBarSpacing->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcReinforcingMesh::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcReinforcingMesh::toString() const { return L"IfcReinforcingMesh"; }
void IfcReinforcingMesh::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 18 ){ std::stringstream err; err << "Wrong parameter count for entity IfcReinforcingMesh, expecting 18, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_Tag = IfcIdentifier::createObjectFromSTEP( args[7], map );
	m_SteelGrade = IfcLabel::createObjectFromSTEP( args[8], map );
	m_MeshLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[9], map );
	m_MeshWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[10], map );
	m_LongitudinalBarNominalDiameter = IfcPositiveLengthMeasure::createObjectFromSTEP( args[11], map );
	m_TransverseBarNominalDiameter = IfcPositiveLengthMeasure::createObjectFromSTEP( args[12], map );
	m_LongitudinalBarCrossSectionArea = IfcAreaMeasure::createObjectFromSTEP( args[13], map );
	m_TransverseBarCrossSectionArea = IfcAreaMeasure::createObjectFromSTEP( args[14], map );
	m_LongitudinalBarSpacing = IfcPositiveLengthMeasure::createObjectFromSTEP( args[15], map );
	m_TransverseBarSpacing = IfcPositiveLengthMeasure::createObjectFromSTEP( args[16], map );
	m_PredefinedType = IfcReinforcingMeshTypeEnum::createObjectFromSTEP( args[17], map );
}
void IfcReinforcingMesh::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcReinforcingElement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "MeshLength", m_MeshLength ) );
	vec_attributes.push_back( std::make_pair( "MeshWidth", m_MeshWidth ) );
	vec_attributes.push_back( std::make_pair( "LongitudinalBarNominalDiameter", m_LongitudinalBarNominalDiameter ) );
	vec_attributes.push_back( std::make_pair( "TransverseBarNominalDiameter", m_TransverseBarNominalDiameter ) );
	vec_attributes.push_back( std::make_pair( "LongitudinalBarCrossSectionArea", m_LongitudinalBarCrossSectionArea ) );
	vec_attributes.push_back( std::make_pair( "TransverseBarCrossSectionArea", m_TransverseBarCrossSectionArea ) );
	vec_attributes.push_back( std::make_pair( "LongitudinalBarSpacing", m_LongitudinalBarSpacing ) );
	vec_attributes.push_back( std::make_pair( "TransverseBarSpacing", m_TransverseBarSpacing ) );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IfcReinforcingMesh::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcReinforcingElement::getAttributesInverse( vec_attributes_inverse );
}
void IfcReinforcingMesh::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcReinforcingElement::setInverseCounterparts( ptr_self_entity );
}
void IfcReinforcingMesh::unlinkFromInverseCounterparts()
{
	IfcReinforcingElement::unlinkFromInverseCounterparts();
}
