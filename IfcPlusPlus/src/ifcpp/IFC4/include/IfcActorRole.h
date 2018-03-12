/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcResourceObjectSelect.h"
class IFCQUERY_EXPORT IfcRoleEnum;
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcText;
class IFCQUERY_EXPORT IfcExternalReferenceRelationship;
//ENTITY
class IFCQUERY_EXPORT IfcActorRole : virtual public IfcResourceObjectSelect, public BuildingEntity
{ 
public:
	IfcActorRole();
	IfcActorRole( int id );
	~IfcActorRole();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcActorRole"; }
	virtual const std::wstring toString() const;


	// IfcActorRole -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcRoleEnum>										m_Role;
	shared_ptr<IfcLabel>										m_UserDefinedRole;			//optional
	shared_ptr<IfcText>											m_Description;				//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
};

