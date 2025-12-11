#include <runtime.h>
SEXP f_2068091904_0(SEXP RHO, SEXP CCP);
SEXP f_2068091904_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 4;
  CHECK_OVERFLOW(4);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'x' (used: 3)
  DEFINE_BCELL2(C5); // symbol: 'i' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C3, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 2), Rsh_const(CCP, 3), &C5, RHO) /* symbol: 'i', stack: 3 */;
goto L7;
L5: /* stack: 3 */
  Rsh_LdConstDbl(R4, Rsh_const(CCP, 4)) /* stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L7: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C5, RHO) /* symbol: 'i', stack: 3 */) {
	goto L5;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Invisible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
