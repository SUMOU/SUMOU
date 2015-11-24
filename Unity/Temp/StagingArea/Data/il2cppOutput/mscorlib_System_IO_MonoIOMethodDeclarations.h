#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Exception
struct Exception_t55;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t290;
// System.Byte[]
struct ByteU5BU5D_t424;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MonoIOError.h"
#include "mscorlib_System_IO_FileAttributes.h"
#include "mscorlib_System_IO_MonoFileType.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_IO_MonoIOStat.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_FileShare.h"
#include "mscorlib_System_IO_FileOptions.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MonoIO::.cctor()
extern "C" void MonoIO__cctor_m5819 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C" Exception_t55 * MonoIO_GetException_m5820 (Object_t * __this /* static, unused */, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern "C" Exception_t55 * MonoIO_GetException_m5821 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_CreateDirectory_m5822 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" StringU5BU5D_t290* MonoIO_GetFileSystemEntries_m5823 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C" String_t* MonoIO_GetCurrentDirectory_m5824 (Object_t * __this /* static, unused */, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_DeleteFile_m5825 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m5826 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileType_m5827 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsFile_m5828 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsDirectory_m5829 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C" bool MonoIO_GetFileStat_m5830 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t912 * ___stat, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C" IntPtr_t MonoIO_Open_m5831 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C" bool MonoIO_Close_m5832 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Read_m5833 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t424* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Write_m5834 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t424* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_Seek_m5835 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_GetLength_m5836 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C" bool MonoIO_SetLength_m5837 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m5838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m5839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C" IntPtr_t MonoIO_get_ConsoleError_m5840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m5841 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m5842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m5843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C" uint16_t MonoIO_get_PathSeparator_m5844 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
