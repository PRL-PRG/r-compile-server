package org.prlprg.bc;

/** Bytecode operations. Synced with those in `gnur/src/eval.c`. */
@SuppressWarnings({"MissingJavadoc", "SpellCheckingInspection"})
public enum BcOp {
  BCMISMATCH,
  RETURN,
  GOTO,
  BRIFNOT,
  POP,
  DUP,
  PRINTVALUE,
  STARTLOOPCNTXT,
  ENDLOOPCNTXT,
  DOLOOPNEXT,
  DOLOOPBREAK,
  STARTFOR,
  STEPFOR,
  ENDFOR,
  SETLOOPVAL,
  INVISIBLE,
  LDCONST,
  LDNULL,
  LDTRUE,
  LDFALSE,
  GETVAR,
  DDVAL,
  SETVAR,
  GETFUN,
  GETGLOBFUN,
  GETSYMFUN,
  GETBUILTIN,
  GETINTLBUILTIN,
  CHECKFUN,
  MAKEPROM,
  DOMISSING,
  SETTAG,
  DODOTS,
  PUSHARG,
  PUSHCONSTARG,
  PUSHNULLARG,
  PUSHTRUEARG,
  PUSHFALSEARG,
  CALL,
  CALLBUILTIN,
  CALLSPECIAL,
  MAKECLOSURE,
  UMINUS,
  UPLUS,
  ADD,
  SUB,
  MUL,
  DIV,
  EXPT,
  SQRT,
  EXP,
  EQ,
  NE,
  LT,
  LE,
  GE,
  GT,
  AND,
  OR,
  NOT,
  DOTSERR,
  STARTASSIGN,
  ENDASSIGN,
  STARTSUBSET,
  DFLTSUBSET,
  STARTSUBASSIGN,
  DFLTSUBASSIGN,
  STARTC,
  DFLTC,
  STARTSUBSET2,
  DFLTSUBSET2,
  STARTSUBASSIGN2,
  DFLTSUBASSIGN2,
  DOLLAR,
  DOLLARGETS,
  ISNULL,
  ISLOGICAL,
  ISINTEGER,
  ISDOUBLE,
  ISCOMPLEX,
  ISCHARACTER,
  ISSYMBOL,
  ISOBJECT,
  ISNUMERIC,
  VECSUBSET,
  MATSUBSET,
  VECSUBASSIGN,
  MATSUBASSIGN,
  AND1ST,
  AND2ND,
  OR1ST,
  OR2ND,
  GETVAR_MISSOK,
  DDVAL_MISSOK,
  VISIBLE,
  SETVAR2,
  STARTASSIGN2,
  ENDASSIGN2,
  SETTER_CALL,
  GETTER_CALL,
  SWAP,
  DUP2ND,
  SWITCH,
  RETURNJMP,
  STARTSUBSET_N,
  STARTSUBASSIGN_N,
  VECSUBSET2,
  MATSUBSET2,
  VECSUBASSIGN2,
  MATSUBASSIGN2,
  STARTSUBSET2_N,
  STARTSUBASSIGN2_N,
  SUBSET_N,
  SUBSET2_N,
  SUBASSIGN_N,
  SUBASSIGN2_N,
  LOG,
  LOGBASE,
  MATH1,
  DOTCALL,
  COLON,
  SEQALONG,
  SEQLEN,
  BASEGUARD,
  INCLNK,
  DECLNK,
  DECLNK_N,
  INCLNKSTK,
  DECLNKSTK;

  /** Returns the operation represented by the given integer in GNU-R. */
  public static BcOp valueOf(int i) {
    return values()[i];
  }

  /** Returns the integer representation of this operation in GNU-R. */
  public int value() {
    return ordinal();
  }

