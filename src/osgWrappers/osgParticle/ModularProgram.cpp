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

#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgParticle/ModularProgram>
#include <osgParticle/Operator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgParticle::ModularProgram)
	I_BaseType(osgParticle::Program);
	I_Constructor0(____ModularProgram,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::ModularProgram &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ModularProgram__C5_ModularProgram_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method0(int, numOperators,
	          Properties::NON_VIRTUAL,
	          __int__numOperators,
	          "Get the number of operators. ",
	          "");
	I_Method1(void, addOperator, IN, osgParticle::Operator *, o,
	          Properties::NON_VIRTUAL,
	          __void__addOperator__Operator_P1,
	          "Add an operator to the list. ",
	          "");
	I_Method1(osgParticle::Operator *, getOperator, IN, int, i,
	          Properties::NON_VIRTUAL,
	          __Operator_P1__getOperator__int,
	          "Get a pointer to an operator in the list. ",
	          "");
	I_Method1(const osgParticle::Operator *, getOperator, IN, int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Operator_P1__getOperator__int,
	          "Get a const pointer to an operator in the list. ",
	          "");
	I_Method1(void, removeOperator, IN, int, i,
	          Properties::NON_VIRTUAL,
	          __void__removeOperator__int,
	          "Remove an operator from the list. ",
	          "");
END_REFLECTOR

