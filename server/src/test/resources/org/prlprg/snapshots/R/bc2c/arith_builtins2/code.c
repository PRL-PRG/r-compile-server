#include <runtime.h>
SEXP f_n1942086208_0(SEXP RHO, SEXP CCP);
SEXP f_n1942086208_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 4;
  CHECK_OVERFLOW(4);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'x' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetBuiltin(R1, R2, R3, Rsh_const(CCP, 2)) /* stack: 3 */;
  Rsh_GetVar(R4, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'x', stack: 4 */;
  Rsh_PushArg(R2, R3, *R4) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_CallBuiltin(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
