#include <runtime.h>
SEXP f_719922336_0(SEXP RHO, SEXP CCP);
SEXP f_719922336_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 1;
  CHECK_OVERFLOW(1);
  // REGISTERS
  DEFINE_VAL(R1);

  Rsh_LdNull(R1) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
