/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcFillAreaStyle.h"
#include "ifcpp/IFC4/include/IfcFillStyleSelect.h"
#include "ifcpp/IFC4/include/IfcLabel.h"

// ENTITY IfcFillAreaStyle 
IfcFillAreaStyle::IfcFillAreaStyle() {}
IfcFillAreaStyle::IfcFillAreaStyle( int id ) { m_entity_id = id; }
IfcFillAreaStyle::~IfcFillAreaStyle() {}
shared_ptr<BuildingObject> IfcFillAreaStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFillAreaStyle> copy_self( new IfcFillAreaStyle() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_FillStyles.size(); ++ii )
	{
		auto item_ii = m_FillStyles[ii];
		if( item_ii )
		{
			copy_self->m_FillStyles.push_back( dynamic_pointer_cast<IfcFillStyleSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_ModelorDraughting ) { copy_self->m_ModelorDraughting = dynamic_pointer_cast<IfcBoolean>( m_ModelorDraughting->getDeepCopy(options) ); }
	return copy_self;
}
void IfcFillAreaStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCFILLAREASTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_FillStyles.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcFillStyleSelect>& type_object = m_FillStyles[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_ModelorDraughting ) { m_ModelorDraughting->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcFillAreaStyle::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcFillAreaStyle::toString() const { return L"IfcFillAreaStyle"; }
void IfcFillAreaStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFillAreaStyle, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readSelectList( args[1], m_FillStyles, map );
	m_ModelorDraughting = IfcBoolean::createObjectFromSTEP( args[2], map );
}
void IfcFillAreaStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcPresentationStyle::getAttributes( vec_attributes );
	if( m_FillStyles.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> FillStyles_vec_object( new AttributeObjectVector() );
		std::copy( m_FillStyles.begin(), m_FillStyles.end(), std::back_inserter( FillStyles_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "FillStyles", FillStyles_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "ModelorDraughting", m_ModelorDraughting ) );
}
void IfcFillAreaStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcPresentationStyle::getAttributesInverse( vec_attributes_inverse );
}
void IfcFillAreaStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationStyle::setInverseCounterparts( ptr_self_entity );
}
void IfcFillAreaStyle::unlinkFromInverseCounterparts()
{
	IfcPresentationStyle::unlinkFromInverseCounterparts();
}
