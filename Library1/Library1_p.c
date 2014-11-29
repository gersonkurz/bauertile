

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Nov 29 20:45:35 2014
 */
/* Compiler settings for C:\Users\Gerson\AppData\Local\Temp\Library1.idl-395ba811:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Library1_h.h"

#define TYPE_FORMAT_STRING_SIZE   639                               
#define PROC_FORMAT_STRING_SIZE   2425                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _Library1_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Library1_MIDL_TYPE_FORMAT_STRING;

typedef struct _Library1_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Library1_MIDL_PROC_FORMAT_STRING;

typedef struct _Library1_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Library1_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Library1_MIDL_TYPE_FORMAT_STRING Library1__MIDL_TypeFormatString;
extern const Library1_MIDL_PROC_FORMAT_STRING Library1__MIDL_ProcFormatString;
extern const Library1_MIDL_EXPR_FORMAT_STRING Library1__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_HSTRING_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_HSTRING_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIObservableVector_1_HSTRING_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_HSTRING_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterator_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterable_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVectorView_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVector_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVector_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIObservableVector_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterator_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterable_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVectorView_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVector_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVector_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIObservableVector_1_Library1__CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_Library1__CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CLibrary1_CILoggerEventHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CILoggerEventHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CLibrary1_CILogger_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CILogger_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIAsyncOperationCompletedHandler_1_Library1__CILogger_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperationCompletedHandler_1_Library1__CILogger_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIAsyncOperation_1_Library1__CILogger_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperation_1_Library1__CILogger_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CLibrary1_CIMyData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CIMyData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CLibrary1_CIRoot_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CIRoot_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const Library1_MIDL_PROC_FORMAT_STRING Library1__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter e */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VectorChanged */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x6 ),	/* 6 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x34 ),	/* 52 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 66 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter token */

/* 72 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VectorChanged */


	/* Procedure remove_VectorChanged */


	/* Procedure remove_VectorChanged */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x7 ),	/* 7 */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	NdrFcShort( 0x18 ),	/* 24 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */


	/* Parameter token */


	/* Parameter token */

/* 108 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Current */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x24 ),	/* 36 */
/* 134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter current */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasCurrent */


	/* Procedure get_HasCurrent */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x7 ),	/* 7 */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x21 ),	/* 33 */
/* 170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hasCurrent */


	/* Parameter hasCurrent */

/* 180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveNext */


	/* Procedure MoveNext */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x21 ),	/* 33 */
/* 206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hasCurrent */


	/* Parameter hasCurrent */

/* 216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x9 ),	/* 9 */
/* 236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 244 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter capacity */

/* 252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 258 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter actual */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure First */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter first */

/* 300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAt */


	/* Procedure GetAt */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */


	/* Parameter item */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */


	/* Procedure get_Size */


	/* Procedure get_Size */


	/* Procedure get_Size */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x7 ),	/* 7 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x24 ),	/* 36 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter size */


	/* Parameter size */


	/* Parameter size */


	/* Parameter size */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x3d ),	/* 61 */
/* 404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter index */

/* 420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x9 ),	/* 9 */
/* 446 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 448 */	NdrFcShort( 0x10 ),	/* 16 */
/* 450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 452 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 454 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 474 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter actual */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetView */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter view */

/* 516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x9 ),	/* 9 */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x3d ),	/* 61 */
/* 542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter index */

/* 558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAt */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xa ),	/* 10 */
/* 584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 586 */	NdrFcShort( 0x10 ),	/* 16 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertAt */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xb ),	/* 11 */
/* 626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 628 */	NdrFcShort( 0x10 ),	/* 16 */
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAt */


	/* Procedure RemoveAt */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0xc ),	/* 12 */
/* 668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Append */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xd ),	/* 13 */
/* 704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAtEnd */


	/* Procedure RemoveAtEnd */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0xe ),	/* 14 */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */


	/* Procedure Clear */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0xf ),	/* 15 */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 800 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 808 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 828 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter actual */

/* 834 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceAll */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x11 ),	/* 17 */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 862 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* 1 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x3 ),	/* 3 */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter e */

/* 918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xc4 ),	/* Type Offset=196 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VectorChanged */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x6 ),	/* 6 */
/* 938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x34 ),	/* 52 */
/* 944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 958 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter token */

/* 960 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Current */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x6 ),	/* 6 */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter current */

/* 996 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1022 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1024 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter capacity */

/* 1032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 1038 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1042 */	NdrFcShort( 0x102 ),	/* Type Offset=258 */

	/* Parameter actual */

/* 1044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure First */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter first */

/* 1080 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAt */


	/* Procedure GetAt */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */


	/* Parameter item */

/* 1122 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Return value */


	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x3d ),	/* 61 */
/* 1148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1150 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 1158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter index */

/* 1164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 1170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1190 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1192 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1194 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1196 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1198 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 1206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 1218 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1222 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter actual */

/* 1224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1232 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetView */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter view */

/* 1260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1280 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x3d ),	/* 61 */
/* 1286 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 1296 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter index */

/* 1302 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 1308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAt */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0xa ),	/* 10 */
/* 1328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 1350 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertAt */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0xb ),	/* 11 */
/* 1370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 1392 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Append */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0xd ),	/* 13 */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 1428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1432 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1448 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1450 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1456 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 1464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 1470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 1476 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1480 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter actual */

/* 1482 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceAll */

/* 1494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1510 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 1518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	NdrFcShort( 0x162 ),	/* Type Offset=354 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1552 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 1560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1564 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter e */

/* 1566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1570 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Return value */

/* 1572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VectorChanged */

/* 1578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1592 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1594 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1602 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1606 */	NdrFcShort( 0x19c ),	/* Type Offset=412 */

	/* Parameter token */

