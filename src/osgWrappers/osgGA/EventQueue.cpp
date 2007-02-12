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

#include <osg/Timer>
#include <osgGA/EventQueue>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >, osgGA::EventQueue::Events);

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgGA::EventQueue)
	I_BaseType(osg::Referenced);
	I_ConstructorWithDefaults1(IN, osgGA::GUIEventAdapter::MouseYOrientation, mouseYOrientation, osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS,
	                           Properties::NON_EXPLICIT,
	                           ____EventQueue__GUIEventAdapter_MouseYOrientation,
	                           "",
	                           "");
	I_Method1(void, setEvents, IN, osgGA::EventQueue::Events &, events,
	          Properties::NON_VIRTUAL,
	          __void__setEvents__Events_R1,
	          "Set events. ",
	          "");
	I_Method1(bool, takeEvents, IN, osgGA::EventQueue::Events &, events,
	          Properties::NON_VIRTUAL,
	          __bool__takeEvents__Events_R1,
	          "Take the entire event queue leaving the EventQueue' event queue empty. ",
	          "");
	I_Method1(bool, copyEvents, IN, osgGA::EventQueue::Events &, events,
	          Properties::NON_VIRTUAL,
	          __bool__copyEvents__Events_R1,
	          "Take a copy the entire event queue leaving the EventQueue' event queue intact. ",
	          "");
	I_Method1(void, appendEvents, IN, osgGA::EventQueue::Events &, events,
	          Properties::NON_VIRTUAL,
	          __void__appendEvents__Events_R1,
	          "Add events to end of event queue. ",
	          "");
	I_Method1(void, addEvent, IN, osgGA::GUIEventAdapter *, event,
	          Properties::NON_VIRTUAL,
	          __void__addEvent__GUIEventAdapter_P1,
	          "Add an event to the end of the event queue. ",
	          "");
	I_Method1(void, setUseFixedMouseInputRange, IN, bool, useFixedMouseInputRange,
	          Properties::NON_VIRTUAL,
	          __void__setUseFixedMouseInputRange__bool,
	          "Specify if mouse coordinates should be transformed into a pre defined input range, or whether they should be simply based on as local coordinates to the window that generated the mouse events. ",
	          "");
	I_Method0(bool, getUseFixedMouseInputRange,
	          Properties::NON_VIRTUAL,
	          __bool__getUseFixedMouseInputRange,
	          "Get whether the mouse coordinates should be transformed into a pre defined input range. ",
	          "");
	I_Method4(void, setMouseInputRange, IN, float, xMin, IN, float, yMin, IN, float, xMax, IN, float, yMax,
	          Properties::NON_VIRTUAL,
	          __void__setMouseInputRange__float__float__float__float,
	          "Set the mouse input range. ",
	          "");
	I_Method4(void, windowResize, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__windowResize__int__int__int__int,
	          "Method for adapting window resize event, placing this event on the back of the event queue. ",
	          "");
	I_Method5(void, windowResize, IN, int, x, IN, int, y, IN, int, width, IN, int, height, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__windowResize__int__int__int__int__double,
	          "Method for adapting window resize event, placing this event on the back of the event queue, with specified time. ",
	          "");
	I_Method1(void, mouseScroll, IN, osgGA::GUIEventAdapter::ScrollingMotion, sm,
	          Properties::NON_VIRTUAL,
	          __void__mouseScroll__GUIEventAdapter_ScrollingMotion,
	          "Method for adapting mouse scroll wheel events, placing this event on the back of the event queue. ",
	          "");
	I_Method2(void, mouseScroll, IN, osgGA::GUIEventAdapter::ScrollingMotion, sm, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseScroll__GUIEventAdapter_ScrollingMotion__double,
	          "Method for adapting mouse scroll wheel events, placing this event on the back of the event queue, with specified time. ",
	          "");
	I_Method2(void, mouseScroll2D, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __void__mouseScroll2D__float__float,
	          "Method for adapting mouse scroll wheel events, placing this event on the back of the event queue. ",
	          "");
	I_Method3(void, mouseScroll2D, IN, float, x, IN, float, y, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseScroll2D__float__float__double,
	          "Method for adapting mouse scroll wheel events, placing this event on the back of the event queue. ",
	          "");
	I_Method1(void, penPressure, IN, float, pressure,
	          Properties::NON_VIRTUAL,
	          __void__penPressure__float,
	          "Method for adapting pen pressure events, placing this event on the back of the event queue. ",
	          "");
	I_Method2(void, penPressure, IN, float, pressure, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__penPressure__float__double,
	          "Method for adapting pen pressure events, placing this event on the back of the event queue, with specified time. ",
	          "");
	I_Method2(void, penProximity, IN, osgGA::GUIEventAdapter::TabletPointerType, pt, IN, bool, isEntering,
	          Properties::NON_VIRTUAL,
	          __void__penProximity__GUIEventAdapter_TabletPointerType__bool,
	          "Method for adapting pen proximity events, placing this event on the back of the event queue. ",
	          "");
	I_Method3(void, penProximity, IN, osgGA::GUIEventAdapter::TabletPointerType, pt, IN, bool, isEntering, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__penProximity__GUIEventAdapter_TabletPointerType__bool__double,
	          "Method for adapting pen proximity events, placing this event on the back of the event queue, with specified time. ",
	          "");
	I_Method2(void, mouseWarped, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __void__mouseWarped__float__float,
	          "Method for updating in response to a mouse warp. ",
	          "Note, just moves the mouse position without creating a new event for it. ");
	I_Method2(void, mouseMotion, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __void__mouseMotion__float__float,
	          "Method for adapting mouse motion events, placing this event on the back of the event queue. ",
	          "");
	I_Method3(void, mouseMotion, IN, float, x, IN, float, y, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseMotion__float__float__double,
	          "Method for adapting mouse motion events, placing this event on the back of the event queue, with specified time. ",
	          "");
	I_Method3(void, mouseButtonPress, IN, float, x, IN, float, y, IN, unsigned int, button,
	          Properties::NON_VIRTUAL,
	          __void__mouseButtonPress__float__float__unsigned_int,
	          "Method for adapting mouse button pressed events, placing this event on the back of the event queue. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method4(void, mouseButtonPress, IN, float, x, IN, float, y, IN, unsigned int, button, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseButtonPress__float__float__unsigned_int__double,
	          "Method for adapting mouse button pressed events, placing this event on the back of the event queue, with specified time. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method3(void, mouseDoubleButtonPress, IN, float, x, IN, float, y, IN, unsigned int, button,
	          Properties::NON_VIRTUAL,
	          __void__mouseDoubleButtonPress__float__float__unsigned_int,
	          "Method for adapting mouse button pressed events, placing this event on the back of the event queue. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method4(void, mouseDoubleButtonPress, IN, float, x, IN, float, y, IN, unsigned int, button, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseDoubleButtonPress__float__float__unsigned_int__double,
	          "Method for adapting mouse button pressed events, placing this event on the back of the event queue, with specified time. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method3(void, mouseButtonRelease, IN, float, x, IN, float, y, IN, unsigned int, button,
	          Properties::NON_VIRTUAL,
	          __void__mouseButtonRelease__float__float__unsigned_int,
	          "Method for adapting mouse button release events, placing this event on the back of the event queue. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method4(void, mouseButtonRelease, IN, float, x, IN, float, y, IN, unsigned int, button, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__mouseButtonRelease__float__float__unsigned_int__double,
	          "Method for adapting mouse button release events, placing this event on the back of the event queue, with specified time. ",
	          "Button numbering is 1 for left mouse button, 2 for middle, 3 for right. ");
	I_Method1(void, keyPress, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__keyPress__int,
	          "Method for adapting keyboard press events. ",
	          "Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings. ");
	I_Method2(void, keyPress, IN, int, key, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__keyPress__int__double,
	          "Method for adapting keyboard press events. ",
	          "Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings, with specified time. ");
	I_Method1(void, keyRelease, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__keyRelease__int,
	          "Method for adapting keyboard press events. ",
	          "Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings. ");
	I_Method2(void, keyRelease, IN, int, key, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__keyRelease__int__double,
	          "Method for adapting keyboard press events. ",
	          "Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings, with specified time. ");
	I_Method0(void, closeWindow,
	          Properties::NON_VIRTUAL,
	          __void__closeWindow,
	          "Method for adapting close window events. ",
	          "");
	I_Method1(void, closeWindow, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__closeWindow__double,
	          "Method for adapting close window event with specified event time. ",
	          "");
	I_Method0(void, quitApplication,
	          Properties::NON_VIRTUAL,
	          __void__quitApplication,
	          "Method for adapting application quit events. ",
	          "");
	I_Method1(void, quitApplication, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__quitApplication__double,
	          "Method for adapting application quit events with specified event time. ",
	          "");
	I_Method1(void, frame, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__frame__double,
	          "Method for adapting frame events. ",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, tick,
	          Properties::NON_VIRTUAL,
	          __void__setStartTick__osg_Timer_t,
	          "",
	          "");
	I_Method0(osg::Timer_t, getStartTick,
	          Properties::NON_VIRTUAL,
	          __osg_Timer_t__getStartTick,
	          "",
	          "");
	I_Method0(double, getTime,
	          Properties::NON_VIRTUAL,
	          __double__getTime,
	          "",
	          "");
	I_Method0(osgGA::GUIEventAdapter *, createEvent,
	          Properties::NON_VIRTUAL,
	          __GUIEventAdapter_P1__createEvent,
	          "convinience method for create an event ready to fill in. ",
	          "Clones the getCurrentEventState() to produce a up to date event state. ");
	I_Method0(osgGA::GUIEventAdapter *, getCurrentEventState,
	          Properties::NON_VIRTUAL,
	          __GUIEventAdapter_P1__getCurrentEventState,
	          "",
	          "");
	I_Method0(const osgGA::GUIEventAdapter *, getCurrentEventState,
	          Properties::NON_VIRTUAL,
	          __C5_GUIEventAdapter_P1__getCurrentEventState,
	          "",
	          "");
	I_SimpleProperty(osgGA::GUIEventAdapter *, CurrentEventState, 
	                 __GUIEventAdapter_P1__getCurrentEventState, 
	                 0);
	I_SimpleProperty(osgGA::EventQueue::Events &, Events, 
	                 0, 
	                 __void__setEvents__Events_R1);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __osg_Timer_t__getStartTick, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(double, Time, 
	                 __double__getTime, 
	                 0);
	I_SimpleProperty(bool, UseFixedMouseInputRange, 
	                 __bool__getUseFixedMouseInputRange, 
	                 __void__setUseFixedMouseInputRange__bool);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgGA::GUIEventAdapter >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgGA::GUIEventAdapter *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgGA::GUIEventAdapter > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgGA::GUIEventAdapter *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgGA::GUIEventAdapter *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgGA::GUIEventAdapter > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgGA::GUIEventAdapter *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >);

