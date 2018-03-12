/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSimpleProperty.h"
class IFCQUERY_EXPORT IfcValue;
class IFCQUERY_EXPORT IfcUnit;
//ENTITY
class IFCQUERY_EXPORT IfcPropertyListValue : public IfcSimpleProperty
{ 
public:
	IfcPropertyListValue();
	IfcPropertyListValue( int id );
	~IfcPropertyListValue();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPropertyListValue"; }
	virtual const std::wstring toString() const;


	// IfcPropertyAbstraction -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

	// IfcProperty -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcIdentifier>									m_Name;
	//  shared_ptr<IfcText>											m_Description;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPropertySet> >						m_PartOfPset_inverse;
	//  std::vector<weak_ptr<IfcPropertyDependencyRelationship> >	m_PropertyForDependance_inverse;
	//  std::vector<weak_ptr<IfcPropertyDependencyRelationship> >	m_PropertyDependsOn_inverse;
	//  std::vector<weak_ptr<IfcComplexProperty> >					m_PartOfComplex_inverse;
	//  std::vector<weak_ptr<IfcResourceConstraintRelationship> >	m_HasConstraints_inverse;
	//  std::vector<weak_ptr<IfcResourceApprovalRelationship> >		m_HasApprovals_inverse;

	// IfcSimpleProperty -----------------------------------------------------------

	// IfcPropertyListValue -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcValue> >							m_ListValues;				//optional
	shared_ptr<IfcUnit>											m_Unit;						//optional
};

