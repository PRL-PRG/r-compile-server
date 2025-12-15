#include <runtime.h>
SEXP f_1174548064_0(SEXP RHO, SEXP CCP);
SEXP f_1174548064_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 7;
  CHECK_OVERFLOW(7);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 1)
  DEFINE_BCELL2(C7); // symbol: 'a' (used: 4)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_SetVar2(R1, Rsh_const(CCP, 3), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 4), &C7, RHO) /* symbol: 'a', stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 5), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_MakeProm(R5, R6, R7, Rsh_const(CCP, 6), RHO) /* stack: 7 */;
  Rsh_SetterCall(R3, *R4, *R5, *R6, *R7, Rsh_const(CCP, 7), Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 4), &C7, RHO) /* symbol: 'a', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 8)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 4), &C7, RHO) /* symbol: 'a', stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 9), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_MakeProm(R5, R6, R7, Rsh_const(CCP, 10), RHO) /* stack: 7 */;
  Rsh_SetterCall(R3, *R4, *R5, *R6, *R7, Rsh_const(CCP, 11), Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 4), &C7, RHO) /* symbol: 'a', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 8)) /* stack: 1 */;
  Rsh_StartAssign2(R1, R2, R3, R4, Rsh_const(CCP, 4), RHO) /* stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 9), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_MakeProm(R5, R6, R7, Rsh_const(CCP, 10), RHO) /* stack: 7 */;
  Rsh_SetterCall(R3, *R4, *R5, *R6, *R7, Rsh_const(CCP, 11), Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_EndAssign2(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_Invisible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