/* 1608 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1612 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1636 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 1644 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1648 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Return value */

/* 1650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_Name */

/* 1656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1670 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1672 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */


	/* Parameter value */

/* 1680 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1684 */	NdrFcShort( 0x1da ),	/* Type Offset=474 */

	/* Return value */


	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */


	/* Procedure put_Name */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1706 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1708 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */


	/* Parameter value */

/* 1716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1720 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Return value */


	/* Return value */

/* 1722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LogInfo */

/* 1728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1742 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1744 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1752 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1756 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInt32 */

/* 1764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1778 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1780 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pValue */

/* 1788 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_LoggerChanged */

/* 1800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0xa ),	/* 10 */
/* 1808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1814 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1828 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter token */

/* 1830 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1834 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_LoggerChanged */

/* 1842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0xb ),	/* 11 */
/* 1850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1852 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1856 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 1866 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1870 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 1872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 1878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asyncInfo */

/* 1902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1906 */	NdrFcShort( 0x1f6 ),	/* Type Offset=502 */

	/* Parameter status */

/* 1908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1912 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Completed */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	NdrFcShort( 0x208 ),	/* Type Offset=520 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Completed */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1970 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1980 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1984 */	NdrFcShort( 0x21a ),	/* Type Offset=538 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResults */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter results */

/* 2016 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Age */

/* 2028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Age */

/* 2064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLoggerAsync */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2114 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2124 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2128 */	NdrFcShort( 0x234 ),	/* Type Offset=564 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVector */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2160 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2164 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVectorInt */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2196 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2200 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 2202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVectorData */

/* 2208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2222 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2232 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2236 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ACLineStatus */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0xa ),	/* 10 */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BatteryFlag */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0xb ),	/* 11 */
/* 2288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BatteryLifePercent */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0xc ),	/* 12 */
/* 2324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2340 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BatteryLifeTime */

/* 2352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0xd ),	/* 13 */
/* 2360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BatteryFullLifeTime */

/* 2388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0xe ),	/* 14 */
/* 2396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Library1_MIDL_TYPE_FORMAT_STRING Library1__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x37500595 ),	/* 927991189 */
/*  8 */	NdrFcShort( 0xdcf0 ),	/* -8976 */
/* 10 */	NdrFcShort( 0x5d27 ),	/* 23847 */
/* 12 */	0xb8,		/* 184 */
			0xc4,		/* 196 */
/* 14 */	0xcf,		/* 207 */
			0x38,		/* 56 */
/* 16 */	0x8e,		/* 142 */
			0x37,		/* 55 */
/* 18 */	0x4d,		/* 77 */
			0xe8,		/* 232 */
/* 20 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 22 */	NdrFcLong( 0x575933df ),	/* 1465463775 */
/* 26 */	NdrFcShort( 0x34fe ),	/* 13566 */
/* 28 */	NdrFcShort( 0x4480 ),	/* 17536 */
/* 30 */	0xaf,		/* 175 */
			0x15,		/* 21 */
/* 32 */	0x7,		/* 7 */
			0x69,		/* 105 */
/* 34 */	0x1f,		/* 31 */
			0x3d,		/* 61 */
/* 36 */	0x5d,		/* 93 */
			0x9b,		/* 155 */
/* 38 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 40 */	NdrFcLong( 0xcb6c396f ),	/* -882099857 */
/* 44 */	NdrFcShort( 0x4861 ),	/* 18529 */
/* 46 */	NdrFcShort( 0x5296 ),	/* 21142 */
/* 48 */	0xb1,		/* 177 */
			0x4b,		/* 75 */
/* 50 */	0xbd,		/* 189 */
			0x90,		/* 144 */
/* 52 */	0xb9,		/* 185 */
			0x41,		/* 65 */
/* 54 */	0xa3,		/* 163 */
			0xe0,		/* 224 */
/* 56 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 66 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 68 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x0,	/* FC_RP */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 84 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 90 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 92 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 94 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 96 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 102 */	NdrFcLong( 0xbfea7f78 ),	/* -1075150984 */
/* 106 */	NdrFcShort( 0x50c2 ),	/* 20674 */
/* 108 */	NdrFcShort( 0x5f1d ),	/* 24349 */
/* 110 */	0xa6,		/* 166 */
			0xea,		/* 234 */
/* 112 */	0x9e,		/* 158 */
			0x97,		/* 151 */
/* 114 */	0x8d,		/* 141 */
			0x26,		/* 38 */
/* 116 */	0x99,		/* 153 */
			0xff,		/* 255 */
/* 118 */	
			0x11, 0x0,	/* FC_RP */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 136 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 138 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 140 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 146 */	NdrFcLong( 0x8d720cdf ),	/* -1921905441 */
/* 150 */	NdrFcShort( 0x3934 ),	/* 14644 */
/* 152 */	NdrFcShort( 0x5d3f ),	/* 23871 */
/* 154 */	0x9a,		/* 154 */
			0x55,		/* 85 */
/* 156 */	0x40,		/* 64 */
			0xe8,		/* 232 */
/* 158 */	0x6,		/* 6 */
			0x3b,		/* 59 */
/* 160 */	0x8,		/* 8 */
			0x6a,		/* 106 */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 176 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 180 */	NdrFcLong( 0x95c02345 ),	/* -1782570171 */
/* 184 */	NdrFcShort( 0x5b4a ),	/* 23370 */
/* 186 */	NdrFcShort( 0x5310 ),	/* 21264 */
/* 188 */	0xa6,		/* 166 */
			0xbf,		/* 191 */
/* 190 */	0xf1,		/* 241 */
			0x7e,		/* 126 */
/* 192 */	0xd,		/* 13 */
			0x68,		/* 104 */
