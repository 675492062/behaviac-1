/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _BEHAVIAC_EXTDEND_STRUCT_H_
#define _BEHAVIAC_EXTDEND_STRUCT_H_

#include "behaviac/common/rttibase.h"

#include "behaviac/common/string/fromstring.h"
#include "behaviac/common/string/tostring.h"

#include "behaviac/common/basictypes.h"
#include "behaviac/common/rttibase.h"

#include "behaviac/common/object/tagobject.h"
#include "behaviac/agent/agent.h"

//////////////////////////////////////////////////////////////////////////
//we declare a type "Float2" to simulate a type defined in a thirdparty lib
namespace TestNS
{
    struct Float2
    {
        float x;
        float y;
    };
}
//////////////////////////////////////////////////////////////////////////


//
struct myFloat2
{
    float x;
    float y;

    DECLARE_BEHAVIAC_STRUCT(myFloat2);

    myFloat2()
    {}

    myFloat2(const TestNS::Float2& v) : x(v.x), y(v.y)
    {
    }
};

BEHAVIAC_EXTEND_EXISTING_TYPE(myFloat2, TestNS::Float2);

namespace behaviac
{
    // ValueToString & ValueFromString
    namespace StringUtils
    {
        namespace Private
        {
            template<>
            inline behaviac::string ToString(const TestNS::Float2& val)
            {
                //myFloat2::ToString is defined by DECLARE_BEHAVIAC_STRUCT(myFloat2)
                myFloat2 temp(val);
                return temp.ToString();
            }

            template<>
            inline bool ParseString(const char* str, TestNS::Float2& val)
            {
                myFloat2 temp;

                //myFloat2::ParseString is defined by DECLARE_BEHAVIAC_STRUCT(myFloat2)
                if (temp.ParseString(str))
                {
                    val.x = temp.x;
                    val.y = temp.y;
                    return true;
                }

                return false;
            }
        }
    }
}

// SwapByteImplement helpers
template< typename SWAPPER >
inline void SwapByteImplement(TestNS::Float2& v)
{
    SwapByteImplement< SWAPPER >(v.x);
    SwapByteImplement< SWAPPER >(v.y);
}

//operators
namespace behaviac
{
    namespace PrivateDetails
    {
        //------------------------------------------------------------------------
        template<>
        inline bool Equal(const TestNS::Float2& lhs, const TestNS::Float2& rhs)
        {
            return behaviac::IsEqualWithEpsilon(lhs.x, rhs.x) && behaviac::IsEqualWithEpsilon(lhs.y, rhs.y);
        }
   }
}

//add the following to a cpp
//BEHAVIAC_BEGIN_STRUCT(myFloat2)
//{
//	BEHAVIAC_STRUCT_DISPLAYNAME(L"")
//	BEHAVIAC_STRUCT_DESC(L"")
//
//	BEHAVIAC_REGISTER_STRUCT_PROPERTY(x);
//	BEHAVIAC_REGISTER_STRUCT_PROPERTY(y);
//}
//BEHAVIAC_END_STRUCT()

//add the following to register/unregister
//behaviac::TypeRegister::Register<TestNS::Float2>("TestNS::Float2");
//behaviac::TypeRegister::UnRegister<TestNS::Float2>("TestNS::Float2");

#endif//_BEHAVIAC_EXTDEND_STRUCT_H_
