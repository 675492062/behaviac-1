﻿// ---------------------------------------------------------------------
// This file is auto-generated by behaviac designer, so please don't modify it by yourself!
// ---------------------------------------------------------------------

#ifndef BEHAVIAC_TYPES_H
#define BEHAVIAC_TYPES_H

#include "behaviac/behaviac.h"
#include "behaviac/behaviortree/behaviortree.h"
#include "behaviac/agent/agent.h"
#include "behaviac/base/meta.h"

#include "behaviac/behaviortree/nodes/actions/action.h"
#include "behaviac/behaviortree/nodes/actions/assignment.h"
#include "behaviac/behaviortree/nodes/actions/compute.h"
#include "behaviac/behaviortree/nodes/actions/noop.h"
#include "behaviac/behaviortree/nodes/actions/wait.h"
#include "behaviac/behaviortree/nodes/actions/waitforsignal.h"
#include "behaviac/behaviortree/nodes/actions/waitframes.h"
#include "behaviac/behaviortree/nodes/composites/compositestochastic.h"
#include "behaviac/behaviortree/nodes/composites/ifelse.h"
#include "behaviac/behaviortree/nodes/composites/parallel.h"
#include "behaviac/behaviortree/nodes/composites/referencebehavior.h"
#include "behaviac/behaviortree/nodes/composites/selector.h"
#include "behaviac/behaviortree/nodes/composites/selectorloop.h"
#include "behaviac/behaviortree/nodes/composites/selectorprobability.h"
#include "behaviac/behaviortree/nodes/composites/selectorstochastic.h"
#include "behaviac/behaviortree/nodes/composites/sequence.h"
#include "behaviac/behaviortree/nodes/composites/sequencestochastic.h"
#include "behaviac/behaviortree/nodes/composites/withprecondition.h"
#include "behaviac/behaviortree/nodes/conditions/and.h"
#include "behaviac/behaviortree/nodes/conditions/conditionbase.h"
#include "behaviac/behaviortree/nodes/conditions/condition.h"
#include "behaviac/behaviortree/nodes/conditions/false.h"
#include "behaviac/behaviortree/nodes/conditions/or.h"
#include "behaviac/behaviortree/nodes/conditions/true.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwaysfailure.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwaysrunning.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoralwayssuccess.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorcount.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorcountlimit.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorfailureuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorframes.h"
#include "behaviac/behaviortree/nodes/decorators/decoratoriterator.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorlog.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorloop.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorloopuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratornot.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorrepeat.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorsuccessuntil.h"
#include "behaviac/behaviortree/nodes/decorators/decoratortime.h"
#include "behaviac/behaviortree/nodes/decorators/decoratorweight.h"
#include "behaviac/behaviortree/attachments/event.h"
#include "behaviac/behaviortree/attachments/attachaction.h"
#include "behaviac/behaviortree/attachments/precondition.h"
#include "behaviac/behaviortree/attachments/effector.h"
#include "behaviac/htn/task.h"
#include "behaviac/fsm/fsm.h"
#include "behaviac/fsm/state.h"
#include "behaviac/fsm/startcondition.h"
#include "behaviac/fsm/transitioncondition.h"
#include "behaviac/fsm/waitstate.h"
#include "behaviac/fsm/waitframesstate.h"
#include "behaviac/fsm/alwaystransition.h"
#include "behaviac/fsm/waittransition.h"

#include "internal/behaviac_agent_headers.h"
#include "internal/behaviac_agent_member_visitor.h"
#include "internal/behaviac_customized_types.h"

#endif // BEHAVIAC_TYPES_H