/* 194 */	0x2d,		/* 45 */
			0xa7,		/* 167 */
/* 196 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 198 */	NdrFcLong( 0x575933df ),	/* 1465463775 */
/* 202 */	NdrFcShort( 0x34fe ),	/* 13566 */
/* 204 */	NdrFcShort( 0x4480 ),	/* 17536 */
/* 206 */	0xaf,		/* 175 */
			0x15,		/* 21 */
/* 208 */	0x7,		/* 7 */
			0x69,		/* 105 */
/* 210 */	0x1f,		/* 31 */
			0x3d,		/* 61 */
/* 212 */	0x5d,		/* 93 */
			0x9b,		/* 155 */
/* 214 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 216 */	NdrFcLong( 0xa6c4d746 ),	/* -1497049274 */
/* 220 */	NdrFcShort( 0xb4fb ),	/* -19205 */
/* 222 */	NdrFcShort( 0x58c8 ),	/* 22728 */
/* 224 */	0xb9,		/* 185 */
			0x19,		/* 25 */
/* 226 */	0xb3,		/* 179 */
			0x59,		/* 89 */
/* 228 */	0xd7,		/* 215 */
			0x76,		/* 118 */
/* 230 */	0x91,		/* 145 */
			0x3,		/* 3 */
/* 232 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 234 */	NdrFcShort( 0x2 ),	/* Offset= 2 (236) */
/* 236 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 238 */	NdrFcLong( 0x3ec5b5d7 ),	/* 1053144535 */
/* 242 */	NdrFcShort( 0x14a6 ),	/* 5286 */
/* 244 */	NdrFcShort( 0x4d0d ),	/* 19725 */
/* 246 */	0xbb,		/* 187 */
			0x96,		/* 150 */
/* 248 */	0x31,		/* 49 */
			0xda,		/* 218 */
/* 250 */	0x25,		/* 37 */
			0x22,		/* 34 */
/* 252 */	0x4a,		/* 74 */
			0x16,		/* 22 */
/* 254 */	
			0x11, 0x0,	/* FC_RP */
/* 256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (258) */
/* 258 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 266 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 268 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 272 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 274 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (236) */
/* 278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 280 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (284) */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0xc688854d ),	/* -964131507 */
/* 290 */	NdrFcShort( 0xa386 ),	/* -23674 */
/* 292 */	NdrFcShort( 0x54a3 ),	/* 21667 */
/* 294 */	0x89,		/* 137 */
			0xeb,		/* 235 */
/* 296 */	0x27,		/* 39 */
			0xdc,		/* 220 */
/* 298 */	0x24,		/* 36 */
			0x13,		/* 19 */
/* 300 */	0xba,		/* 186 */
			0x7,		/* 7 */
/* 302 */	
			0x11, 0x0,	/* FC_RP */
/* 304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (306) */
/* 306 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 314 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 316 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 320 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 322 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (236) */
/* 326 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 328 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (332) */
/* 332 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 334 */	NdrFcLong( 0x99d4842d ),	/* -1714125779 */
/* 338 */	NdrFcShort( 0xcb4e ),	/* -13490 */
/* 340 */	NdrFcShort( 0x545b ),	/* 21595 */
/* 342 */	0x9e,		/* 158 */
			0xaa,		/* 170 */
/* 344 */	0xb3,		/* 179 */
			0x9f,		/* 159 */
/* 346 */	0x8a,		/* 138 */
			0x74,		/* 116 */
/* 348 */	0x6c,		/* 108 */
			0x31,		/* 49 */
/* 350 */	
			0x11, 0x0,	/* FC_RP */
/* 352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (354) */
/* 354 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 364 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 368 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 370 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 372 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (236) */
/* 374 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 376 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 378 */	NdrFcLong( 0xda195628 ),	/* -635873752 */
/* 382 */	NdrFcShort( 0x6755 ),	/* 26453 */
/* 384 */	NdrFcShort( 0x5278 ),	/* 21112 */
/* 386 */	0x89,		/* 137 */
			0xb7,		/* 183 */
/* 388 */	0xed,		/* 237 */
			0xd3,		/* 211 */
/* 390 */	0xd1,		/* 209 */
			0xb9,		/* 185 */
/* 392 */	0xaf,		/* 175 */
			0x66,		/* 102 */
/* 394 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 396 */	NdrFcLong( 0x575933df ),	/* 1465463775 */
/* 400 */	NdrFcShort( 0x34fe ),	/* 13566 */
/* 402 */	NdrFcShort( 0x4480 ),	/* 17536 */
/* 404 */	0xaf,		/* 175 */
			0x15,		/* 21 */
/* 406 */	0x7,		/* 7 */
			0x69,		/* 105 */
/* 408 */	0x1f,		/* 31 */
			0x3d,		/* 61 */
/* 410 */	0x5d,		/* 93 */
			0x9b,		/* 155 */
/* 412 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 414 */	NdrFcLong( 0x8aff4a54 ),	/* -1962980780 */
/* 418 */	NdrFcShort( 0x9b40 ),	/* -25792 */
/* 420 */	NdrFcShort( 0x5b2a ),	/* 23338 */
/* 422 */	0xb5,		/* 181 */
			0x9c,		/* 156 */
/* 424 */	0x1e,		/* 30 */
			0x43,		/* 67 */
/* 426 */	0x4f,		/* 79 */
			0x85,		/* 133 */
/* 428 */	0xb7,		/* 183 */
			0x7e,		/* 126 */
/* 430 */	
			0x12, 0x0,	/* FC_UP */
