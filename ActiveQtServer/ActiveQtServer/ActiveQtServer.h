

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for x64\Debug\/ActiveQtServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
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
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ActiveQtServer_h__
#define __ActiveQtServer_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IOutputHelper_FWD_DEFINED__
#define __IOutputHelper_FWD_DEFINED__
typedef interface IOutputHelper IOutputHelper;

#endif 	/* __IOutputHelper_FWD_DEFINED__ */


#ifndef __IOutputHelperEvents_FWD_DEFINED__
#define __IOutputHelperEvents_FWD_DEFINED__
typedef interface IOutputHelperEvents IOutputHelperEvents;

#endif 	/* __IOutputHelperEvents_FWD_DEFINED__ */


#ifndef __OutputHelper_FWD_DEFINED__
#define __OutputHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class OutputHelper OutputHelper;
#else
typedef struct OutputHelper OutputHelper;
#endif /* __cplusplus */

#endif 	/* __OutputHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ActiveQtServer_0000_0000 */
/* [local] */ 

#pragma external_header(push)
#pragma external_header(pop)


extern RPC_IF_HANDLE __MIDL_itf_ActiveQtServer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ActiveQtServer_0000_0000_v0_0_s_ifspec;


#ifndef __ActiveQtServerLib_LIBRARY_DEFINED__
#define __ActiveQtServerLib_LIBRARY_DEFINED__

/* library ActiveQtServerLib */
/* [helpstring][version][uuid] */ 

/* [uuid] */ struct  DECLSPEC_UUID("34030F30-E359-4FE6-AB82-39766F5D91EE") QRect
    {
    int left;
    int top;
    int right;
    int bottom;
    } ;
/* [uuid] */ struct  DECLSPEC_UUID("CB5F84B3-29E5-491D-BA18-5472488EEFBA") QSize
    {
    int width;
    int height;
    } ;
/* [uuid] */ struct  DECLSPEC_UUID("3BE838A3-3FAC-BFC4-4C6C-37C44D030252") QPoint
    {
    int x;
    int y;
    } ;


enum MousePointer
    {
        ArrowCursor	= 0,
        UpArrowCursor	= 1,
        CrossCursor	= 2,
        WaitCursor	= 3,
        IBeamCursor	= 4,
        SizeVerCursor	= 5,
        SizeHorCursor	= 6,
        SizeBDiagCursor	= 7,
        SizeFDiagCursor	= 8,
        SizeAllCursor	= 9,
        BlankCursor	= 10,
        SplitVCursor	= 11,
        SplitHCursor	= 12,
        PointingHandCursor	= 13,
        ForbiddenCursor	= 14,
        WhatsThisCursor	= 15,
        BusyCursor	= 16
    } ;

enum FocusPolicy
    {
        NoFocus	= 0,
        TabFocus	= 1,
        ClickFocus	= 2,
        StrongFocus	= 11,
        WheelFocus	= 15
    } ;

EXTERN_C const IID LIBID_ActiveQtServerLib;

#ifndef __IOutputHelper_DISPINTERFACE_DEFINED__
#define __IOutputHelper_DISPINTERFACE_DEFINED__

/* dispinterface IOutputHelper */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOutputHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FB298DC5-6AE0-4E86-92C8-DF06105797B4")
    IOutputHelper : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOutputHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOutputHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOutputHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOutputHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOutputHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOutputHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOutputHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOutputHelper * This,
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
    } IOutputHelperVtbl;

    interface IOutputHelper
    {
        CONST_VTBL struct IOutputHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOutputHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOutputHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOutputHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOutputHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOutputHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOutputHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOutputHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOutputHelper_DISPINTERFACE_DEFINED__ */


#ifndef __IOutputHelperEvents_DISPINTERFACE_DEFINED__
#define __IOutputHelperEvents_DISPINTERFACE_DEFINED__

/* dispinterface IOutputHelperEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOutputHelperEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("37FB2D8B-F98F-4352-8E69-251FBB87AA4F")
    IOutputHelperEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOutputHelperEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOutputHelperEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOutputHelperEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOutputHelperEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOutputHelperEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOutputHelperEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOutputHelperEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOutputHelperEvents * This,
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
    } IOutputHelperEventsVtbl;

    interface IOutputHelperEvents
    {
        CONST_VTBL struct IOutputHelperEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOutputHelperEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOutputHelperEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOutputHelperEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOutputHelperEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOutputHelperEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOutputHelperEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOutputHelperEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOutputHelperEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_OutputHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("CD36361D-A1BA-4B83-8AD4-D485EF796AD6")
OutputHelper;
#endif
#endif /* __ActiveQtServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


