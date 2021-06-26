cmake_minimum_required(VERSION 3.19)
project(FimicsC2020)

set(CMAKE_CXX_STANDARD 14)

add_executable(FimicsC2020
#        main.cpp
#        src/c/flow/Hello.c
#        src/c/dataType/DataType.c
#        src/c/flow/Flow.c
#        src/c/flow/ForDemo.c
#        src/c/array/ArrayDemo.c
#        src/c/array/TwoArray.c
#        src/c/string/CharArray.c
#
#        src/c/mutilFile/add.c
#        src/c/mutilFile/main.c
#        src/c/mutilFile/mul.c
#        src/c/mutilFile/sub.c
#
#        src/c/pointer/Pointer.c
#        src/c/pointer/PArray.c
#        src/c/pointer/POperation.c

#        src/c/pointer/MutilPointer.c

#        src/c/pointer/PassValueAdress.c
#        src/c/array/ArrayParmas.c
#        src/c/pointer/PReturn.c
#        src/c/string/PString.c


#        src/c/string/Strcmp.c
#        src/c/string/SCopy.c
#        src/c/string/SFind.c
#        src/c/string/STrim.c
#        src/c/string/SSubString.c
#        src/c/string/StringCount.c
#        src/c/string/Sresver.c
#        src/c/string/StrNcpy.c
#        src/c/string/Strcat.c
#        src/c/string/Strcmpz.c
#        src/c/string/SPrintf.c
#        src/c/string/Strtok.c
#        src/c/string/Atof.c
#        src/c/string/Malloc.c
#        src/c/string/Malloc2.c

#        src/c/struct/StructDefine.c
#        src/c/struct/StructSize.c
#        src/c/struct/StructArray.c
#        src/c/struct/StructScore.c
#        src/c/struct/StructMemberPointer.c
#        src/c/struct/StructPointer.c
#        src/c/struct/HeapMalloc.c
#        src/c/struct/StructFunction.c
#        src/c/struct/StructInner.c
#        src/c/struct/UnionDemo.c
#        src/c/struct/EnumDemo.c
#        src/c/struct/TypeDefDemo.c
#        src/c/struct/UnionAndEnum.c

#        src/c/file/Constant.h
#        src/c/file/Constant.c
#        src/c/file/FileOpen.c
#        src/c/file/FPutc.c
#        src/c/file/FGetc.c
#        src/c/file/FeofDemo.c
#        src/c/file/FgetsFputs.c
#        src/c/file/SprintfSscanf.c
#        src/c/file/FwriteFread.c
#        src/c/file/FileCopy.c
#        src/c/file/RandFile.c
#        src/c/file/FileStat.c
#        src/c/file/FileBuffer.c

#        src/c/advance/TypedefDemo.c
#        src/c/advance/XVoid.c
#        src/c/advance/XSizeof.c
#        src/c/advance/XVarModify.c
#        src/c/advance/XStack.c
#        src/c/advance/XMalloc.c
#        src/c/advance/XStaticExtern.c
#        src/c/advance/XExternTest.c
#        src/c/advance/XConst.c
#        src/c/advance/XDefine.c
#        src/c/advance/XVarPass.c
#        src/c/advance/XStackGrowth.c
#        src/c/advance/pointer/XPointerNull.c
#        src/c/advance/pointer/XPointerStep.c
#        src/c/advance/pointer/XPointerValue.c
#        src/c/advance/pointer/XpointerParams.c
#        src/c/advance/pointer/XPointerString.c
#        src/c/advance/XSprintf.c
#        src/c/advance/XRealloc.c
#        src/c/advance/XSscanf.c
#        src/c/advance/XSubString.c
#        src/c/advance/pointer/XPointerEasyError.c
#        src/c/advance/XConst1.c
#        src/c/advance/pointer/XPointerTwoAsInputParams.c
#        src/c/advance/pointer/XPointerTwoAsOutputParams.c
#        src/c/advance/pointer/XPointerTwoForFile.c
#        src/c/advance/XBitOperation.c
#        src/c/advance/array/ArrayOne.c
#        src/c/advance/array/ArrayPointerDefine.c
#        src/c/advance/array/ArrayTwoName.c
#        src/c/advance/array/PointerArraySort.c
#        src/c/advance/struct/StructUse.c
#        src/c/advance/struct/StructCopy.c
#        src/c/advance/struct/StructPointer.c
#        src/c/advance/struct/StructTwoPointer.c
#        src/c/advance/struct/StructOffet.c
#        src/c/advance/struct/MemoryAlign.c
#        src/c/advance/file/FileRW.c
#        src/c/advance/file/FileRW2.c
#        src/c/advance/file/FileConfig.c

#        src/c/advance/linkedlist/LinkedListStatic.cpp
#        src/c/advance/linkedlist/LinkedList2.c
#        src/c/advance/linkedlist/LinkedListFun.c
#        src/c/advance/fun/FunPointer.c
#        src/c/advance/fun/FunPointerAsParams.c
#        src/c/advance/fun/FunCallBack.c
#        src/cpp/basic/XCout.cpp

        src/cpp/basic/CoionsScope.cpp
        src/cpp/basic/namespace/XNameSpace.c
        )