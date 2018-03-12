/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcSurfaceOrFaceSurface.h"

// TYPE IfcSurfaceOrFaceSurface = SELECT	(IfcFaceBasedSurfaceModel	,IfcFaceSurface	,IfcSurface);
shared_ptr<IfcSurfaceOrFaceSurface> IfcSurfaceOrFaceSurface::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcSurfaceOrFaceSurface>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcSurfaceOrFaceSurface>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcSurfaceOrFaceSurface>();
	}
	shared_ptr<IfcSurfaceOrFaceSurface> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
