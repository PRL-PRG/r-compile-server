#include <runtime.h>
SEXP f_1239795264_0(SEXP RHO, SEXP CCP);
SEXP f_1239795264_0_1(SEXP RHO, SEXP CCP);
SEXP f_1239795264_0_2(SEXP RHO, SEXP CCP);
SEXP f_1239795264_0(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 3;
  CHECK_OVERFLOW(3);
  // CELLS
  DEFINE_BCELL2(C3); // symbol: 'permute' (used: 1)
  DEFINE_BCELL2(C7); // symbol: 'swap' (used: 1)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);

  Rsh_MakeClosure(R1, Rsh_const(CCP, 0), &f_1239795264_0_1, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'permute', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_MakeClosure(R1, Rsh_const(CCP, 3), &f_1239795264_0_2, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'swap', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetFun(R1, R2, R3, Rsh_const(CCP, 2), RHO) /* stack: 3 */;
  Rsh_PushConstArg(R2, R3, Rsh_const(CCP, 6)) /* stack: 3 */;
  Rsh_MakeProm(R1, R2, R3, Rsh_const(CCP, 7), RHO) /* stack: 3 */;
  Rsh_Call(R1, *R2, *R3, Rsh_const(CCP, 8), RHO) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_1239795264_0_1(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 7;
  CHECK_OVERFLOW(7);
  // CELLS
  DEFINE_BCELL2(C1); // symbol: 'n' (used: 3)
  DEFINE_BCELL2(C7); // symbol: 'count' (used: 5)
  DEFINE_BCELL2(C10); // symbol: 'i' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);
  DEFINE_VAL(R6);
  DEFINE_VAL(R7);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'n', stack: 1 */;
  Rsh_LdConstDbl(R2, Rsh_const(CCP, 1)) /* stack: 2 */;
  Rsh_Eq(R1, *R2, Rsh_const(CCP, 2), RHO) /* stack: 1 */;
  if (Rsh_BrIfNot(*R1, Rsh_const(CCP, 3), RHO) /* stack: 0 */) {
	goto L7;
}
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 1)) /* stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
  goto L8;
L7: /* stack: 1 */
  Rsh_LdNull(R1) /* stack: 1 */;
L8: /* stack: 1 */
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 4)) /* stack: 1 */;
  Rsh_SetVar(R1, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'count', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_LdConstDbl(R1, Rsh_const(CCP, 1)) /* stack: 1 */;
  Rsh_GetVar(R2, Rsh_const(CCP, 0), &C1, RHO) /* symbol: 'n', stack: 2 */;
  Rsh_Colon(R1, *R2, Rsh_const(CCP, 6), RHO) /* stack: 1 */;
  Rsh_StartFor(R1, R2, R3, Rsh_const(CCP, 7), Rsh_const(CCP, 8), &C10, RHO) /* symbol: 'i', stack: 3 */;
goto L24;
L16: /* stack: 3 */
  Rsh_GetVar(R4, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'count', stack: 4 */;
  Rsh_GetFun(R5, R6, R7, Rsh_const(CCP, 9), RHO) /* stack: 7 */;
  Rsh_MakeProm(R5, R6, R7, Rsh_const(CCP, 10), RHO) /* stack: 7 */;
  Rsh_MakeProm(R5, R6, R7, Rsh_const(CCP, 11), RHO) /* stack: 7 */;
  Rsh_Call(R5, *R6, *R7, Rsh_const(CCP, 12), RHO) /* stack: 5 */;
  Rsh_Add(R4, *R5, Rsh_const(CCP, 13), RHO) /* stack: 4 */;
  Rsh_SetVar(R4, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'count', stack: 4 */;
  Rsh_Pop(*R4) /* stack: 3 */;
L24: /* stack: 3 */
  if (Rsh_StepFor(R1, R2, R3, &C10, RHO) /* symbol: 'i', stack: 3 */) {
	goto L16;
}
  Rsh_EndFor(R1, *R2, *R3, RHO) /* stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'count', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
SEXP f_1239795264_0_2(SEXP RHO, SEXP CCP) {
  int STACK_SAVE = 5;
  CHECK_OVERFLOW(5);
  // CELLS
  DEFINE_BCELL2(C2); // symbol: 'list' (used: 7)
  DEFINE_BCELL2(C3); // symbol: 'i' (used: 2)
  DEFINE_BCELL2(C4); // symbol: 'temp' (used: 2)
  DEFINE_BCELL2(C7); // symbol: 'j' (used: 2)
  // REGISTERS
  DEFINE_VAL(R1);
  DEFINE_VAL(R2);
  DEFINE_VAL(R3);
  DEFINE_VAL(R4);
  DEFINE_VAL(R5);

  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 1 */;
  if (Rsh_StartSubsetN(R1, Rsh_const(CCP, 1), RHO) /* stack: 1 */) {
	goto L4;
}
  Rsh_GetVarMissOk(R2, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'i', stack: 2 */;
  Rsh_VecSubset(R1, *R2, Rsh_const(CCP, 1), RHO) /* stack: 1 */;
L4: /* stack: 1 */
  Rsh_SetVar(R1, Rsh_const(CCP, 3), &C4, RHO) /* symbol: 'temp', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 1 */;
  if (Rsh_StartSubsetN(R1, Rsh_const(CCP, 4), RHO) /* stack: 1 */) {
	goto L10;
}
  Rsh_GetVarMissOk(R2, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'j', stack: 2 */;
  Rsh_VecSubset(R1, *R2, Rsh_const(CCP, 4), RHO) /* stack: 1 */;
L10: /* stack: 1 */
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 4 */;
  if (Rsh_StartSubassignN(R3, R4, Rsh_const(CCP, 6), RHO) /* stack: 4 */) {
	goto L14;
}
  Rsh_GetVarMissOk(R5, Rsh_const(CCP, 2), &C3, RHO) /* symbol: 'i', stack: 5 */;
  Rsh_VecSubassign(R3, *R4, *R5, Rsh_const(CCP, 6), RHO) /* stack: 3 */;
L14: /* stack: 3 */
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 3), &C4, RHO) /* symbol: 'temp', stack: 1 */;
  Rsh_StartAssign(R1, R2, R3, R4, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 4 */;
  if (Rsh_StartSubassignN(R3, R4, Rsh_const(CCP, 7), RHO) /* stack: 4 */) {
	goto L21;
}
  Rsh_GetVarMissOk(R5, Rsh_const(CCP, 5), &C7, RHO) /* symbol: 'j', stack: 5 */;
  Rsh_VecSubassign(R3, *R4, *R5, Rsh_const(CCP, 7), RHO) /* stack: 3 */;
L21: /* stack: 3 */
  Rsh_EndAssign(R1, *R2, *R3, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 1 */;
  Rsh_Pop(*R1) /* stack: 0 */;
  Rsh_GetVar(R1, Rsh_const(CCP, 0), &C2, RHO) /* symbol: 'list', stack: 1 */;
  Rsh_Return(R1, STACK_SAVE) /* stack: 1 */;
}
