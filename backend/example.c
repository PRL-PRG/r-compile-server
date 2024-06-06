typedef struct SEXPREC SEXPREC;
typedef SEXPREC *SEXP;
SEXP Rf_ScalarInteger(int);

// clang-format off
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
//  ..$ : num 1
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
//       0   push_  1
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
//   void                    Return             l     1
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
//   void                    Return             l     1
//
// │ f[0x55a92de78fe0]                                                            │
// └──────────────────────────────────────────────────────────────────────────────┘
//
// clang-format on

SEXP jit_f() {
  SEXP _1 = Rf_ScalarInteger(1);
  return _1;
}
