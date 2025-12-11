#include <runtime.h>
SEXP f_n1340632704_0(SEXP RHO, SEXP CCP);
SEXP f_n1340632704_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 7;
  CHECK_OVERFLOW(7);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'x' (used: 4)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConst(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 3), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_GetterCall(R3, R4, R5, *R6, *R7, Rsh_const(CCP, 4), RHO) /* stack: 5 */;
  Rsh_SpecialSwap(R3, R4, R5) /* stack: 5 */;
  if (Rsh_StartSubassignN(R4, R5, Rsh_const(CCP, 5), RHO) /* stack: 5 */) {
	goto L12;
}
  Rsh_LdConstDbl(R6, Rsh_const(CCP, 6)) /* stack: 6 */;
  Rsh_VecSubassign(R4, *R5, *R6, Rsh_const(CCP, 5), RHO) /* stack: 4 */;
L12: /* stack: 4 */
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 7), RHO) /* stack: 7 */;
  Rsh_PushNullArg(R6, R7) /* stack: 7 */;
  Rsh_SetterCall(R3, *R4, *R5, *R6, *R7, Rsh_const(CCP, 8), Rsh_const(CCP, 9), RHO) /* stack: 3 */;
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
