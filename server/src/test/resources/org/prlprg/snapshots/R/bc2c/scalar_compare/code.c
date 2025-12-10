#include <runtime.h>
SEXP f_1345746848_0(SEXP RHO, SEXP CCP);
SEXP f_1345746848_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 1), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 3), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 4), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 5), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 6), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 7), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 8), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 9), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 10), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 11), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 12), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 13), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 14), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 15), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 16), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 17), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 18), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 19), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 20), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 21), RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 22), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 23), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 24), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
