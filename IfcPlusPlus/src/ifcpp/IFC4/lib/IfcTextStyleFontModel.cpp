/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcFontStyle.h"
#include "ifcpp/IFC4/include/IfcFontVariant.h"
#include "ifcpp/IFC4/include/IfcFontWeight.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"
#include "ifcpp/IFC4/include/IfcTextFontName.h"
#include "ifcpp/IFC4/include/IfcTextStyleFontModel.h"

// ENTITY IfcTextStyleFontModel 
IfcTextStyleFontModel::IfcTextStyleFontModel() {}
IfcTextStyleFontModel::IfcTextStyleFontModel( int id ) { m_entity_id = id; }
IfcTextStyleFontModel::~IfcTextStyleFontModel() {}
shared_ptr<BuildingObject> IfcTextStyleFontModel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTextStyleFontModel> copy_self( new IfcTextStyleFontModel() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_FontFamily.size(); ++ii )
	{
		auto item_ii = m_FontFamily[ii];
		if( item_ii )
		{
			copy_self->m_FontFamily.push_back( dynamic_pointer_cast<IfcTextFontName>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_FontStyle ) { copy_self->m_FontStyle = dynamic_pointer_cast<IfcFontStyle>( m_FontStyle->getDeepCopy(options) ); }
	if( m_FontVariant ) { copy_self->m_FontVariant = dynamic_pointer_cast<IfcFontVariant>( m_FontVariant->getDeepCopy(options) ); }
	if( m_FontWeight ) { copy_self->m_FontWeight = dynamic_pointer_cast<IfcFontWeight>( m_FontWeight->getDeepCopy(options) ); }
	if( m_FontSize ) { copy_self->m_FontSize = dynamic_pointer_cast<IfcSizeSelect>( m_FontSize->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTextStyleFontModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTEXTSTYLEFONTMODEL" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_FontFamily.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcTextFontName>& type_object = m_FontFamily[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_FontStyle ) { m_FontStyle->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FontVariant ) { m_FontVariant->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FontWeight ) { m_FontWeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FontSize ) { m_FontSize->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcTextStyleFontModel::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTextStyleFontModel::toString() const { return L"IfcTextStyleFontModel"; }
void IfcTextStyleFontModel::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTextStyleFontModel, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readTypeOfStringList( args[1], m_FontFamily );
	m_FontStyle = IfcFontStyle::createObjectFromSTEP( args[2], map );
	m_FontVariant = IfcFontVariant::createObjectFromSTEP( args[3], map );
	m_FontWeight = IfcFontWeight::createObjectFromSTEP( args[4], map );
	m_FontSize = IfcSizeSelect::createObjectFromSTEP( args[5], map );
}
void IfcTextStyleFontModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcPreDefinedTextFont::getAttributes( vec_attributes );
	if( m_FontFamily.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> FontFamily_vec_object( new AttributeObjectVector() );
		std::copy( m_FontFamily.begin(), m_FontFamily.end(), std::back_inserter( FontFamily_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "FontFamily", FontFamily_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "FontStyle", m_FontStyle ) );
	vec_attributes.push_back( std::make_pair( "FontVariant", m_FontVariant ) );
	vec_attributes.push_back( std::make_pair( "FontWeight", m_FontWeight ) );
	vec_attributes.push_back( std::make_pair( "FontSize", m_FontSize ) );
}
void IfcTextStyleFontModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcPreDefinedTextFont::getAttributesInverse( vec_attributes_inverse );
}
void IfcTextStyleFontModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedTextFont::setInverseCounterparts( ptr_self_entity );
}
void IfcTextStyleFontModel::unlinkFromInverseCounterparts()
{
	IfcPreDefinedTextFont::unlinkFromInverseCounterparts();
}
