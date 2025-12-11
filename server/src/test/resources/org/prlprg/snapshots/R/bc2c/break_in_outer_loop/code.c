#include <runtime.h>
SEXP f_n105743104_0(SEXP RHO, SEXP CCP);
SEXP f_n105743104_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 8;
  CHECK_OVERFLOW(8);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 5)
  DEFINE_BCELL2(C6); // symbol: 'i' (used: 3)
  DEFINE_BCELL2(C8); // symbol: 'j' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);
  DEFINE_VAL(R8);
  // LOOP CONTEXTS
  RCNTXT LOOP_CTX[1];

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConst(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 3), Rsh_const(CCP, 4), &C6, RHO) /* symbol: 'i', stack: 3 */;
goto L5;
L5: /* stack: 3 */
  if (Rsh_StartLoopCntxt(&LOOP_CTX[0], RHO) /* stack: 3 */) {
	goto L26;
}
  goto L25;
L7: /* stack: 3 */
  Rsh_LdConst(R4, Rsh_const(CCP, 2)) /* stack: 4 */;
  Rsh_StartFor(R4, R5, R6, Rsh_const(CCP, 5), Rsh_const(CCP, 6), &C8, RHO) /* symbol: 'j', stack: 6 */;
goto L14;
L9: /* stack: 6 */
  Rsh_GetVar(R7, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 7 */;
  Rsh_LdConstDbl(R8, Rsh_const(CCP, 7)) /* stack: 8 */;
  Rsh_Add(R7, *R8, Rsh_const(CCP, 8), RHO) /* stack: 7 */;
  Rsh_SetVar(R7, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 7 */;
  Rsh_Pop(*R7) /* stack: 6 */;
L14: /* stack: 6 */
  if (Rsh_StepFor(R4, R5, R6, &C8, RHO) /* symbol: 'j', stack: 6 */) {
	goto L9;
}
  Rsh_EndFor(R4, *R5, *R6, RHO) /* stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
  Rsh_GetVar(R4, Rsh_const(CCP, 4), &C6, RHO) /* symbol: 'i', stack: 4 */;
  Rsh_LdConstDbl(R5, Rsh_const(CCP, 9)) /* stack: 5 */;
  Rsh_Eq(R4, *R5, Rsh_const(CCP, 10), RHO) /* stack: 4 */;
  if (Rsh_BrIfNot(*R4, Rsh_const(CCP, 11), RHO) /* stack: 3 */) {
	goto L23;
}
  goto L26;
  goto L24;
L23: /* stack: 3 */
  Rsh_LdNull(R4) /* stack: 4 */;
L24: /* stack: 4 */
  Rsh_Pop(*R4) /* stack: 3 */;
L25: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C6, RHO) /* symbol: 'i', stack: 3 */) {
	goto L7;
}
L26: /* stack: 3 */
  Rsh_EndLoopCntxt(&LOOP_CTX[0]) /* stack: 3 */;
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
