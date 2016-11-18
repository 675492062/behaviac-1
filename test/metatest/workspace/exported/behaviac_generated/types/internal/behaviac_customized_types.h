﻿// ---------------------------------------------------------------------
// This file is auto-generated by behaviac designer, so please don't modify it by yourself!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_CUSTOMIZED_TYPES_H_
#define _BEHAVIAC_CUSTOMIZED_TYPES_H_

#include "behaviac/agent/agent.h"

// -------------------
// Customized enums
// -------------------

enum EnumTest
{
	AAA,
	BBB,
	CCC,
};

// -------------------
// Customized structs
// -------------------

struct StructTest
{
	int Member1;
	unsigned int Member2;
	double Member3;

DECLARE_BEHAVIAC_STRUCT(StructTest);
};

DECLARE_BEHAVIAC_ENUM(EnumTest, EnumTest);

BEHAVIAC_DECLARE_TYPE_VECTOR_HANDLER(StructTest);
#endif // _BEHAVIAC_CUSTOMIZED_TYPES_H_