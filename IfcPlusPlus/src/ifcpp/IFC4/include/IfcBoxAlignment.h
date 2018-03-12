/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcLabel.h"

// TYPE IfcBoxAlignment = IfcLabel;
class IFCQUERY_EXPORT IfcBoxAlignment : public IfcLabel
{
public:
	IfcBoxAlignment();
	IfcBoxAlignment( std::wstring value ) { m_value = value; }
	~IfcBoxAlignment();
	virtual const char* className() const { return "IfcBoxAlignment"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBoxAlignment> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
};

