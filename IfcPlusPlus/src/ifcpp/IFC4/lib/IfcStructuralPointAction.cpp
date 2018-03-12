/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcGlobalOrLocalEnum.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelConnectsStructuralActivity.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcStructuralLoad.h"
#include "ifcpp/IFC4/include/IfcStructuralPointAction.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcStructuralPointAction 
IfcStructuralPointAction::IfcStructuralPointAction() {}
IfcStructuralPointAction::IfcStructuralPointAction( int id ) { m_entity_id = id; }
IfcStructuralPointAction::~IfcStructuralPointAction() {}
shared_ptr<BuildingObject> IfcStructuralPointAction::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralPointAction> copy_self( new IfcStructuralPointAction() );
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
	if( m_AppliedLoad ) { copy_self->m_AppliedLoad = dynamic_pointer_cast<IfcStructuralLoad>( m_AppliedLoad->getDeepCopy(options) ); }
	if( m_GlobalOrLocal ) { copy_self->m_GlobalOrLocal = dynamic_pointer_cast<IfcGlobalOrLocalEnum>( m_GlobalOrLocal->getDeepCopy(options) ); }
	if( m_DestabilizingLoad ) { copy_self->m_DestabilizingLoad = dynamic_pointer_cast<IfcBoolean>( m_DestabilizingLoad->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralPointAction::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALPOINTACTION" << "(";
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
	if( m_AppliedLoad ) { stream << "#" << m_AppliedLoad->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_GlobalOrLocal ) { m_GlobalOrLocal->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_DestabilizingLoad ) { m_DestabilizingLoad->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcStructuralPointAction::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralPointAction::toString() const { return L"IfcStructuralPointAction"; }
void IfcStructuralPointAction::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralPointAction, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	readEntityReference( args[7], m_AppliedLoad, map );
	m_GlobalOrLocal = IfcGlobalOrLocalEnum::createObjectFromSTEP( args[8], map );
	m_DestabilizingLoad = IfcBoolean::createObjectFromSTEP( args[9], map );
}
void IfcStructuralPointAction::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcStructuralAction::getAttributes( vec_attributes );
}
void IfcStructuralPointAction::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcStructuralAction::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralPointAction::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralAction::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralPointAction::unlinkFromInverseCounterparts()
{
	IfcStructuralAction::unlinkFromInverseCounterparts();
}