/* 432 */	NdrFcShort( 0xe ),	/* Offset= 14 (446) */
/* 434 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 436 */	NdrFcShort( 0x2 ),	/* 2 */
/* 438 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 440 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 442 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 444 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 446 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 450 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (434) */
/* 452 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 454 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 456 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0xffde ),	/* Offset= -34 (430) */
/* 466 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 468 */	NdrFcShort( 0x6 ),	/* Offset= 6 (474) */
/* 470 */	
			0x13, 0x0,	/* FC_OP */
/* 472 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (446) */
/* 474 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (470) */
/* 484 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 486 */	NdrFcLong( 0x1fcd374b ),	/* 533542731 */
/* 490 */	NdrFcShort( 0x2c3c ),	/* 11324 */
/* 492 */	NdrFcShort( 0x49e3 ),	/* 18915 */
/* 494 */	0x93,		/* 147 */
			0xa7,		/* 167 */
/* 496 */	0x6f,		/* 111 */
			0xb8,		/* 184 */
/* 498 */	0x1,		/* 1 */
			0x8,		/* 8 */
/* 500 */	0xd,		/* 13 */
			0x45,		/* 69 */
/* 502 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 504 */	NdrFcLong( 0x86d43466 ),	/* -2032913306 */
/* 508 */	NdrFcShort( 0x4743 ),	/* 18243 */
/* 510 */	NdrFcShort( 0x53c7 ),	/* 21447 */
/* 512 */	0xaf,		/* 175 */
			0xce,		/* 206 */
/* 514 */	0xa7,		/* 167 */
			0xbe,		/* 190 */
/* 516 */	0xf7,		/* 247 */
			0x5c,		/* 92 */
/* 518 */	0x77,		/* 119 */
			0xfd,		/* 253 */
/* 520 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 522 */	NdrFcLong( 0xd7421a35 ),	/* -683533771 */
/* 526 */	NdrFcShort( 0xacd8 ),	/* -21288 */
/* 528 */	NdrFcShort( 0x5bfd ),	/* 23549 */
/* 530 */	0xbc,		/* 188 */
			0xbe,		/* 190 */
/* 532 */	0x7b,		/* 123 */
			0xde,		/* 222 */
/* 534 */	0xe1,		/* 225 */
			0x5a,		/* 90 */
/* 536 */	0x3b,		/* 59 */
			0x4d,		/* 77 */
/* 538 */	0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 540 */	NdrFcShort( 0xffec ),	/* Offset= -20 (520) */
/* 542 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (546) */
/* 546 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 548 */	NdrFcLong( 0x3ec4b4d6 ),	/* 1053078742 */
/* 552 */	NdrFcShort( 0x14a6 ),	/* 5286 */
/* 554 */	NdrFcShort( 0x4d0d ),	/* 19725 */
/* 556 */	0xbb,		/* 187 */
			0x96,		/* 150 */
/* 558 */	0x31,		/* 49 */
			0xda,		/* 218 */
/* 560 */	0x25,		/* 37 */
			0x22,		/* 34 */
/* 562 */	0x4a,		/* 74 */
			0x15,		/* 21 */
/* 564 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 566 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (502) */
/* 568 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (572) */
/* 572 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 574 */	NdrFcLong( 0x98b9acc1 ),	/* -1732662079 */
/* 578 */	NdrFcShort( 0x4b56 ),	/* 19286 */
/* 580 */	NdrFcShort( 0x532e ),	/* 21294 */
/* 582 */	0xac,		/* 172 */
			0x73,		/* 115 */
/* 584 */	0x3,		/* 3 */
			0xd5,		/* 213 */
/* 586 */	0x29,		/* 41 */
			0x1c,		/* 28 */
/* 588 */	0xca,		/* 202 */
			0x90,		/* 144 */
/* 590 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 592 */	NdrFcShort( 0x2 ),	/* Offset= 2 (594) */
/* 594 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 596 */	NdrFcLong( 0xb939af5b ),	/* -1187401893 */
/* 600 */	NdrFcShort( 0xb45d ),	/* -19363 */
/* 602 */	NdrFcShort( 0x5489 ),	/* 21641 */
/* 604 */	0x91,		/* 145 */
			0x49,		/* 73 */
/* 606 */	0x61,		/* 97 */
			0x44,		/* 68 */
/* 608 */	0x2c,		/* 44 */
			0x19,		/* 25 */
/* 610 */	0x5,		/* 5 */
			0xfe,		/* 254 */
/* 612 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 618 */	NdrFcLong( 0xe0401a94 ),	/* -532669804 */
/* 622 */	NdrFcShort( 0x4a64 ),	/* 19044 */
/* 624 */	NdrFcShort( 0x5d97 ),	/* 23959 */
/* 626 */	0xb6,		/* 182 */
			0x2e,		/* 46 */
/* 628 */	0xd7,		/* 215 */
			0xe3,		/* 227 */
/* 630 */	0x6f,		/* 111 */
			0xc7,		/* 199 */
/* 632 */	0x76,		/* 118 */
			0x4d,		/* 77 */
/* 634 */	0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 636 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_Library1_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0245, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0246, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0247, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0248, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0249, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0250, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0251, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0252, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0253, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0254, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0255, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0256, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0257, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0258, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0259, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0260, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0016, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0261, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0262, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0263, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0264, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0265, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __FVectorChangedEventHandler_1_HSTRING, ver. 0.0,
   GUID={0xcb6c396f,0x4861,0x5296,{0xb1,0x4b,0xbd,0x90,0xb9,0x41,0xa3,0xe0}} */

#pragma code_seg(".orpc")
static const unsigned short __FVectorChangedEventHandler_1_HSTRING_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_HSTRING_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_HSTRING_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FVectorChangedEventHandler_1_HSTRINGProxyVtbl = 
{
    &__FVectorChangedEventHandler_1_HSTRING_ProxyInfo,
    &IID___FVectorChangedEventHandler_1_HSTRING,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FVectorChangedEventHandler_1_HSTRING::Invoke */
};

