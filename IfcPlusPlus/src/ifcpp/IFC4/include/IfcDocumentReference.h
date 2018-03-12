/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDocumentSelect.h"
#include "IfcExternalReference.h"
class IFCQUERY_EXPORT IfcText;
class IFCQUERY_EXPORT IfcDocumentInformation;
class IFCQUERY_EXPORT IfcRelAssociatesDocument;
//ENTITY
class IFCQUERY_EXPORT IfcDocumentReference : virtual public IfcDocumentSelect, public IfcExternalReference
{ 
public:
	IfcDocumentReference();
	IfcDocumentReference( int id );
	~IfcDocumentReference();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcDocumentReference"; }
	virtual const std::wstring toString() const;


	// IfcExternalReference -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcURIReference>									m_Location;					//optional
	//  shared_ptr<IfcIdentifier>									m_Identification;			//optional
	//  shared_ptr<IfcLabel>										m_Name;						//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_ExternalReferenceForResources_inverse;

	// IfcDocumentReference -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcText>											m_Description;				//optional
	shared_ptr<IfcDocumentInformation>							m_ReferencedDocument;		//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcRelAssociatesDocument> >			m_DocumentRefForObjects_inverse;
};

