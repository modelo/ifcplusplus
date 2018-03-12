/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcResourceSelect.h"

// TYPE IfcResourceSelect = SELECT	(IfcResource	,IfcTypeResource);
shared_ptr<IfcResourceSelect> IfcResourceSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcResourceSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcResourceSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcResourceSelect>();
	}
	shared_ptr<IfcResourceSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
