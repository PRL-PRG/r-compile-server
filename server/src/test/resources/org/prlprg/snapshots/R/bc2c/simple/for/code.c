#include <runtime.h>
SEXP f_691835296_0(SEXP RHO, SEXP CCP);
SEXP f_691835296_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 5;
  CHECK_OVERFLOW(5);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 5)
  DEFINE_BCELL2(C7); // symbol: 'i' (used: 3)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 3)) /* stack: 2 */;
  Rsh_Colon(R1, *R2, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 5), Rsh_const(CCP, 6), &C7, RHO) /* symbol: 'i', stack: 3 */;
goto L12;
L7: /* stack: 3 */
  Rsh_GetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 4 */;
  Rsh_GetVar(R5, Rsh_const(CCP, 6), &C7, RHO) /* symbol: 'i', stack: 5 */;
  Rsh_Add(R4, *R5, Rsh_const(CCP, 7), RHO) /* stack: 4 */;
  Rsh_SetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L12: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C7, RHO) /* symbol: 'i', stack: 3 */) {
	goto L7;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
