#include <runtime.h>
SEXP f_n1696032704_0(SEXP RHO, SEXP CCP);
SEXP f_n1696032704_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 7;
  CHECK_OVERFLOW(7);
  // CELLS
  DEFINE_BCELL2(C10); // symbol: 'o' (used: 3)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);

  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 1)) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 5), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 1)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 6)) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 7)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 8), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 9), &C10, RHO) /* symbol: 'o', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 10)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 9), &C10, RHO) /* symbol: 'o', stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 11), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_PushConstArg(R6, R7, Rsh_const(CCP, 12)) /* stack: 7 */;
  Rsh_SetterCall(R3, *R4, *R5, *R6, *R7, Rsh_const(CCP, 13), Rsh_const(CCP, 10), RHO) /* stack: 3 */;
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 9), &C10, RHO) /* symbol: 'o', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 14), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 15), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 16), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
