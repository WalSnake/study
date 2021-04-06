// HW3DLL.h Contents declarations of veriables and functions for HW3. Task four global
#pragma once

#ifdef HW3DLL_EXPORTS
#define HW3DLL_API __declspec(dllexport)
#else
#define HW3DLL_API __declspec(dllimport)
#endif

// HomeWork 3, task one: calculating a * (b + (c / d)), answer must be float
extern "C" HW3DLL_API float task_one(
    const int a,
    const int b,
    const int c,
    const int d,
    float e 
    );

// HomeWork 3, task two
extern "C" HW3DLL_API int task_two(
    const int nTask2Const,
    int nTask2Var,
    int nTask2Result);

// HomeWork 3, task three: create 3d array and pointer, which gives [1][1][1] value
extern "C" HW3DLL_API int task_three(
    int Array[3][3][3]
    );