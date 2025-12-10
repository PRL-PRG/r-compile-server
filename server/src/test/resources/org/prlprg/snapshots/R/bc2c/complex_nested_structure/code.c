#include <runtime.h>
SEXP f_2060138976_0(SEXP RHO, SEXP CCP);
SEXP f_2060138976_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 8;
  CHECK_OVERFLOW(8);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'result' (used: 5)
  DEFINE_BCELL2(C6); // symbol: 'outer' (used: 3)
  DEFINE_BCELL2(C8); // symbol: 'inner_sum' (used: 5)
  DEFINE_BCELL2(C12); // symbol: 'inner' (used: 5)
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
  RCNTXT LOOP_CTX[2];

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'result', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConst(R1, Rsh_const(CCP, 2)) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 3), Rsh_const(CCP, 4), &C6, RHO) /* symbol: 'outer', stack: 3 */;
goto L5;
L5: /* stack: 3 */
  if (Rsh_StartLoopCntxt(&LOOP_CTX[0], RHO) /* stack: 3 */) {
	goto L53;
}
  goto L52;
L7: /* stack: 3 */
  Rsh_LdConstDbl(R4, Rsh_const(CCP, 0)) /* stack: 4 */;
  Rsh_SetVar(R4, Rsh_const(CCP, 5), &C8, RHO) /* symbol: 'inner_sum', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
  Rsh_LdConst(R4, Rsh_const(CCP, 6)) /* stack: 4 */;
  Rsh_StartFor(R4, R5, R6, Rsh_const(CCP, 7), Rsh_const(CCP, 8), &C12, RHO) /* symbol: 'inner', stack: 6 */;
goto L12;
L12: /* stack: 6 */
  if (Rsh_StartLoopCntxt(&LOOP_CTX[1], RHO) /* stack: 6 */) {
	goto L36;
}
  goto L35;
L14: /* stack: 6 */
  Rsh_GetVar(R7, Rsh_const(CCP, 8), &C12, RHO) /* symbol: 'inner', stack: 7 */;
  Rsh_LdConstDbl(R8, Rsh_const(CCP, 9)) /* stack: 8 */;
  Rsh_Eq(R7, *R8, Rsh_const(CCP, 10), RHO) /* stack: 7 */;
  if (Rsh_BrIfNot(*R7, Rsh_const(CCP, 11), RHO) /* stack: 6 */) {
	goto L20;
}
  goto L35;
  goto L21;
L20: /* stack: 6 */
  Rsh_LdNull(R7) /* stack: 7 */;
L21: /* stack: 7 */
  Rsh_Pop(*R7) /* stack: 6 */;
  Rsh_GetVar(R7, Rsh_const(CCP, 8), &C12, RHO) /* symbol: 'inner', stack: 7 */;
  Rsh_LdConstDbl(R8, Rsh_const(CCP, 12)) /* stack: 8 */;
  Rsh_Eq(R7, *R8, Rsh_const(CCP, 13), RHO) /* stack: 7 */;
  if (Rsh_BrIfNot(*R7, Rsh_const(CCP, 14), RHO) /* stack: 6 */) {
	goto L28;
}
  goto L36;
  goto L29;
L28: /* stack: 6 */
  Rsh_LdNull(R7) /* stack: 7 */;
L29: /* stack: 7 */
  Rsh_Pop(*R7) /* stack: 6 */;
  Rsh_GetVar(R7, Rsh_const(CCP, 5), &C8, RHO) /* symbol: 'inner_sum', stack: 7 */;
  Rsh_GetVar(R8, Rsh_const(CCP, 8), &C12, RHO) /* symbol: 'inner', stack: 8 */;
  Rsh_Add(R7, *R8, Rsh_const(CCP, 15), RHO) /* stack: 7 */;
  Rsh_SetVar(R7, Rsh_const(CCP, 5), &C8, RHO) /* symbol: 'inner_sum', stack: 7 */;
  Rsh_Pop(*R7) /* stack: 6 */;
L35: /* stack: 6 */
  if (Rsh_StepFor(R4, R5, R6, &C12, RHO) /* symbol: 'inner', stack: 6 */) {
	goto L14;
}
L36: /* stack: 6 */
  Rsh_EndLoopCntxt(&LOOP_CTX[1]) /* stack: 6 */;
  Rsh_EndFor(R4, *R5, *R6, RHO) /* stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
  Rsh_GetVar(R4, Rsh_const(CCP, 4), &C6, RHO) /* symbol: 'outer', stack: 4 */;
  Rsh_LdConstDbl(R5, Rsh_const(CCP, 16)) /* stack: 5 */;
  Rsh_Eq(R4, *R5, Rsh_const(CCP, 17), RHO) /* stack: 4 */;
  if (Rsh_BrIfNot(*R4, Rsh_const(CCP, 18), RHO) /* stack: 3 */) {
	goto L45;
}
  goto L53;
  goto L46;
L45: /* stack: 3 */
  Rsh_LdNull(R4) /* stack: 4 */;
L46: /* stack: 4 */
  Rsh_Pop(*R4) /* stack: 3 */;
  Rsh_GetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'result', stack: 4 */;
  Rsh_GetVar(R5, Rsh_const(CCP, 5), &C8, RHO) /* symbol: 'inner_sum', stack: 5 */;
  Rsh_Add(R4, *R5, Rsh_const(CCP, 19), RHO) /* stack: 4 */;
  Rsh_SetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'result', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L52: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C6, RHO) /* symbol: 'outer', stack: 3 */) {
	goto L7;
}
L53: /* stack: 3 */
  Rsh_EndLoopCntxt(&LOOP_CTX[0]) /* stack: 3 */;
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'result', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
