#include <runtime.h>
SEXP f_n1310682528_0(SEXP RHO, SEXP CCP);
SEXP f_n1310682528_0_1(SEXP RHO, SEXP CCP);
SEXP f_n1310682528_0_1_2(SEXP RHO, SEXP CCP);
SEXP f_n1310682528_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'main' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_n1310682528_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'main', stack: 1 */;
  Rsh_Invisible() /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_n1310682528_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_n1310682528_0_1_2, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_n1310682528_0_1_2(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
