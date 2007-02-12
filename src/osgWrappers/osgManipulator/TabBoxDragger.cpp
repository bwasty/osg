// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Vec4>
#include <osgManipulator/TabBoxDragger>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgManipulator::TabBoxDragger)
	I_BaseType(osgManipulator::CompositeDragger);
	I_Constructor0(____TabBoxDragger,
	               "",
	               "");
	I_Method0(void, setupDefaultGeometry,
	          Properties::NON_VIRTUAL,
	          __void__setupDefaultGeometry,
	          "Setup default geometry for dragger. ",
	          "");
	I_Method1(void, setPlaneColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setPlaneColor__C5_osg_Vec4_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, PlaneColor, 
	                 0, 
	                 __void__setPlaneColor__C5_osg_Vec4_R1);
END_REFLECTOR

