#include <runtime.h>
SEXP f_n2044946016_0(SEXP RHO, SEXP CCP);
SEXP f_n2044946016_0_1(SEXP RHO, SEXP CCP);
SEXP f_n2044946016_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C6); // symbol: 'M' (used: 1)
  DEFINE_BCELL2(C11); // symbol: 'd' (used: 1)
  DEFINE_BCELL2(C15); // symbol: 'h' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 0), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 1), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 2)) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 2)) /* stack: 3 */;
  Rsh_PushTrueArg(R2, R3) /* stack: 3 */;
  Rsh_SetTag(R1, R2, R3, Rsh_const(CCP, 3)) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 5), &C6, RHO) /* symbol: 'M', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 6), RHO) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 7), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 8), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 9), &C11, RHO) /* symbol: 'd', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_MakeClosure(R1, Rsh_const(CCP, 10), &f_n2044946016_0_1, Rsh_const(CCP, 11), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 12), &C15, RHO) /* symbol: 'h', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 12), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 13)) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 14), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 15), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_n2044946016_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 9;
  CHECK_OVERFLOW(9);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'n' (used: 2)
  DEFINE_BCELL2(C4); // symbol: 'i' (used: 2)
  DEFINE_BCELL2(C7); // symbol: 'd' (used: 4)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);
  DEFINE_VAL(R8);
  DEFINE_VAL(R9);

  Rsh_LdConstDbl(R1, Rsh_const(CCP, 0)) /* stack: 1 */;
  Rsh_GetVar(R2, Rsh_const(CCP, 1), &C2, RHO) /* symbol: 'n', stack: 2 */;
  Rsh_Colon(R1, *R2, Rsh_const(CCP, 2), RHO) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 3), Rsh_const(CCP, 4), &C4, RHO) /* symbol: 'i', stack: 3 */;
goto L12;
L4: /* stack: 3 */
  Rsh_LdConstDbl(R4, Rsh_const(CCP, 5)) /* stack: 4 */;
  Rsh_StartAssign(R4, R5, R6, R7, Rsh_const(CCP, 6), &C7, RHO) /* symbol: 'd', stack: 7 */;
  if (Rsh_StartSubassignN(R6, R7, Rsh_const(CCP, 7), RHO) /* stack: 7 */) {
	goto L10;
}
  Rsh_LdConstDbl(R8, Rsh_const(CCP, 8)) /* stack: 8 */;
  Rsh_LdConstDbl(R9, Rsh_const(CCP, 9)) /* stack: 9 */;
  Rsh_MatSubassign(R6, *R7, *R8, *R9, Rsh_const(CCP, 7), RHO) /* stack: 6 */;
L10: /* stack: 6 */
  Rsh_EndAssign(R4, *R5, *R6, Rsh_const(CCP, 6), &C7, RHO) /* symbol: 'd', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L12: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C4, RHO) /* symbol: 'i', stack: 3 */) {
	goto L4;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 6), &C7, RHO) /* symbol: 'd', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
