// ---------------------------------------------------------------------
// This file is auto-generated by behaviac designer, so please don't modify it by yourself!
// ---------------------------------------------------------------------

#include "behaviac/behaviac.h"

#include "behaviac_generated_behaviors.h"
#include "behaviac_generated_behaviors_0.h"
#include "behaviac_generated_behaviors_1.h"
#include "behaviac_generated_behaviors_2.h"
#include "behaviac_generated_behaviors_3.h"
#include "behaviac_generated_behaviors_4.h"
#include "behaviac_generated_behaviors_5.h"
#include "behaviac_generated_behaviors_6.h"
#include "behaviac_generated_behaviors_7.h"
#include "behaviac_generated_behaviors_8.h"
#include "behaviac_generated_behaviors_9.h"
#include "behaviac_generated_behaviors_10.h"

namespace behaviac
{
	class CppGenerationManager : GenerationManager
	{
	public:
		CppGenerationManager()
		{
			SetInstance(this);
		}

		virtual void RegisterBehaviorsImplement()
		{
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/action_ut_1_2", bt_node_test_fsm_action_ut_1_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/bt_ref_fsm", bt_node_test_fsm_bt_ref_fsm::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/fsm_ref_bt_ut", bt_node_test_fsm_fsm_ref_bt_ut::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/fsm_ref_fsm_ut", bt_node_test_fsm_fsm_ref_fsm_ut::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/fsm_ut_0", bt_node_test_fsm_fsm_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/fsm/fsm_ut_1", bt_node_test_fsm_fsm_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/house/build_house", bt_node_test_htn_house_build_house::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/house/construct", bt_node_test_htn_house_construct::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/house/root", bt_node_test_htn_house_root::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/travel/root", bt_node_test_htn_travel_root::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/travel/travel", bt_node_test_htn_travel_travel::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/htn/travel/travel_by_air", bt_node_test_htn_travel_travel_by_air::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/PreconditionEffectorTest/PreconditionEffectorTest_0", bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/PreconditionEffectorTest/PreconditionEffectorTest_1", bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/PreconditionEffectorTest/PreconditionEffectorTest_2", bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/PreconditionEffectorTest/PreconditionEffectorTest_3", bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/repeat/repeat_ut_0", bt_node_test_repeat_repeat_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/repeat/repeat_ut_1", bt_node_test_repeat_repeat_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_child_agent_0", bt_node_test_action_child_agent_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_noop_ut_0", bt_node_test_action_noop_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_0", bt_node_test_action_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_1", bt_node_test_action_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_2", bt_node_test_action_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_3", bt_node_test_action_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_waitforsignal_0", bt_node_test_action_ut_waitforsignal_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_waitforsignal_1", bt_node_test_action_ut_waitforsignal_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_ut_waitforsignal_2", bt_node_test_action_ut_waitforsignal_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/action_waitframes_ut_0", bt_node_test_action_waitframes_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/circular_ut_0", bt_node_test_circular_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/condition_ut_0", bt_node_test_condition_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/condition_ut_1", bt_node_test_condition_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/condition_ut_2", bt_node_test_condition_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/condition_ut_3", bt_node_test_condition_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_alwaysfailure_ut_0", bt_node_test_decoration_alwaysfailure_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_alwaysrunning_ut_0", bt_node_test_decoration_alwaysrunning_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_alwayssuccess_ut_0", bt_node_test_decoration_alwayssuccess_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_countlimit_ut_0", bt_node_test_decoration_countlimit_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_countlimit_ut_1", bt_node_test_decoration_countlimit_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_countlimit_ut_2", bt_node_test_decoration_countlimit_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_countlimit_ut_3", bt_node_test_decoration_countlimit_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_failureuntil_ut_0", bt_node_test_decoration_failureuntil_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_failureuntil_ut_1", bt_node_test_decoration_failureuntil_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_frames_ut_0", bt_node_test_decoration_frames_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_log_ut_0", bt_node_test_decoration_log_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_loopuntil_ut_0", bt_node_test_decoration_loopuntil_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_loopuntil_ut_1", bt_node_test_decoration_loopuntil_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_loopuntil_ut_2", bt_node_test_decoration_loopuntil_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_loop_ut_0", bt_node_test_decoration_loop_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_loop_ut_1", bt_node_test_decoration_loop_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_not_ut_0", bt_node_test_decoration_not_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_not_ut_1", bt_node_test_decoration_not_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_not_ut_2", bt_node_test_decoration_not_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_successuntil_ut_0", bt_node_test_decoration_successuntil_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/decoration_successuntil_ut_1", bt_node_test_decoration_successuntil_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/enter_exit_action_ut_0", bt_node_test_enter_exit_action_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/enter_exit_action_ut_1", bt_node_test_enter_exit_action_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/enter_exit_action_ut_2", bt_node_test_enter_exit_action_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_0", bt_node_test_event_subtree_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_1", bt_node_test_event_subtree_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_2", bt_node_test_event_subtree_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_3", bt_node_test_event_subtree_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_4", bt_node_test_event_subtree_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_5", bt_node_test_event_subtree_5::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_subtree_6", bt_node_test_event_subtree_6::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_ut_0", bt_node_test_event_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_ut_1", bt_node_test_event_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_ut_2", bt_node_test_event_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_ut_3", bt_node_test_event_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/event_ut_4", bt_node_test_event_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/frames_ut_0", bt_node_test_frames_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/if_else_ut_0", bt_node_test_if_else_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/if_else_ut_1", bt_node_test_if_else_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/parallel_ut_0", bt_node_test_parallel_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/parallel_ut_1", bt_node_test_parallel_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/parallel_ut_2", bt_node_test_parallel_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/parallel_ut_3", bt_node_test_parallel_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/parallel_ut_4", bt_node_test_parallel_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_action_ut_0", bt_node_test_predicate_action_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_action_ut_1", bt_node_test_predicate_action_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_action_ut_2", bt_node_test_predicate_action_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_action_ut_3", bt_node_test_predicate_action_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_0", bt_node_test_predicate_selector_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_1", bt_node_test_predicate_selector_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_2", bt_node_test_predicate_selector_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_3", bt_node_test_predicate_selector_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_4", bt_node_test_predicate_selector_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_selector_ut_5", bt_node_test_predicate_selector_ut_5::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_0", bt_node_test_predicate_sequence_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_1", bt_node_test_predicate_sequence_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_2", bt_node_test_predicate_sequence_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_3", bt_node_test_predicate_sequence_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_4", bt_node_test_predicate_sequence_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/predicate_sequence_ut_5", bt_node_test_predicate_sequence_ut_5::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/reference_sub_0", bt_node_test_reference_sub_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/reference_sub_1", bt_node_test_reference_sub_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/reference_ut_0", bt_node_test_reference_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/reference_ut_1", bt_node_test_reference_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/reference_ut_2", bt_node_test_reference_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_0", bt_node_test_selector_loop_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_1", bt_node_test_selector_loop_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_2", bt_node_test_selector_loop_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_3", bt_node_test_selector_loop_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_4", bt_node_test_selector_loop_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_5", bt_node_test_selector_loop_ut_5::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_6", bt_node_test_selector_loop_ut_6::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_7", bt_node_test_selector_loop_ut_7::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_loop_ut_8", bt_node_test_selector_loop_ut_8::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_probability_ut_0", bt_node_test_selector_probability_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_probability_ut_1", bt_node_test_selector_probability_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_probability_ut_2", bt_node_test_selector_probability_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_probability_ut_3", bt_node_test_selector_probability_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_probability_ut_4", bt_node_test_selector_probability_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_stochastic_ut_0", bt_node_test_selector_stochastic_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_stochastic_ut_1", bt_node_test_selector_stochastic_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_stochastic_ut_2", bt_node_test_selector_stochastic_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_0", bt_node_test_selector_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_1", bt_node_test_selector_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_2", bt_node_test_selector_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_3", bt_node_test_selector_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_4", bt_node_test_selector_ut_4::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/selector_ut_5", bt_node_test_selector_ut_5::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_stochastic_ut_0", bt_node_test_sequence_stochastic_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_stochastic_ut_1", bt_node_test_sequence_stochastic_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_stochastic_ut_2", bt_node_test_sequence_stochastic_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_stochastic_ut_3", bt_node_test_sequence_stochastic_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_ut_0", bt_node_test_sequence_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_ut_1", bt_node_test_sequence_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_ut_2", bt_node_test_sequence_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/sequence_ut_3", bt_node_test_sequence_ut_3::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/wait_ut_0", bt_node_test_wait_ut_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/wait_ut_1", bt_node_test_wait_ut_1::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("node_test/wait_ut_2", bt_node_test_wait_ut_2::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/cast_param", bt_par_test_cast_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/const_param", bt_par_test_const_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/custom_property_as_left_value_and_param", bt_par_test_custom_property_as_left_value_and_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/custom_property_reset", bt_par_test_custom_property_reset::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/local_out_scope", bt_par_test_local_out_scope::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/par_as_left_value_and_param", bt_par_test_par_as_left_value_and_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/par_as_ref_param", bt_par_test_par_as_ref_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/property_as_left_value", bt_par_test_property_as_left_value::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/property_as_left_value_and_param", bt_par_test_property_as_left_value_and_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/property_as_ref_param", bt_par_test_property_as_ref_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/readonly_default", bt_par_test_readonly_default::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/register_name_as_left_value_and_param", bt_par_test_register_name_as_left_value_and_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/static_member_function_test_0", bt_par_test_static_member_function_test_0::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/static_property_as_left_value_and_param", bt_par_test_static_property_as_left_value_and_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/static_property_as_ref_param", bt_par_test_static_property_as_ref_param::Create);
			Workspace::GetInstance()->RegisterBehaviorTreeCreator("par_test/vector_test", bt_par_test_vector_test::Create);
		}
	};

	CppGenerationManager _cppGenerationManager_;
}
