/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFontStyle.h"

// TYPE IfcFontStyle = STRING;
IfcFontStyle::IfcFontStyle() {}
IfcFontStyle::IfcFontStyle( std::wstring value ) { m_value = value; }
IfcFontStyle::~IfcFontStyle() {}
shared_ptr<BuildingObject> IfcFontStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFontStyle> copy_self( new IfcFontStyle() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcFontStyle::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFONTSTYLE("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFontStyle::toString() const
{
	return m_value;
}
shared_ptr<IfcFontStyle> IfcFontStyle::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFontStyle>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFontStyle>(); }
	shared_ptr<IfcFontStyle> type_object( new IfcFontStyle() );
	readString( arg, type_object->m_value );
	return type_object;
}
