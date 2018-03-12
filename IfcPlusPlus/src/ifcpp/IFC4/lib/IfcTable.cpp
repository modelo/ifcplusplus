/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcTable.h"
#include "ifcpp/IFC4/include/IfcTableColumn.h"
#include "ifcpp/IFC4/include/IfcTableRow.h"

// ENTITY IfcTable 
IfcTable::IfcTable() {}
IfcTable::IfcTable( int id ) { m_entity_id = id; }
IfcTable::~IfcTable() {}
shared_ptr<BuildingObject> IfcTable::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTable> copy_self( new IfcTable() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Rows.size(); ++ii )
	{
		auto item_ii = m_Rows[ii];
		if( item_ii )
		{
			copy_self->m_Rows.push_back( dynamic_pointer_cast<IfcTableRow>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Columns.size(); ++ii )
	{
		auto item_ii = m_Columns[ii];
		if( item_ii )
		{
			copy_self->m_Columns.push_back( dynamic_pointer_cast<IfcTableColumn>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcTable::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTABLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Rows );
	stream << ",";
	writeEntityList( stream, m_Columns );
	stream << ");";
}
void IfcTable::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTable::toString() const { return L"IfcTable"; }
void IfcTable::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTable, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readEntityReferenceList( args[1], m_Rows, map );
	readEntityReferenceList( args[2], m_Columns, map );
}
void IfcTable::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	if( m_Rows.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Rows_vec_object( new AttributeObjectVector() );
		std::copy( m_Rows.begin(), m_Rows.end(), std::back_inserter( Rows_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Rows", Rows_vec_object ) );
	}
	if( m_Columns.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Columns_vec_object( new AttributeObjectVector() );
		std::copy( m_Columns.begin(), m_Columns.end(), std::back_inserter( Columns_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Columns", Columns_vec_object ) );
	}
}
void IfcTable::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
}
void IfcTable::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcTable::unlinkFromInverseCounterparts()
{
}
