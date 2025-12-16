#include <runtime.h>
SEXP f_446015648_0(SEXP RHO, SEXP CCP);
SEXP f_446015648_0_1(SEXP RHO, SEXP CCP);
SEXP f_446015648_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'f' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_446015648_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'f', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_446015648_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 2;
  CHECK_OVERFLOW(2);
  // CELLS
  DEFINE_BCELL2(C1); // symbol: 'x' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 1)) /* stack: 2 */;
  Rsh_Eq(R1, *R2, Rsh_const(CCP, 2), RHO) /* stack: 1 */;
  if (Rsh_BrIfNot(*R1, Rsh_const(CCP, 3), RHO) /* stack: 0 */) {
	goto L6;
}
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 1)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
L6: /* stack: 1 */
  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 4)) /* stack: 2 */;
  Rsh_Eq(R1, *R2, Rsh_const(CCP, 5), RHO) /* stack: 1 */;
  if (Rsh_BrIfNot(*R1, Rsh_const(CCP, 6), RHO) /* stack: 0 */) {
	goto L12;
}
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 4)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
L12: /* stack: 1 */
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 7)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
