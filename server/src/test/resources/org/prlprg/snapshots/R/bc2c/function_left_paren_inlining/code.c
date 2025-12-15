#include <runtime.h>
SEXP f_1602469024_0(SEXP RHO, SEXP CCP);
SEXP f_1602469024_0_1(SEXP RHO, SEXP CCP);
SEXP f_1602469024_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'f' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_1602469024_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'f', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_1602469024_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // CELLS
  DEFINE_BCELL2(C1); // symbol: 'x' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Visible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
