

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ActiveQtServerLib,0x3C98A247,0xEC4A,0x4D68,0x9E,0x1A,0x2A,0x3A,0xED,0xC7,0xDB,0xAD);


MIDL_DEFINE_GUID(IID, DIID_IOutputHelper,0xFB298DC5,0x6AE0,0x4E86,0x92,0xC8,0xDF,0x06,0x10,0x57,0x97,0xB4);


MIDL_DEFINE_GUID(IID, DIID_IOutputHelperEvents,0x37FB2D8B,0xF98F,0x4352,0x8E,0x69,0x25,0x1F,0xBB,0x87,0xAA,0x4F);


MIDL_DEFINE_GUID(CLSID, CLSID_OutputHelper,0xCD36361D,0xA1BA,0x4B83,0x8A,0xD4,0xD4,0x85,0xEF,0x79,0x6A,0xD6);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