  /**
   * Returns the number of arguments this operation takes.
   *
   * @return
   */
  @SuppressWarnings("DuplicateBranchesInSwitch")
  public int nArgs() {
    return switch (this) {
      case BCMISMATCH -> throw new BcFromRawException("invalid opcode " + BCMISMATCH.value());
      case RETURN -> 0;
      case GOTO -> 1;
      case BRIFNOT -> 2;
      case POP -> 0;
      case DUP -> 0;
      case PRINTVALUE -> 0;
      case STARTLOOPCNTXT -> 2;
      case ENDLOOPCNTXT -> 1;
      case DOLOOPNEXT -> 0;
      case DOLOOPBREAK -> 0;
      case STARTFOR -> 3;
      case STEPFOR -> 1;
      case ENDFOR -> 0;
      case SETLOOPVAL -> 0;
      case INVISIBLE -> 0;
      case LDCONST -> 1;
      case LDNULL -> 0;
      case LDTRUE -> 0;
      case LDFALSE -> 0;
      case GETVAR -> 1;
      case DDVAL -> 1;
      case SETVAR -> 1;
      case GETFUN -> 1;
      case GETGLOBFUN -> 1;
      case GETSYMFUN -> 1;
      case GETBUILTIN -> 1;
      case GETINTLBUILTIN -> 1;
      case CHECKFUN -> 0;
      case MAKEPROM -> 1;
      case DOMISSING -> 0;
      case SETTAG -> 1;
      case DODOTS -> 0;
      case PUSHARG -> 0;
      case PUSHCONSTARG -> 1;
      case PUSHNULLARG -> 0;
      case PUSHTRUEARG -> 0;
      case PUSHFALSEARG -> 0;
      case CALL -> 1;
      case CALLBUILTIN -> 1;
      case CALLSPECIAL -> 1;
      case MAKECLOSURE -> 1;
      case UMINUS -> 1;
      case UPLUS -> 1;
      case ADD -> 1;
      case SUB -> 1;
      case MUL -> 1;
      case DIV -> 1;
      case EXPT -> 1;
      case SQRT -> 1;
      case EXP -> 1;
      case EQ -> 1;
      case NE -> 1;
      case LT -> 1;
      case LE -> 1;
      case GE -> 1;
      case GT -> 1;
      case AND -> 1;
      case OR -> 1;
      case NOT -> 1;
      case DOTSERR -> 0;
      case STARTASSIGN -> 1;
      case ENDASSIGN -> 1;
      case STARTSUBSET -> 2;
      case DFLTSUBSET -> 0;
      case STARTSUBASSIGN -> 2;
      case DFLTSUBASSIGN -> 0;
      case STARTC -> 2;
      case DFLTC -> 0;
      case STARTSUBSET2 -> 2;
      case DFLTSUBSET2 -> 0;
      case STARTSUBASSIGN2 -> 2;
      case DFLTSUBASSIGN2 -> 0;
      case DOLLAR -> 2;
      case DOLLARGETS -> 2;
      case ISNULL -> 0;
      case ISLOGICAL -> 0;
      case ISINTEGER -> 0;
      case ISDOUBLE -> 0;
      case ISCOMPLEX -> 0;
      case ISCHARACTER -> 0;
      case ISSYMBOL -> 0;
      case ISOBJECT -> 0;
      case ISNUMERIC -> 0;
      case VECSUBSET -> 1;
      case MATSUBSET -> 1;
      case VECSUBASSIGN -> 1;
      case MATSUBASSIGN -> 1;
      case AND1ST -> 2;
      case AND2ND -> 1;
      case OR1ST -> 2;
      case OR2ND -> 1;
      case GETVAR_MISSOK -> 1;
      case DDVAL_MISSOK -> 1;
      case VISIBLE -> 0;
      case SETVAR2 -> 1;
      case STARTASSIGN2 -> 1;
      case ENDASSIGN2 -> 1;
      case SETTER_CALL -> 2;
      case GETTER_CALL -> 1;
      case SWAP -> 0;
      case DUP2ND -> 0;
      case SWITCH -> 4;
      case RETURNJMP -> 0;
      case STARTSUBSET_N -> 2;
      case STARTSUBASSIGN_N -> 2;
      case VECSUBSET2 -> 1;
      case MATSUBSET2 -> 1;
      case VECSUBASSIGN2 -> 1;
      case MATSUBASSIGN2 -> 1;
      case STARTSUBSET2_N -> 2;
      case STARTSUBASSIGN2_N -> 2;
      case SUBSET_N -> 2;
      case SUBSET2_N -> 2;
      case SUBASSIGN_N -> 2;
      case SUBASSIGN2_N -> 2;
      case LOG -> 1;
      case LOGBASE -> 1;
      case MATH1 -> 2;
      case DOTCALL -> 2;
      case COLON -> 1;
      case SEQALONG -> 1;
      case SEQLEN -> 1;
      case BASEGUARD -> 2;
      case INCLNK -> 0;
      case DECLNK -> 0;
      case DECLNK_N -> 1;
      case INCLNKSTK -> 0;
      case DECLNKSTK -> 0;
    };
  }
}
