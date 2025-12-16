#include <runtime.h>
SEXP f_n168708288_0(SEXP RHO, SEXP CCP);
SEXP f_n168708288_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'i' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  // LOOP CONTEXTS
  RCNTXT LOOP_CTX[1];

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 1), Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'i', stack: 3 */;
goto L2;
L2: /* stack: 3 */
  if (Rsh_StartLoopCntxt(&LOOP_CTX[0], RHO) /* stack: 3 */) {
	goto L7;
}
  goto L6;
L4: /* stack: 3 */
  goto L7;
  Rsh_Pop(*R3) /* stack: 2 */;
L6: /* stack: 2 */
  if (Rsh_StepFor(R0, R1, R2, &C3, RHO) /* symbol: 'i', stack: 2 */) {
	goto L4;
}
L7: /* stack: 2 */
  Rsh_EndLoopCntxt(&LOOP_CTX[0]) /* stack: 3 */;
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Invisible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
