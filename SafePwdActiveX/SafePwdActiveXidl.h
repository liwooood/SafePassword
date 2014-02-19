

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Wed Feb 19 16:24:51 2014
 */
/* Compiler settings for SafePwdActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __SafePwdActiveXidl_h__
#define __SafePwdActiveXidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DSafePwdActiveX_FWD_DEFINED__
#define ___DSafePwdActiveX_FWD_DEFINED__
typedef interface _DSafePwdActiveX _DSafePwdActiveX;

#endif 	/* ___DSafePwdActiveX_FWD_DEFINED__ */


#ifndef ___DSafePwdActiveXEvents_FWD_DEFINED__
#define ___DSafePwdActiveXEvents_FWD_DEFINED__
typedef interface _DSafePwdActiveXEvents _DSafePwdActiveXEvents;

#endif 	/* ___DSafePwdActiveXEvents_FWD_DEFINED__ */


#ifndef __SafePwdActiveX_FWD_DEFINED__
#define __SafePwdActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class SafePwdActiveX SafePwdActiveX;
#else
typedef struct SafePwdActiveX SafePwdActiveX;
#endif /* __cplusplus */

#endif 	/* __SafePwdActiveX_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_SafePwdActiveX_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_SafePwdActiveX_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SafePwdActiveX_0000_0000_v0_0_s_ifspec;


#ifndef __SafePwdActiveXLib_LIBRARY_DEFINED__
#define __SafePwdActiveXLib_LIBRARY_DEFINED__

/* library SafePwdActiveXLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_SafePwdActiveXLib;

#ifndef ___DSafePwdActiveX_DISPINTERFACE_DEFINED__
#define ___DSafePwdActiveX_DISPINTERFACE_DEFINED__

/* dispinterface _DSafePwdActiveX */
/* [uuid] */ 


EXTERN_C const IID DIID__DSafePwdActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F684383E-5C9B-4096-955C-7F98DA3EAA68")
    _DSafePwdActiveX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSafePwdActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSafePwdActiveX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSafePwdActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSafePwdActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSafePwdActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSafePwdActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSafePwdActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSafePwdActiveX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DSafePwdActiveXVtbl;

    interface _DSafePwdActiveX
    {
        CONST_VTBL struct _DSafePwdActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSafePwdActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSafePwdActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSafePwdActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSafePwdActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSafePwdActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSafePwdActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSafePwdActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSafePwdActiveX_DISPINTERFACE_DEFINED__ */


#ifndef ___DSafePwdActiveXEvents_DISPINTERFACE_DEFINED__
#define ___DSafePwdActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSafePwdActiveXEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DSafePwdActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("472196CC-E84A-4005-B36D-C7E638825113")
    _DSafePwdActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSafePwdActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSafePwdActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSafePwdActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSafePwdActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSafePwdActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSafePwdActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSafePwdActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSafePwdActiveXEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DSafePwdActiveXEventsVtbl;

    interface _DSafePwdActiveXEvents
    {
        CONST_VTBL struct _DSafePwdActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSafePwdActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSafePwdActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSafePwdActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSafePwdActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSafePwdActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSafePwdActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSafePwdActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSafePwdActiveXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SafePwdActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("695D9AFC-099C-44FE-9E79-293A449421F0")
SafePwdActiveX;
#endif
#endif /* __SafePwdActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


