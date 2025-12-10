#include <runtime.h>
SEXP f_n1400277696_0(SEXP RHO, SEXP CCP);
SEXP f_n1400277696_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
