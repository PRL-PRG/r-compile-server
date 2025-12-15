#include <runtime.h>
SEXP f_1793405600_0(SEXP RHO, SEXP CCP);
SEXP f_1793405600_0_1(SEXP RHO, SEXP CCP);
SEXP f_1793405600_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'towers' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_1793405600_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'towers', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 4)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 5)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 6)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 7), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_1793405600_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 4;
  CHECK_OVERFLOW(4);
  // CELLS
  DEFINE_BCELL2(C1); // symbol: 'n' (used: 1)
  DEFINE_BCELL2(C12); // symbol: 'moves' (used: 6)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'n', stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 1)) /* stack: 2 */;
  Rsh_Eq(R1, *R2, Rsh_const(CCP, 2), RHO) /* stack: 1 */;
  if (Rsh_BrIfNot(*R1, Rsh_const(CCP, 3), RHO) /* stack: 0 */) {
	goto L7;
}
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 1)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
  goto L8;
L7: /* stack: 1 */
  Rsh_LdNull(R1) /* stack: 1 */;
L8: /* stack: 1 */
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 4), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 5), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 6), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 7), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 9), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 1)) /* stack: 2 */;
  Rsh_Add(R1, *R2, Rsh_const(CCP, 11), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_GetFun(R2, R3, R4, Rsh_const(CCP, 4), RHO) /* stack: 4 */;
  Rsh_MakeProm(R2, R3, R4, Rsh_const(CCP, 5), RHO) /* stack: 4 */;
  Rsh_MakeProm(R2, R3, R4, Rsh_const(CCP, 12), RHO) /* stack: 4 */;
  Rsh_MakeProm(R2, R3, R4, Rsh_const(CCP, 13), RHO) /* stack: 4 */;
  Rsh_MakeProm(R2, R3, R4, Rsh_const(CCP, 14), RHO) /* stack: 4 */;
  Rsh_Call(R2, *R3, *R4, Rsh_const(CCP, 15), RHO) /* stack: 2 */;
  Rsh_Add(R1, *R2, Rsh_const(CCP, 16), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 10), &C12, RHO) /* symbol: 'moves', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
