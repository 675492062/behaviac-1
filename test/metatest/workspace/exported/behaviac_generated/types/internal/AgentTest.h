﻿// ---------------------------------------------------------------------
// This agent file is auto-generated by behaviac designer,
// so you should not modify it manually, instead of by the designer.
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENTTEST_H_
#define _BEHAVIAC_AGENTTEST_H_

#include "behaviac_agent_headers.h"

class AgentTest : public behaviac::Agent
{
public:
	AgentTest();
	virtual ~AgentTest();

	BEHAVIAC_DECLARE_AGENTTYPE(AgentTest, behaviac::Agent)

private:
	int Property1;
public:
	inline void _set_Property1(int value)
	{
		Property1 = value;
	}
	inline int& _get_Property1()
	{
		return Property1;
	}

private:
	float Property2;
public:
	inline void _set_Property2(float value)
	{
		Property2 = value;
	}
	inline float& _get_Property2()
	{
		return Property2;
	}

public:
	bool Method(int param0);

public:
	void Method2();

#include "AgentTest.inc"
};

#endif
