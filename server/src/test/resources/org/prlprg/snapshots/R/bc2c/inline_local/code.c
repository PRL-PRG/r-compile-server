#include <runtime.h>
SEXP f_822141664_0(SEXP RHO, SEXP CCP);
SEXP f_822141664_0_1(SEXP RHO, SEXP CCP);
SEXP f_822141664_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_LdNull(R1) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_MakeClosure(R1, Rsh_const(CCP, 1), &f_822141664_0_1, Rsh_const(CCP, 2), RHO) /* stack: 1 */;
  Rsh_CheckFun(R1, R2, R3) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 3), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_822141664_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // CELLS
  DEFINE_BCELL2(C0); // symbol: 'x' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C0, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
