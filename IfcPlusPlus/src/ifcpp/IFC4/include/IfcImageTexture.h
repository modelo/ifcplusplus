/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSurfaceTexture.h"
class IFCQUERY_EXPORT IfcURIReference;
//ENTITY
class IFCQUERY_EXPORT IfcImageTexture : public IfcSurfaceTexture
{ 
public:
	IfcImageTexture();
	IfcImageTexture( int id );
	~IfcImageTexture();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcImageTexture"; }
	virtual const std::wstring toString() const;


	// IfcPresentationItem -----------------------------------------------------------

	// IfcSurfaceTexture -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcBoolean>								m_RepeatS;
	//  shared_ptr<IfcBoolean>								m_RepeatT;
	//  shared_ptr<IfcIdentifier>							m_Mode;						//optional
	//  shared_ptr<IfcCartesianTransformationOperator2D>	m_TextureTransform;			//optional
	//  std::vector<shared_ptr<IfcIdentifier> >				m_Parameter;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcTextureCoordinate> >		m_IsMappedBy_inverse;
	//  std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >	m_UsedInStyles_inverse;

	// IfcImageTexture -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcURIReference>							m_URLReference;
};

