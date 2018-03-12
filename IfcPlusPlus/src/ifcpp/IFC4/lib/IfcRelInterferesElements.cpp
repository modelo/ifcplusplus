/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelInterferesElements 
IfcRelInterferesElements::IfcRelInterferesElements() {}
IfcRelInterferesElements::IfcRelInterferesElements( int id ) { m_entity_id = id; }
IfcRelInterferesElements::~IfcRelInterferesElements() {}
shared_ptr<BuildingObject> IfcRelInterferesElements::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelInterferesElements> copy_self( new IfcRelInterferesElements() );
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
	if( m_RelatingElement ) { copy_self->m_RelatingElement = dynamic_pointer_cast<IfcElement>( m_RelatingElement->getDeepCopy(options) ); }
	if( m_RelatedElement ) { copy_self->m_RelatedElement = dynamic_pointer_cast<IfcElement>( m_RelatedElement->getDeepCopy(options) ); }
	if( m_InterferenceGeometry ) { copy_self->m_InterferenceGeometry = dynamic_pointer_cast<IfcConnectionGeometry>( m_InterferenceGeometry->getDeepCopy(options) ); }
	if( m_InterferenceType ) { copy_self->m_InterferenceType = dynamic_pointer_cast<IfcIdentifier>( m_InterferenceType->getDeepCopy(options) ); }
	copy_self->m_ImpliedOrder = m_ImpliedOrder;
	return copy_self;
}
void IfcRelInterferesElements::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELINTERFERESELEMENTS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RelatingElement ) { stream << "#" << m_RelatingElement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedElement ) { stream << "#" << m_RelatedElement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_InterferenceGeometry ) { stream << "#" << m_InterferenceGeometry->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_InterferenceType ) { m_InterferenceType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ImpliedOrder == LOGICAL_FALSE ) { stream << ".F."; }
	else if( m_ImpliedOrder == LOGICAL_TRUE ) { stream << ".T."; }
	else { stream << ".U."; } // LOGICAL_UNKNOWN
	stream << ");";
}
void IfcRelInterferesElements::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelInterferesElements::toString() const { return L"IfcRelInterferesElements"; }
void IfcRelInterferesElements::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelInterferesElements, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingElement, map );
	readEntityReference( args[5], m_RelatedElement, map );
	readEntityReference( args[6], m_InterferenceGeometry, map );
	m_InterferenceType = IfcIdentifier::createObjectFromSTEP( args[7], map );
	if( boost::iequals( args[8], L".F." ) ) { m_ImpliedOrder = LOGICAL_FALSE; }
	else if( boost::iequals( args[8], L".T." ) ) { m_ImpliedOrder = LOGICAL_TRUE; }
	else if( boost::iequals( args[8], L".U." ) ) { m_ImpliedOrder = LOGICAL_UNKNOWN; }
}
void IfcRelInterferesElements::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingElement", m_RelatingElement ) );
	vec_attributes.push_back( std::make_pair( "RelatedElement", m_RelatedElement ) );
	vec_attributes.push_back( std::make_pair( "InterferenceGeometry", m_InterferenceGeometry ) );
	vec_attributes.push_back( std::make_pair( "InterferenceType", m_InterferenceType ) );
	vec_attributes.push_back( std::make_pair( "ImpliedOrder", shared_ptr<LogicalAttribute>( new LogicalAttribute( m_ImpliedOrder ) ) ) );
}
void IfcRelInterferesElements::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelInterferesElements::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelInterferesElements> ptr_self = dynamic_pointer_cast<IfcRelInterferesElements>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelInterferesElements::setInverseCounterparts: type mismatch" ); }
	if( m_RelatedElement )
	{
		m_RelatedElement->m_IsInterferedByElements_inverse.push_back( ptr_self );
	}
	if( m_RelatingElement )
	{
		m_RelatingElement->m_InterferesElements_inverse.push_back( ptr_self );
	}
}
void IfcRelInterferesElements::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	if( m_RelatedElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& IsInterferedByElements_inverse = m_RelatedElement->m_IsInterferedByElements_inverse;
		for( auto it_IsInterferedByElements_inverse = IsInterferedByElements_inverse.begin(); it_IsInterferedByElements_inverse != IsInterferedByElements_inverse.end(); )
		{
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_IsInterferedByElements_inverse );
			if( self_candidate.get() == this )
			{
				it_IsInterferedByElements_inverse= IsInterferedByElements_inverse.erase( it_IsInterferedByElements_inverse );
			}
			else
			{
				++it_IsInterferedByElements_inverse;
			}
		}
	}
	if( m_RelatingElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& InterferesElements_inverse = m_RelatingElement->m_InterferesElements_inverse;
		for( auto it_InterferesElements_inverse = InterferesElements_inverse.begin(); it_InterferesElements_inverse != InterferesElements_inverse.end(); )
		{
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_InterferesElements_inverse );
			if( self_candidate.get() == this )
			{
				it_InterferesElements_inverse= InterferesElements_inverse.erase( it_InterferesElements_inverse );
			}
			else
			{
				++it_InterferesElements_inverse;
			}
		}
	}
}
