#include <runtime.h>
SEXP f_1353929504_0(SEXP RHO, SEXP CCP);
SEXP f_1353929504_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 6;
  CHECK_OVERFLOW(6);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 4)
  DEFINE_BCELL2(C4); // symbol: 'letters' (used: 2)
  DEFINE_BCELL2(C5); // symbol: 'i' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 2), &C4, RHO) /* symbol: 'letters', stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 3), Rsh_const(CCP, 4), &C5, RHO) /* symbol: 'i', stack: 3 */;
goto L11;
L5: /* stack: 3 */
  Rsh_GetFun(R4, R5, R6, Rsh_const(CCP, 5), RHO) /* stack: 6 */;
  Rsh_MakeProm(R4, R5, R6, Rsh_const(CCP, 6), RHO) /* stack: 6 */;
  Rsh_MakeProm(R4, R5, R6, Rsh_const(CCP, 7), RHO) /* stack: 6 */;
  Rsh_Call(R4, *R5, *R6, Rsh_const(CCP, 8), RHO) /* stack: 4 */;
  Rsh_SetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L11: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C5, RHO) /* symbol: 'i', stack: 3 */) {
	goto L5;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
