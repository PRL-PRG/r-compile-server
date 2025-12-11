#include <runtime.h>
SEXP f_443129856_0(SEXP RHO, SEXP CCP);
SEXP f_443129856_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 4;
  CHECK_OVERFLOW(4);
  // CELLS
  DEFINE_BCELL2(C5); // symbol: 'e' (used: 3)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);

  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 1), RHO) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 2)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 3), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 4), &C5, RHO) /* symbol: 'e', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 5)) /* stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 4), &C5, RHO) /* symbol: 'e', stack: 4 */;
  Rsh_DollarGets(R3, *R4, Rsh_const(CCP, 6), Rsh_const(CCP, 7), RHO) /* stack: 3 */;
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 4), &C5, RHO) /* symbol: 'e', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 9)) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 10), RHO) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 11)) /* stack: 3 */;
  Rsh_PushFalseArg(R2, R3) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 12)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 13), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
