// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.0
//
// <auto-generated>
//
// Generated from file `sample.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <sample.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __Sample__Test__getStudent_name = "getStudent";

}
::IceProxy::Ice::Object* ::IceProxy::Sample::upCast(::IceProxy::Sample::Test* p) { return p; }

void
::IceProxy::Sample::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Sample::Test>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Sample::Test;
        v->__copyFrom(proxy);
    }
}

::Ice::Int
IceProxy::Sample::Test::getStudent(::Ice::Int id, ::std::string& name, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Sample__Test__getStudent_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Sample__Test__getStudent_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Sample::Test* __del = dynamic_cast< ::IceDelegate::Sample::Test*>(__delBase.get());
            return __del->getStudent(id, name, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Sample::Test::begin_getStudent(::Ice::Int id, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Sample__Test__getStudent_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Sample__Test__getStudent_name, __del, __cookie);
    try
    {
        __result->__prepare(__Sample__Test__getStudent_name, ::Ice::Idempotent, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Ice::Int
IceProxy::Sample::Test::end_getStudent(::std::string& name, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Sample__Test__getStudent_name);
    ::Ice::Int __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(name);
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::Sample::Test::ice_staticId()
{
    return ::Sample::Test::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Sample::Test::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Sample::Test);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Sample::Test::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Sample::Test);
}

::IceProxy::Ice::Object*
IceProxy::Sample::Test::__newInstance() const
{
    return new Test;
}

::Ice::Int
IceDelegateM::Sample::Test::getStudent(::Ice::Int id, ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Sample__Test__getStudent_name, ::Ice::Idempotent, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(name);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::Sample::Test::getStudent(::Ice::Int id, ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int __p_id, ::std::string& __p_name, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_id(__p_id),
            _m_name(__p_name)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Sample::Test* servant = dynamic_cast< ::Sample::Test*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getStudent(_m_id, _m_name, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_id;
        ::std::string& _m_name;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Sample__Test__getStudent_name, ::Ice::Idempotent, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, id, name, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* Sample::upCast(::Sample::Test* p) { return p; }

namespace
{
const ::std::string __Sample__Test_ids[2] =
{
    "::Ice::Object",
    "::Sample::Test"
};

}

bool
Sample::Test::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Sample__Test_ids, __Sample__Test_ids + 2, _s);
}

::std::vector< ::std::string>
Sample::Test::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Sample__Test_ids[0], &__Sample__Test_ids[2]);
}

const ::std::string&
Sample::Test::ice_id(const ::Ice::Current&) const
{
    return __Sample__Test_ids[1];
}

const ::std::string&
Sample::Test::ice_staticId()
{
    return __Sample__Test_ids[1];
}

::Ice::DispatchStatus
Sample::Test::___getStudent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int id;
    __is->read(id);
    __inS.endReadParams();
    ::std::string name;
    ::Ice::Int __ret = getStudent(id, name, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(name);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Sample__Test_all[] =
{
    "getStudent",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
Sample::Test::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Sample__Test_all, __Sample__Test_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Sample__Test_all)
    {
        case 0:
        {
            return ___getStudent(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Sample::Test::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Sample::Test::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Sample::__patch(TestPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Sample::TestPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Sample::Test::ice_staticId(), v);
    }
}
