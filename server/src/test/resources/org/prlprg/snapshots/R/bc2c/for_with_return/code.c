#include <runtime.h>
SEXP f_n1797515616_0(SEXP RHO, SEXP CCP);
SEXP f_n1797515616_0_1(SEXP RHO, SEXP CCP);
SEXP f_n1797515616_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'f' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_n1797515616_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'f', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 3), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_n1797515616_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 4;
  CHECK_OVERFLOW(4);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'i' (used: 3)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 1), Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'i', stack: 3 */;
goto L5;
L2: /* stack: 3 */
  Rsh_GetVar(R4, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'i', stack: 4 */;
  Rsh_Return(R4, STACK_SAVE) /* stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L5: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C3, RHO) /* symbol: 'i', stack: 3 */) {
	goto L2;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Invisible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
