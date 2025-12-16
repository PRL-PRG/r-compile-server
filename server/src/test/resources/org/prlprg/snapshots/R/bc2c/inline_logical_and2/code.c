#include <runtime.h>
SEXP f_n1335474176_0(SEXP RHO, SEXP CCP);
SEXP f_n1335474176_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 2;
  CHECK_OVERFLOW(2);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 2)
  DEFINE_BCELL2(C5); // symbol: 'y' (used: 2)
  DEFINE_BCELL2(C8); // symbol: 'z' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);

  Rsh_LdTrue(R1) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdFalse(R1) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C5, RHO) /* symbol: 'y', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstLgl(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 3), &C8, RHO) /* symbol: 'z', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'x', stack: 1 */;
  if (Rsh_And1st(R1, Rsh_const(CCP, 4)) /* stack: 1 */) {
	goto L13;
}
  Rsh_GetVar(R2, Rsh_const(CCP, 1), &C5, RHO) /* symbol: 'y', stack: 2 */;
  Rsh_And2nd(R1, *R2, Rsh_const(CCP, 4)) /* stack: 1 */;
L13: /* stack: 1 */
  if (Rsh_And1st(R1, Rsh_const(CCP, 5)) /* stack: 1 */) {
	goto L16;
}
  Rsh_GetVar(R2, Rsh_const(CCP, 3), &C8, RHO) /* symbol: 'z', stack: 2 */;
  Rsh_And2nd(R1, *R2, Rsh_const(CCP, 5)) /* stack: 1 */;
L16: /* stack: 1 */
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
