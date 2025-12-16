#include <runtime.h>
SEXP f_n127917600_0(SEXP RHO, SEXP CCP);
SEXP f_n127917600_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C17); // symbol: 'manyargs' (used: 1)
  DEFINE_BCELL2(C2); // symbol: 'src' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_LdConst(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'src', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 4)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 5), RHO) /* stack: 1 */;
  Rsh_CheckFun(R1, R2, R3) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 6), RHO) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 7)) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 9)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 10)) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 11)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 12)) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 13)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 14), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 15), &C17, RHO) /* symbol: 'manyargs', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 15), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 16)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 17)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 18)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 19)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 20)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 21)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 22)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 23)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 24)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 25)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 26)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 27)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 28)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 29)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 30)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 31)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 32)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 33), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
