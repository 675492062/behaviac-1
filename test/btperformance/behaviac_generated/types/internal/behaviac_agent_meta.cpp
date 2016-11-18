﻿// ---------------------------------------------------------------------
// This file is auto-generated by behaviac designer, so please don't modify it by yourself!
// ---------------------------------------------------------------------

#include "behaviac_agent_meta.h"

namespace behaviac
{
	class CppBehaviorLoaderImplement : CppBehaviorLoader
	{
	public:
		CppBehaviorLoaderImplement()
		{
			AgentMeta::SetInstance(this);
		}

		virtual ~CppBehaviorLoaderImplement()
		{
		}

		virtual bool load()
		{
			class CMethod_behaviac_Agent_VectorAdd : public CAgentMethodVoidBase
			{
				IInstanceMember* _param0;
				IInstanceMember* _param1;

			public: 
				CMethod_behaviac_Agent_VectorAdd() : _param0(0) , _param1(0) 
				{
				}

				CMethod_behaviac_Agent_VectorAdd(CMethod_behaviac_Agent_VectorAdd &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) , _param1(0) 
				{
				}

				~CMethod_behaviac_Agent_VectorAdd()
				{
					BEHAVIAC_DELETE _param0;
					BEHAVIAC_DELETE _param1;
				}

				virtual IInstanceMember* clone()
				{
					return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd(*this);
				}

				virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
				{
					BEHAVIAC_ASSERT(paramStrs.size() == 2);

					StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
					_param0 = AgentMeta::TParseProperty<IList>(paramStrs[0].c_str());
					_param1 = AgentMeta::TParseProperty<System::Object>(paramStrs[1].c_str());
				}

				virtual void run(Agent* self)
				{
					BEHAVIAC_ASSERT(_param0 != NULL);
					BEHAVIAC_ASSERT(_param1 != NULL);

					behaviac::Agent::VectorAdd(*(IList*)_param0->GetValueObject(self), *(System::Object*)_param1->GetValueObject(self));
				}
			};

			class CMethod_behaviac_Agent_VectorClear : public CAgentMethodVoidBase
			{
				IInstanceMember* _param0;

			public: 
				CMethod_behaviac_Agent_VectorClear() : _param0(0) 
				{
				}

				CMethod_behaviac_Agent_VectorClear(CMethod_behaviac_Agent_VectorClear &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) 
				{
				}

				~CMethod_behaviac_Agent_VectorClear()
				{
					BEHAVIAC_DELETE _param0;
				}

				virtual IInstanceMember* clone()
				{
					return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear(*this);
				}

				virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
				{
					BEHAVIAC_ASSERT(paramStrs.size() == 1);

					StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
					_param0 = AgentMeta::TParseProperty<IList>(paramStrs[0].c_str());
				}

				virtual void run(Agent* self)
				{
					BEHAVIAC_ASSERT(_param0 != NULL);

					behaviac::Agent::VectorClear(*(IList*)_param0->GetValueObject(self));
				}
			};

			class CMethod_behaviac_Agent_VectorContains : public CAgentMethodBase<bool>
			{
				IInstanceMember* _param0;
				IInstanceMember* _param1;

			public: 
				CMethod_behaviac_Agent_VectorContains() : _param0(0) , _param1(0) 
				{
				}

				CMethod_behaviac_Agent_VectorContains(CMethod_behaviac_Agent_VectorContains &rhs) : CAgentMethodBase<bool>(rhs) , _param0(0) , _param1(0) 
				{
				}

				~CMethod_behaviac_Agent_VectorContains()
				{
					BEHAVIAC_DELETE _param0;
					BEHAVIAC_DELETE _param1;
				}

				virtual IInstanceMember* clone()
				{
					return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains(*this);
				}

				virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
				{
					BEHAVIAC_ASSERT(paramStrs.size() == 2);

					StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
					_param0 = AgentMeta::TParseProperty<IList>(paramStrs[0].c_str());
					_param1 = AgentMeta::TParseProperty<System::Object>(paramStrs[1].c_str());
				}

				virtual void run(Agent* self)
				{
					BEHAVIAC_ASSERT(_param0 != NULL);
					BEHAVIAC_ASSERT(_param1 != NULL);

					_returnValue->value = behaviac::Agent::VectorContains(*(IList*)_param0->GetValueObject(self), *(System::Object*)_param1->GetValueObject(self));
				}
			};

			class CMethod_behaviac_Agent_VectorLength : public CAgentMethodBase<int>
			{
				IInstanceMember* _param0;

			public: 
				CMethod_behaviac_Agent_VectorLength() : _param0(0) 
				{
				}

				CMethod_behaviac_Agent_VectorLength(CMethod_behaviac_Agent_VectorLength &rhs) : CAgentMethodBase<int>(rhs) , _param0(0) 
				{
				}

				~CMethod_behaviac_Agent_VectorLength()
				{
					BEHAVIAC_DELETE _param0;
				}

				virtual IInstanceMember* clone()
				{
					return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength(*this);
				}

				virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
				{
					BEHAVIAC_ASSERT(paramStrs.size() == 1);

					StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
					_param0 = AgentMeta::TParseProperty<IList>(paramStrs[0].c_str());
				}

				virtual void run(Agent* self)
				{
					BEHAVIAC_ASSERT(_param0 != NULL);

					_returnValue->value = behaviac::Agent::VectorLength(*(IList*)_param0->GetValueObject(self));
				}
			};

			class CMethod_behaviac_Agent_VectorRemove : public CAgentMethodVoidBase
			{
				IInstanceMember* _param0;
				IInstanceMember* _param1;

			public: 
				CMethod_behaviac_Agent_VectorRemove() : _param0(0) , _param1(0) 
				{
				}

				CMethod_behaviac_Agent_VectorRemove(CMethod_behaviac_Agent_VectorRemove &rhs) : CAgentMethodVoidBase(rhs) , _param0(0) , _param1(0) 
				{
				}

				~CMethod_behaviac_Agent_VectorRemove()
				{
					BEHAVIAC_DELETE _param0;
					BEHAVIAC_DELETE _param1;
				}

				virtual IInstanceMember* clone()
				{
					return BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove(*this);
				}

				virtual void load(const char* instance, behaviac::vector<behaviac::string>& paramStrs)
				{
					BEHAVIAC_ASSERT(paramStrs.size() == 2);

					StringUtils::StringCopySafe(kInstanceNameMax, _instance, instance);
					_param0 = AgentMeta::TParseProperty<IList>(paramStrs[0].c_str());
					_param1 = AgentMeta::TParseProperty<System::Object>(paramStrs[1].c_str());
				}

				virtual void run(Agent* self)
				{
					BEHAVIAC_ASSERT(_param0 != NULL);
					BEHAVIAC_ASSERT(_param1 != NULL);

					behaviac::Agent::VectorRemove(*(IList*)_param0->GetValueObject(self), *(System::Object*)_param1->GetValueObject(self));
				}
			};

			AgentMeta::SetTotalSignature(56344845u);

			AgentMeta* meta = NULL;
			BEHAVIAC_UNUSED_VAR(meta);

			// behaviac::Agent
			meta = BEHAVIAC_NEW AgentMeta(124923603u);
			AgentMeta::GetAgentMetas()[1770892321u] = meta;
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_behaviac_Agent_LogMessage));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			// CPerformanceAgent
			meta = BEHAVIAC_NEW AgentMeta(3486056263u);
			AgentMeta::GetAgentMetas()[3434982360u] = meta;
			meta->RegisterMemberProperty(1539647929u, BEHAVIAC_NEW CMemberProperty< float >("DistanceToEnemy", Set_CPerformanceAgent_DistanceToEnemy, Get_CPerformanceAgent_DistanceToEnemy));
			meta->RegisterMemberProperty(3361514745u, BEHAVIAC_NEW CMemberProperty< float >("Food", Set_CPerformanceAgent_Food, Get_CPerformanceAgent_Food));
			meta->RegisterMemberProperty(713213677u, BEHAVIAC_NEW CMemberProperty< float >("HP", Set_CPerformanceAgent_HP, Get_CPerformanceAgent_HP));
			meta->RegisterMemberProperty(2390776527u, BEHAVIAC_NEW CMemberProperty< float >("Hungry", Set_CPerformanceAgent_Hungry, Get_CPerformanceAgent_Hungry));
			meta->RegisterMethod(3913204915u, BEHAVIAC_NEW CAgentMethod< behaviac::EBTStatus >(FunctionPointer_CPerformanceAgent_Eat));
			meta->RegisterMethod(1289498731u, BEHAVIAC_NEW CAgentMethod< behaviac::EBTStatus >(FunctionPointer_CPerformanceAgent_Fidget));
			meta->RegisterMethod(3771923015u, BEHAVIAC_NEW CAgentMethodVoid(FunctionPointer_CPerformanceAgent_Fire));
			meta->RegisterMethod(3146209884u, BEHAVIAC_NEW CAgentMethod< behaviac::EBTStatus >(FunctionPointer_CPerformanceAgent_RunAway));
			meta->RegisterMethod(4070250938u, BEHAVIAC_NEW CAgentMethod< behaviac::EBTStatus >(FunctionPointer_CPerformanceAgent_SearchForFood));
			meta->RegisterMethod(1870214581u, BEHAVIAC_NEW CAgentMethod< behaviac::EBTStatus >(FunctionPointer_CPerformanceAgent_Wander));
			meta->RegisterMethod(1045109914u, BEHAVIAC_NEW CAgentStaticMethodVoid_1<char*>(FunctionPointer_CPerformanceAgent_LogMessage));
			meta->RegisterMethod(2521019022u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorAdd());
			meta->RegisterMethod(2306090221u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorClear());
			meta->RegisterMethod(3483755530u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorContains());
			meta->RegisterMethod(505785840u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorLength());
			meta->RegisterMethod(502968959u, BEHAVIAC_NEW CMethod_behaviac_Agent_VectorRemove());

			AgentMeta::Register<behaviac::Agent>("behaviac::Agent");
			AgentMeta::Register<CPerformanceAgent>("CPerformanceAgent");
			AgentMeta::Register<behaviac::EBTStatus>("behaviac::EBTStatus");

			return true;
		}

		virtual bool unLoad()
		{
			AgentMeta::UnRegister<behaviac::Agent>("behaviac::Agent");
			AgentMeta::UnRegister<CPerformanceAgent>("CPerformanceAgent");
			AgentMeta::UnRegister<behaviac::EBTStatus>("behaviac::EBTStatus");

			return true;
		}
	};

	CppBehaviorLoaderImplement _cppBehaviorLoaderImplement_;
}
