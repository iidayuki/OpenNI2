/*****************************************************************************
*                                                                            *
*  PrimeSense PSCommon Library                                               *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of PSCommon.                                            *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
#ifndef _XN_PLATFORM_LINUX_X86_H_
#define _XN_PLATFORM_LINUX_X86_H_

//---------------------------------------------------------------------------
// Prerequisites
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <limits.h>

//---------------------------------------------------------------------------
// Platform Basic Definition
//---------------------------------------------------------------------------
#define XN_PLATFORM XN_PLATFORM_LINUX_X86
#define XN_PLATFORM_STRING "Linux-x86"

//---------------------------------------------------------------------------
// Platform Capabilities
//---------------------------------------------------------------------------
#define XN_PLATFORM_ENDIAN_TYPE XN_PLATFORM_IS_LITTLE_ENDIAN
#define XN_PLATFORM_VAARGS_TYPE XN_PLATFORM_USE_GCC_VAARGS_STYLE
#define XN_PLATFORM_SUPPORTS_DYNAMIC_LIBS 1

//---------------------------------------------------------------------------
// Basic Types
//---------------------------------------------------------------------------
/** Boolean TRUE/FALSE type. */ 
typedef	int					XnBool;

/** Signed character for strings. */ 
typedef	char				XnChar;
/** Unsigned character for strings. */ 
typedef	unsigned char		XnUChar;

/** Signed wide character for strings. */ 
typedef	wchar_t				XnWChar;

/** 8-bit signed integer. */ 
typedef	signed char			XnInt8;
/** 8-bit unsigned integer. */ 
typedef	unsigned char		XnUInt8;

/** 16-bit signed integer. */ 
typedef	short				XnInt16;
/** 16-bit unsigned integer. */ 
typedef	unsigned short		XnUInt16;

/** 32-bit signed integer. */ 
typedef	int					XnInt32;
/** 32-bit unsigned integer. */ 
typedef	unsigned int		XnUInt32;

/** 64-bit signed integer. */ 
typedef	long long			XnInt64;
/** 64-bit unsigned integer. */ 
typedef	unsigned long long	XnUInt64;

/** natural signed integer. */ 
typedef	int					XnInt;
/** natural unsigned integer. */ 
typedef	unsigned int		XnUInt;

/** Float (32bit) */ 
typedef	float				XnFloat;
/** Double (64bit) */ 
typedef	double				XnDouble;

/** Far procedures type (for shared libraries functions). */ 
typedef void (*XnFarProc)(void *);

/** Size type. */ 
typedef size_t				XnSizeT;

/** Max unsigned 8-bit value */ 
#define XN_MAX_UINT8 UCHAR_MAX
/** Max unsigned 16-bit value */ 
#define XN_MAX_UINT16 USHRT_MAX
/** Max unsigned 32-bit value */ 
#define XN_MAX_UINT32 UINT_MAX
/** Max unsigned 64-bit value */ 
#define XN_MAX_UINT64 ULLONG_MAX

/** Min signed 8-bit value */ 
#define XN_MIN_INT8 SCHAR_MIN
/** Min signed 16-bit value */ 
#define XN_MIN_INT16 SHRT_MIN
/** Min signed 32-bit value */ 
#define XN_MIN_INT32 INT_MIN
/** Min signed 64-bit value */ 
#define XN_MIN_INT64 LLONG_MIN

/** Max signed 8-bit value */ 
#define XN_MAX_INT8 SCHAR_MAX
/** Max signed 16-bit value */ 
#define XN_MAX_INT16 SHRT_MAX
/** Max signed 32-bit value */ 
#define XN_MAX_INT32 INT_MAX
/** Max signed 64-bit value */ 
#define XN_MAX_INT64 LLONG_MAX

//---------------------------------------------------------------------------
// Memory
//---------------------------------------------------------------------------
/** The default memory alignment. */ 
#define XN_DEFAULT_MEM_ALIGN 16

/** The thread static declarator (using TLS). */
#define XN_THREAD_STATIC __thread

//---------------------------------------------------------------------------
// Files
//---------------------------------------------------------------------------
/** The maximum allowed file path size (in bytes). */ 
#define XN_FILE_MAX_PATH 256

//---------------------------------------------------------------------------
// Call back
//---------------------------------------------------------------------------
/** The std call type. */ 
#define XN_STDCALL __stdcall

/** The call back calling convention. */ 
#define XN_CALLBACK_TYPE 

/** The C and C++ calling convension. */
#define XN_C_DECL

//---------------------------------------------------------------------------
// Macros
//---------------------------------------------------------------------------
/** Returns the date and time at compile time. */ 
#define XN_TIMESTAMP __DATE__ " " __TIME__

/** Converts n into a pre-processor string.  */ 
#define XN_STRINGIFY(n) XN_STRINGIFY_HELPER(n)
#define XN_STRINGIFY_HELPER(n) #n

/** Asserts an expression, only on Debug build. */
#define XN_ASSERT(assertion) assert(assertion)

//---------------------------------------------------------------------------
// API Export/Import Macros
//---------------------------------------------------------------------------
/** Indicates an exported shared library function. */ 
#define XN_API_EXPORT __attribute__ ((visibility("default")))
	
/** Indicates an imported shared library function. */ 
#define XN_API_IMPORT 

/** Indicates a deprecated function */
#define XN_API_DEPRECATED(msg) __attribute__((warning("This function is deprecated: " msg)))

#define XN_DEPRECATED_WARNING_IDS			
#define XN_HIDES_PARENT_METHOD_WARNING_ID	
#define XN_CONDITION_IS_CONST_WARNING_ID
#define XN_INHERITS_VIA_DOMINANCE_WARNING_ID
#define XN_UNALIGNED_ADDRESS_WARNING_ID
#define XN_STRUCT_PADDED_WARNING_ID

#define XN_PRAGMA_START_DISABLED_WARNING_SECTION(warnings)
#define XN_PRAGMA_STOP_DISABLED_WARNING_SECTION

/** Declares a global shared library export function. */ 
#define XN_API_EXPORT_INIT()

#endif //_XN_PLATFORM_LINUX_X86_H_

