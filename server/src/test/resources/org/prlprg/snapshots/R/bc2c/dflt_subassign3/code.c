#include <runtime.h>
SEXP f_1948236704_0(SEXP RHO, SEXP CCP);
SEXP f_1948236704_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 7;
  CHECK_OVERFLOW(7);
  // CELLS
  DEFINE_BCELL2(C8); // symbol: 'x' (used: 4)
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
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 2)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 4)) /* stack: 3 */;
  Rsh_PushNullArg(R2, R3) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 5)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 6), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 7), &C8, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 8)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 7), &C8, RHO) /* symbol: 'x', stack: 4 */;
  if (Rsh_StartSubassign(R3, R4, R5, R6, R7, Rsh_const(CCP, 9), RHO) /* stack: 7 */) {
	goto L15;
}
  Rsh_DoMissing(R5, R6, R7) /* stack: 7 */;
  Rsh_DfltSubassign(R3, *R4, *R5, *R6, *R7, RHO) /* stack: 3 */;
L15: /* stack: 3 */
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 7), &C8, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 7), &C8, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