const CInterfaceStubVtbl ___FVectorChangedEventHandler_1_HSTRINGStubVtbl =
{
    &IID___FVectorChangedEventHandler_1_HSTRING,
    &__FVectorChangedEventHandler_1_HSTRING_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0022, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0266, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0023, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __FIObservableVector_1_HSTRING, ver. 0.0,
   GUID={0x37500595,0xdcf0,0x5d27,{0xb8,0xc4,0xcf,0x38,0x8e,0x37,0x4d,0xe8}} */

#pragma code_seg(".orpc")
static const unsigned short __FIObservableVector_1_HSTRING_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    42,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_HSTRING_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIObservableVector_1_HSTRING_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___FIObservableVector_1_HSTRINGProxyVtbl = 
{
    &__FIObservableVector_1_HSTRING_ProxyInfo,
    &IID___FIObservableVector_1_HSTRING,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_HSTRING::add_VectorChanged */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_HSTRING::remove_VectorChanged */
};


static const PRPC_STUB_FUNCTION __FIObservableVector_1_HSTRING_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIObservableVector_1_HSTRINGStubVtbl =
{
    &IID___FIObservableVector_1_HSTRING,
    &__FIObservableVector_1_HSTRING_ServerInfo,
    8,
    &__FIObservableVector_1_HSTRING_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0267, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0025, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterator_1_int, ver. 0.0,
   GUID={0xbfea7f78,0x50c2,0x5f1d,{0xa6,0xea,0x9e,0x97,0x8d,0x26,0x99,0xff}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterator_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    120,
    156,
    192,
    228
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterator_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIIterator_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterator_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___FIIterator_1_intProxyVtbl = 
{
    &__FIIterator_1_int_ProxyInfo,
    &IID___FIIterator_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_int::get_Current */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_int::get_HasCurrent */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_int::MoveNext */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_int::GetMany */
};


static const PRPC_STUB_FUNCTION __FIIterator_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIIterator_1_intStubVtbl =
{
    &IID___FIIterator_1_int,
    &__FIIterator_1_int_ServerInfo,
    10,
    &__FIIterator_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0026, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0268, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0027, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterable_1_int, ver. 0.0,
   GUID={0x81a643fb,0xf51c,0x5565,{0x83,0xc4,0xf9,0x64,0x25,0x77,0x7b,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterable_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    276
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterable_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIIterable_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterable_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___FIIterable_1_intProxyVtbl = 
{
    &__FIIterable_1_int_ProxyInfo,
    &IID___FIIterable_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterable_1_int::First */
};


static const PRPC_STUB_FUNCTION __FIIterable_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIIterable_1_intStubVtbl =
{
    &IID___FIIterable_1_int,
    &__FIIterable_1_int_ServerInfo,
    7,
    &__FIIterable_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0028, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0269, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0029, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVectorView_1_int, ver. 0.0,
   GUID={0x8d720cdf,0x3934,0x5d3f,{0x9a,0x55,0x40,0xe8,0x06,0x3b,0x08,0x6a}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVectorView_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    312,
    354,
    390,
    438
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIVectorView_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___FIVectorView_1_intProxyVtbl = 
{
    &__FIVectorView_1_int_ProxyInfo,
    &IID___FIVectorView_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_int::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_int::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_int::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_int::GetMany */
};


static const PRPC_STUB_FUNCTION __FIVectorView_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIVectorView_1_intStubVtbl =
{
    &IID___FIVectorView_1_int,
    &__FIVectorView_1_int_ServerInfo,
    10,
    &__FIVectorView_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0030, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0270, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0031, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVector_1_int, ver. 0.0,
   GUID={0xb939af5b,0xb45d,0x5489,{0x91,0x49,0x61,0x44,0x2c,0x19,0x05,0xfe}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVector_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    312,
    354,
    492,
    528,
    576,
    618,
    660,
    696,
    732,
    762,
    792,
    846
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVector_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVector_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIVector_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVector_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___FIVector_1_intProxyVtbl = 
{
    &__FIVector_1_int_ProxyInfo,
    &IID___FIVector_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::GetView */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::SetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::InsertAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::RemoveAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::Append */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::RemoveAtEnd */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::Clear */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::GetMany */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_int::ReplaceAll */
};


static const PRPC_STUB_FUNCTION __FIVector_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIVector_1_intStubVtbl =
{
    &IID___FIVector_1_int,
    &__FIVector_1_int_ServerInfo,
    18,
    &__FIVector_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0032, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0271, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FVectorChangedEventHandler_1_int, ver. 0.0,
   GUID={0xa6c4d746,0xb4fb,0x58c8,{0xb9,0x19,0xb3,0x59,0xd7,0x76,0x91,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short __FVectorChangedEventHandler_1_int_FormatStringOffsetTable[] =
    {
    888
    };

static const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FVectorChangedEventHandler_1_intProxyVtbl = 
{
    &__FVectorChangedEventHandler_1_int_ProxyInfo,
    &IID___FVectorChangedEventHandler_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FVectorChangedEventHandler_1_int::Invoke */
};

const CInterfaceStubVtbl ___FVectorChangedEventHandler_1_intStubVtbl =
{
    &IID___FVectorChangedEventHandler_1_int,
    &__FVectorChangedEventHandler_1_int_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0034, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0272, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0035, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIObservableVector_1_int, ver. 0.0,
   GUID={0x95c02345,0x5b4a,0x5310,{0xa6,0xbf,0xf1,0x7e,0x0d,0x68,0x2d,0xa7}} */

#pragma code_seg(".orpc")
static const unsigned short __FIObservableVector_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    930,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIObservableVector_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___FIObservableVector_1_intProxyVtbl = 
{
    &__FIObservableVector_1_int_ProxyInfo,
    &IID___FIObservableVector_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_int::add_VectorChanged */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_int::remove_VectorChanged */
};


static const PRPC_STUB_FUNCTION __FIObservableVector_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIObservableVector_1_intStubVtbl =
{
    &IID___FIObservableVector_1_int,
    &__FIObservableVector_1_int_ServerInfo,
    8,
    &__FIObservableVector_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0273, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0037, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterator_1_Library1__CIMyData, ver. 0.0,
   GUID={0xc688854d,0xa386,0x54a3,{0x89,0xeb,0x27,0xdc,0x24,0x13,0xba,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterator_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    972,
    156,
    192,
    1008
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterator_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIIterator_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterator_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___FIIterator_1_Library1__CIMyDataProxyVtbl = 
{
    &__FIIterator_1_Library1__CIMyData_ProxyInfo,
    &IID___FIIterator_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Library1__CIMyData::get_Current */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Library1__CIMyData::get_HasCurrent */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Library1__CIMyData::MoveNext */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Library1__CIMyData::GetMany */
};


static const PRPC_STUB_FUNCTION __FIIterator_1_Library1__CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIIterator_1_Library1__CIMyDataStubVtbl =
{
    &IID___FIIterator_1_Library1__CIMyData,
    &__FIIterator_1_Library1__CIMyData_ServerInfo,
    10,
    &__FIIterator_1_Library1__CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0038, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0274, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0039, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterable_1_Library1__CIMyData, ver. 0.0,
   GUID={0xc6bcd316,0x4ad1,0x54a3,{0xa9,0xc6,0xff,0x14,0x15,0x62,0xb1,0xdc}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterable_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1056
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterable_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIIterable_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIIterable_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___FIIterable_1_Library1__CIMyDataProxyVtbl = 
{
    &__FIIterable_1_Library1__CIMyData_ProxyInfo,
    &IID___FIIterable_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterable_1_Library1__CIMyData::First */
};


static const PRPC_STUB_FUNCTION __FIIterable_1_Library1__CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIIterable_1_Library1__CIMyDataStubVtbl =
{
    &IID___FIIterable_1_Library1__CIMyData,
    &__FIIterable_1_Library1__CIMyData_ServerInfo,
    7,
    &__FIIterable_1_Library1__CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0275, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0041, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVectorView_1_Library1__CIMyData, ver. 0.0,
   GUID={0x99d4842d,0xcb4e,0x545b,{0x9e,0xaa,0xb3,0x9f,0x8a,0x74,0x6c,0x31}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVectorView_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1092,
    354,
    1134,
    1182
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIVectorView_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___FIVectorView_1_Library1__CIMyDataProxyVtbl = 
{
    &__FIVectorView_1_Library1__CIMyData_ProxyInfo,
    &IID___FIVectorView_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Library1__CIMyData::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Library1__CIMyData::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Library1__CIMyData::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Library1__CIMyData::GetMany */
};


static const PRPC_STUB_FUNCTION __FIVectorView_1_Library1__CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIVectorView_1_Library1__CIMyDataStubVtbl =
{
    &IID___FIVectorView_1_Library1__CIMyData,
    &__FIVectorView_1_Library1__CIMyData_ServerInfo,
    10,
    &__FIVectorView_1_Library1__CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0276, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVector_1_Library1__CIMyData, ver. 0.0,
   GUID={0xe0401a94,0x4a64,0x5d97,{0xb6,0x2e,0xd7,0xe3,0x6f,0xc7,0x76,0x4d}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVector_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1092,
    354,
    1236,
    1272,
    1320,
    1362,
    660,
    1404,
    732,
    762,
    1440,
    1494
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVector_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVector_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIVector_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIVector_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___FIVector_1_Library1__CIMyDataProxyVtbl = 
{
    &__FIVector_1_Library1__CIMyData_ProxyInfo,
    &IID___FIVector_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::GetView */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::SetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::InsertAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::RemoveAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::Append */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::RemoveAtEnd */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::Clear */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::GetMany */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Library1__CIMyData::ReplaceAll */
};


static const PRPC_STUB_FUNCTION __FIVector_1_Library1__CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIVector_1_Library1__CIMyDataStubVtbl =
{
    &IID___FIVector_1_Library1__CIMyData,
    &__FIVector_1_Library1__CIMyData_ServerInfo,
    18,
    &__FIVector_1_Library1__CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0044, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0277, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0045, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FVectorChangedEventHandler_1_Library1__CIMyData, ver. 0.0,
   GUID={0x8aff4a54,0x9b40,0x5b2a,{0xb5,0x9c,0x1e,0x43,0x4f,0x85,0xb7,0x7e}} */

#pragma code_seg(".orpc")
static const unsigned short __FVectorChangedEventHandler_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    1536
    };

static const MIDL_STUBLESS_PROXY_INFO __FVectorChangedEventHandler_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FVectorChangedEventHandler_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FVectorChangedEventHandler_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FVectorChangedEventHandler_1_Library1__CIMyDataProxyVtbl = 
{
    &__FVectorChangedEventHandler_1_Library1__CIMyData_ProxyInfo,
    &IID___FVectorChangedEventHandler_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FVectorChangedEventHandler_1_Library1__CIMyData::Invoke */
};

const CInterfaceStubVtbl ___FVectorChangedEventHandler_1_Library1__CIMyDataStubVtbl =
{
    &IID___FVectorChangedEventHandler_1_Library1__CIMyData,
    &__FVectorChangedEventHandler_1_Library1__CIMyData_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0278, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0047, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIObservableVector_1_Library1__CIMyData, ver. 0.0,
   GUID={0xda195628,0x6755,0x5278,{0x89,0xb7,0xed,0xd3,0xd1,0xb9,0xaf,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short __FIObservableVector_1_Library1__CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1578,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO __FIObservableVector_1_Library1__CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIObservableVector_1_Library1__CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIObservableVector_1_Library1__CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___FIObservableVector_1_Library1__CIMyDataProxyVtbl = 
{
    &__FIObservableVector_1_Library1__CIMyData_ProxyInfo,
    &IID___FIObservableVector_1_Library1__CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_Library1__CIMyData::add_VectorChanged */ ,
    (void *) (INT_PTR) -1 /* __FIObservableVector_1_Library1__CIMyData::remove_VectorChanged */
};


static const PRPC_STUB_FUNCTION __FIObservableVector_1_Library1__CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIObservableVector_1_Library1__CIMyDataStubVtbl =
{
    &IID___FIObservableVector_1_Library1__CIMyData,
    &__FIObservableVector_1_Library1__CIMyData_ServerInfo,
    8,
    &__FIObservableVector_1_Library1__CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0048, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CLibrary1_CILoggerEventHandler, ver. 0.0,
   GUID={0x1FCD374B,0x2C3C,0x49E3,{0x93,0xA7,0x6F,0xB8,0x01,0x08,0x0D,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CLibrary1_CILoggerEventHandler_FormatStringOffsetTable[] =
    {
    1620
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CILoggerEventHandler_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CILoggerEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CLibrary1_CILoggerEventHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CILoggerEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_CLibrary1_CILoggerEventHandlerProxyVtbl = 
{
    &__x_ABI_CLibrary1_CILoggerEventHandler_ProxyInfo,
    &IID___x_ABI_CLibrary1_CILoggerEventHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILoggerEventHandler::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_CLibrary1_CILoggerEventHandlerStubVtbl =
{
    &IID___x_ABI_CLibrary1_CILoggerEventHandler,
    &__x_ABI_CLibrary1_CILoggerEventHandler_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0049, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CLibrary1_CILogger, ver. 0.0,
   GUID={0x3EC4B4D6,0x14A6,0x4D0D,{0xBB,0x96,0x31,0xDA,0x25,0x22,0x4A,0x15}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CLibrary1_CILogger_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1656,
    1692,
    1728,
    1764,
    1800,
    1842
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CILogger_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CLibrary1_CILogger_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_CLibrary1_CILoggerProxyVtbl = 
{
    &__x_ABI_CLibrary1_CILogger_ProxyInfo,
    &IID___x_ABI_CLibrary1_CILogger,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::get_Name */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::put_Name */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::LogInfo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::GetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::add_LoggerChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CILogger::remove_LoggerChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_CLibrary1_CILogger_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CLibrary1_CILoggerStubVtbl =
{
    &IID___x_ABI_CLibrary1_CILogger,
    &__x_ABI_CLibrary1_CILogger_ServerInfo,
    12,
    &__x_ABI_CLibrary1_CILogger_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0050, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0279, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0051, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIAsyncOperationCompletedHandler_1_Library1__CILogger, ver. 0.0,
   GUID={0xd7421a35,0xacd8,0x5bfd,{0xbc,0xbe,0x7b,0xde,0xe1,0x5a,0x3b,0x4d}} */

#pragma code_seg(".orpc")
static const unsigned short __FIAsyncOperationCompletedHandler_1_Library1__CILogger_FormatStringOffsetTable[] =
    {
    1878
    };

static const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperationCompletedHandler_1_Library1__CILogger_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIAsyncOperationCompletedHandler_1_Library1__CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIAsyncOperationCompletedHandler_1_Library1__CILogger_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIAsyncOperationCompletedHandler_1_Library1__CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FIAsyncOperationCompletedHandler_1_Library1__CILoggerProxyVtbl = 
{
    &__FIAsyncOperationCompletedHandler_1_Library1__CILogger_ProxyInfo,
    &IID___FIAsyncOperationCompletedHandler_1_Library1__CILogger,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperationCompletedHandler_1_Library1__CILogger::Invoke */
};

const CInterfaceStubVtbl ___FIAsyncOperationCompletedHandler_1_Library1__CILoggerStubVtbl =
{
    &IID___FIAsyncOperationCompletedHandler_1_Library1__CILogger,
    &__FIAsyncOperationCompletedHandler_1_Library1__CILogger_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0052, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0280, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Library1_0000_0053, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIAsyncOperation_1_Library1__CILogger, ver. 0.0,
   GUID={0x86d43466,0x4743,0x53c7,{0xaf,0xce,0xa7,0xbe,0xf7,0x5c,0x77,0xfd}} */

#pragma code_seg(".orpc")
static const unsigned short __FIAsyncOperation_1_Library1__CILogger_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1920,
    1956,
    1992
    };

static const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperation_1_Library1__CILogger_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__FIAsyncOperation_1_Library1__CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIAsyncOperation_1_Library1__CILogger_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__FIAsyncOperation_1_Library1__CILogger_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___FIAsyncOperation_1_Library1__CILoggerProxyVtbl = 
{
    &__FIAsyncOperation_1_Library1__CILogger_ProxyInfo,
    &IID___FIAsyncOperation_1_Library1__CILogger,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_Library1__CILogger::put_Completed */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_Library1__CILogger::get_Completed */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_Library1__CILogger::GetResults */
};


static const PRPC_STUB_FUNCTION __FIAsyncOperation_1_Library1__CILogger_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIAsyncOperation_1_Library1__CILoggerStubVtbl =
{
    &IID___FIAsyncOperation_1_Library1__CILogger,
    &__FIAsyncOperation_1_Library1__CILogger_ServerInfo,
    9,
    &__FIAsyncOperation_1_Library1__CILogger_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0054, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CLibrary1_CIMyData, ver. 0.0,
   GUID={0x3EC5B5D7,0x14A6,0x4D0D,{0xBB,0x96,0x31,0xDA,0x25,0x22,0x4A,0x16}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CLibrary1_CIMyData_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1656,
    1692,
    2028,
    2064
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CIMyData_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CLibrary1_CIMyData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CIMyData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_CLibrary1_CIMyDataProxyVtbl = 
{
    &__x_ABI_CLibrary1_CIMyData_ProxyInfo,
    &IID___x_ABI_CLibrary1_CIMyData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIMyData::get_Name */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIMyData::put_Name */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIMyData::get_Age */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIMyData::put_Age */
};


static const PRPC_STUB_FUNCTION __x_ABI_CLibrary1_CIMyData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CLibrary1_CIMyDataStubVtbl =
{
    &IID___x_ABI_CLibrary1_CIMyData,
    &__x_ABI_CLibrary1_CIMyData_ServerInfo,
    10,
    &__x_ABI_CLibrary1_CIMyData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0055, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CLibrary1_CIRoot, ver. 0.0,
   GUID={0x3EC4B4D6,0x14A6,0x4D0D,{0xBB,0x96,0x31,0xDA,0x25,0x22,0x4A,0x16}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CLibrary1_CIRoot_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2100,
    2136,
    2172,
    2208,
    2244,
    2280,
    2316,
    2352,
    2388
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CLibrary1_CIRoot_ProxyInfo =
    {
    &Object_StubDesc,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CIRoot_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CLibrary1_CIRoot_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Library1__MIDL_ProcFormatString.Format,
    &__x_ABI_CLibrary1_CIRoot_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_CLibrary1_CIRootProxyVtbl = 
{
    &__x_ABI_CLibrary1_CIRoot_ProxyInfo,
    &IID___x_ABI_CLibrary1_CIRoot,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::GetLoggerAsync */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::GetVector */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::GetVectorInt */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::GetVectorData */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::get_ACLineStatus */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::get_BatteryFlag */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::get_BatteryLifePercent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::get_BatteryLifeTime */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CLibrary1_CIRoot::get_BatteryFullLifeTime */
};


static const PRPC_STUB_FUNCTION __x_ABI_CLibrary1_CIRoot_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CLibrary1_CIRootStubVtbl =
{
    &IID___x_ABI_CLibrary1_CIRoot,
    &__x_ABI_CLibrary1_CIRoot_ServerInfo,
    15,
    &__x_ABI_CLibrary1_CIRoot_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Library1_0000_0056, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Library1__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Library1_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___FIIterable_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIObservableVector_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVectorView_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperationCompletedHandler_1_Library1__CILoggerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIObservableVector_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FVectorChangedEventHandler_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CLibrary1_CILoggerEventHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIIterator_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FVectorChangedEventHandler_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVector_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperation_1_Library1__CILoggerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FVectorChangedEventHandler_1_HSTRINGProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIIterator_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVector_1_Library1__CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIObservableVector_1_HSTRINGProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CLibrary1_CILoggerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CLibrary1_CIRootProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CLibrary1_CIMyDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVectorView_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIIterable_1_intProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Library1_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___FIIterable_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIObservableVector_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVectorView_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperationCompletedHandler_1_Library1__CILoggerStubVtbl,
    ( CInterfaceStubVtbl *) &___FIObservableVector_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FVectorChangedEventHandler_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CLibrary1_CILoggerEventHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &___FIIterator_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FVectorChangedEventHandler_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVector_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperation_1_Library1__CILoggerStubVtbl,
    ( CInterfaceStubVtbl *) &___FVectorChangedEventHandler_1_HSTRINGStubVtbl,
    ( CInterfaceStubVtbl *) &___FIIterator_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVector_1_Library1__CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIObservableVector_1_HSTRINGStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CLibrary1_CILoggerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CLibrary1_CIRootStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CLibrary1_CIMyDataStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVectorView_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FIIterable_1_intStubVtbl,
    0
};

PCInterfaceName const _Library1_InterfaceNamesList[] = 
{
    "__FIIterable_1_Library1__CIMyData",
    "__FIObservableVector_1_Library1__CIMyData",
    "__FIVectorView_1_Library1__CIMyData",
    "__FIAsyncOperationCompletedHandler_1_Library1__CILogger",
    "__FIObservableVector_1_int",
    "__FVectorChangedEventHandler_1_int",
    "__x_ABI_CLibrary1_CILoggerEventHandler",
    "__FIIterator_1_Library1__CIMyData",
    "__FVectorChangedEventHandler_1_Library1__CIMyData",
    "__FIVector_1_int",
    "__FIAsyncOperation_1_Library1__CILogger",
    "__FVectorChangedEventHandler_1_HSTRING",
    "__FIIterator_1_int",
    "__FIVector_1_Library1__CIMyData",
    "__FIObservableVector_1_HSTRING",
    "__x_ABI_CLibrary1_CILogger",
    "__x_ABI_CLibrary1_CIRoot",
    "__x_ABI_CLibrary1_CIMyData",
    "__FIVectorView_1_int",
    "__FIIterable_1_int",
    0
};

const IID *  const _Library1_BaseIIDList[] = 
{
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    0,
    0,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _Library1_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Library1, pIID, n)

int __stdcall _Library1_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Library1, 20, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _Library1, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _Library1, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _Library1, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _Library1, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Library1, 20, *pIndex )
    
}

const ExtendedProxyFileInfo Library1_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Library1_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Library1_StubVtblList,
    (const PCInterfaceName * ) & _Library1_InterfaceNamesList,
    (const IID ** ) & _Library1_BaseIIDList,
    & _Library1_IID_Lookup, 
    20,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

