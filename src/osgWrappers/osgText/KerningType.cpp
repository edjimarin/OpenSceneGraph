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

#include <osgText/KerningType>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::pair< unsigned int COMMA  unsigned int >, osgText::FontResolution)

BEGIN_ENUM_REFLECTOR(osgText::KerningType)
	I_DeclaringFile("osgText/KerningType");
	I_EnumLabel(osgText::KERNING_DEFAULT);
	I_EnumLabel(osgText::KERNING_UNFITTED);
	I_EnumLabel(osgText::KERNING_NONE);
END_REFLECTOR

STD_PAIR_REFLECTOR(std::pair< unsigned int COMMA  unsigned int >)
