#include <stdio.h>
typedef struct SEXPREC SEXPREC;
typedef SEXPREC *SEXP;

SEXP Rf_allocVector(int, int);
void SET_SCALAR_IVAL(SEXP x, int v);

SEXP Rf_ScalarInteger(int x) {
  printf("Hi\n");
  SEXP res = Rf_allocVector(13, 1);
  SET_SCALAR_IVAL(res, x);
  return res;
}

// clang-format off
//
// R code:
// f <- function() 42
//
// GNUR byecode:
// List of 3
// $ : symbol .Code
// $ :List of 4
//  ..$ : int 12
//  ..$ : symbol LDCONST.OP
//  ..$ : int 0
//  ..$ : symbol RETURN.OP
// $ :List of 4
//  ..$ : num 42
//  ..$ : 'expressionsIndex' int [1:4] NA 0 0 0
//
// RIR code:
// == closure 0x561597f21358 (env 0x561596180d58) ==
// == dispatch table 0x561597a23af0 ==
// = version 0 (0x56159780b298) =
// [sigature] needsEnv
// [flags]
// [stats]    invoked: 0, deopt: 0
// 0:
//       0   push_  42
//       5   visible_
//       6   ret_
//
// PIR code:
//
// ╞═══════════════════════════════╡  Compiling f  ╞══════════════════════════════╡
//
// ┌──────────────────────────────────────────────────────────────────────────────┐
// │ f[0x55a92de78fe0]                                                            │
// │ Context: CorrOrd,!TMany                                                      │
// │ Properties:                                                                  │
// ├────── Compiled to PIR Version
// f[0x55a92de78fe0]
// BB0
//   goto BB1
// BB1   <- [0]
//   env             e1.0  = MkEnv              l     parent=R_GlobalEnv, context 1
//   goto BB2
// BB2   <- [1]
//   void                    Visible            v
//   void                    Return             l     42
// │ f[0x55a92de78fe0]                                                            │
// └──────────────────────────────────────────────────────────────────────────────┘
//
// ┌──────────────────────────────────────────────────────────────────────────────┐
// │ f[0x55a92de78fe0]                                                            │
// │ Context: CorrOrd,!TMany                                                      │
// │ Properties:  Eager, !Reflection                                              │
// ├────── PIR Version After Optimizations
// f[0x55a92de78fe0]
// BB0
//   goto BB1
// BB1   <- [0]
//   void                    Visible            v
//   void                    Return             l     42
//
// │ f[0x55a92de78fe0]                                                            │
// └──────────────────────────────────────────────────────────────────────────────┘
//
// LLVM bitcode
//
// ┌──────────────────────────────────────────────────────────────────────────────┐
// │ f[0x557a1a81e700]                                                            │
// │ Context: CorrOrd,!TMany                                                      │
// │ Properties:  Eager, !Reflection                                              │
// ├────── LLVM Bitcode
//
// %R_bcstack_t = type { i32, i32, %struct.SEXPREC* }
// %struct.SEXPREC = type { %struct.sxpinfo_struct, %struct.SEXPREC*, %struct.SEXPREC*, %struct.SEXPREC*, %union.SEXP_SEXP_SEXP }
// %struct.sxpinfo_struct = type { i64 }
// %union.SEXP_SEXP_SEXP = type { %struct.SEXPREC*, %struct.SEXPREC*, %struct.SEXPREC* }
// %struct.VECTOR_SEXPREC = type { %struct.sxpinfo_struct, %struct.SEXPREC*, %struct.SEXPREC*, %struct.SEXPREC*, %struct.vecsxp_struct }
// %struct.vecsxp_struct = type { i64, i64 }
//
// @ept_557a17772850 = available_externally externally_initialized global %R_bcstack_t*
// @ept_557a17772d38 = available_externally externally_initialized global i32
//
// define %struct.SEXPREC* @rsh2_0x557a1a81e700(i8* %code, %R_bcstack_t* %args, %struct.SEXPREC* %env, %struct.SEXPREC* %closure) {
//   %1 = load %R_bcstack_t*, %R_bcstack_t** @ept_557a17772850, align 8
//   %2 = alloca %struct.SEXPREC*, i64 0, align 8
//   br label %BB0
//
// BB0:                                              ; preds = %0
//   store i32 1, i32* @ept_557a17772d38, align 4
//   %3 = load %struct.SEXPREC*, %struct.SEXPREC** getelementptr (%struct.SEXPREC*, %struct.SEXPREC** inttoptr (i64 93982889517072 to %struct.SEXPREC**), i32 1), align 8
//   %4 = bitcast %struct.SEXPREC* %3 to %struct.VECTOR_SEXPREC*
//   %5 = getelementptr %struct.VECTOR_SEXPREC, %struct.VECTOR_SEXPREC* %4, i32 1
//   %6 = bitcast %struct.VECTOR_SEXPREC* %5 to %struct.SEXPREC**
//   %7 = getelementptr %struct.SEXPREC*, %struct.SEXPREC** %6, i32 3
//   %8 = load %struct.SEXPREC*, %struct.SEXPREC** %7, align 8
//   ret %struct.SEXPREC* %8
// }
//
// │ f[0x557a1a81e700]                                                            │
// └──────────────────────────────────────────────────────────────────────────────┘
//
// clang-format on

SEXP jit_f() {
  SEXP _1 = Rf_ScalarInteger(42);
  return _1;
}
