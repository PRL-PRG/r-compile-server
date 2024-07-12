#include <Rsh.h>

// constant pool accessor
#define CONST(i)        ((SEXP *) STDVEC_DATAPTR(CP))[i]


SEXP f_623453645(SEXP ENV, SEXP CP) {
SEXP _0 = NULL, _1 = NULL;

// begin: LdConst[constant=#1:RealSXP]
_0 = CONST(0);
// end: LdConst[constant=#1:RealSXP]

// begin: SetVar[name=#2:SymSXP]
Rsh_set_var(CONST(1), _0, ENV);
// end: SetVar[name=#2:SymSXP]

// begin: Pop[]
UNPROTECT(0);
// end: Pop[]

// begin: LdConst[constant=#1:RealSXP]
_0 = CONST(0);
// end: LdConst[constant=#1:RealSXP]

// begin: SetVar[name=#4:SymSXP]
Rsh_set_var(CONST(2), _0, ENV);
// end: SetVar[name=#4:SymSXP]

// begin: Pop[]
UNPROTECT(0);
// end: Pop[]

// begin: GetVar[name=#4:SymSXP]
L6:
_0 = PROTECT(Rsh_get_var(CONST(2), ENV));
// end: GetVar[name=#4:SymSXP]

// begin: GetVar[name=#6:SymSXP]
_1 = PROTECT(Rsh_get_var(CONST(3), ENV));
// end: GetVar[name=#6:SymSXP]

// begin: Lt[ast=#7:LangSXP]
_0 = Rsh_fast_binary(LT, _0, _1);
UNPROTECT(2);
_0 = PROTECT(_0);
// end: Lt[ast=#7:LangSXP]

// begin: BrIfNot[ast=#8:LangSXP, label=@21]
if (!Rsh_is_true(_0, CONST(4))) { UNPROTECT(1); goto L21; }
UNPROTECT(1);
// end: BrIfNot[ast=#8:LangSXP, label=@21]

// begin: GetVar[name=#2:SymSXP]
_0 = PROTECT(Rsh_get_var(CONST(1), ENV));
// end: GetVar[name=#2:SymSXP]

// begin: GetVar[name=#4:SymSXP]
_1 = PROTECT(Rsh_get_var(CONST(2), ENV));
// end: GetVar[name=#4:SymSXP]

// begin: Add[ast=#9:LangSXP]
_0 = Rsh_fast_binary(ADD, _0, _1);
UNPROTECT(2);
_0 = PROTECT(_0);
// end: Add[ast=#9:LangSXP]

// begin: SetVar[name=#2:SymSXP]
Rsh_set_var(CONST(1), _0, ENV);
// end: SetVar[name=#2:SymSXP]

// begin: Pop[]
UNPROTECT(1);
// end: Pop[]

// begin: GetVar[name=#4:SymSXP]
_0 = PROTECT(Rsh_get_var(CONST(2), ENV));
// end: GetVar[name=#4:SymSXP]

// begin: LdConst[constant=#11:RealSXP]
_1 = CONST(5);
// end: LdConst[constant=#11:RealSXP]

// begin: Add[ast=#12:LangSXP]
_0 = Rsh_fast_binary(ADD, _0, _1);
UNPROTECT(1);
_0 = PROTECT(_0);
// end: Add[ast=#12:LangSXP]

// begin: SetVar[name=#4:SymSXP]
Rsh_set_var(CONST(2), _0, ENV);
// end: SetVar[name=#4:SymSXP]

// begin: Pop[]
UNPROTECT(1);
// end: Pop[]

// begin: Goto[label=@6]
goto L6;
// end: Goto[label=@6]

// begin: LdNull[]
L21:
R_Visible = TRUE;
_0 = R_NilValue;
// end: LdNull[]

// begin: Pop[]
UNPROTECT(0);
// end: Pop[]

// begin: GetVar[name=#2:SymSXP]
_0 = PROTECT(Rsh_get_var(CONST(1), ENV));
// end: GetVar[name=#2:SymSXP]

// begin: Return[]
UNPROTECT(1);
return _0;
// end: Return[]

}
