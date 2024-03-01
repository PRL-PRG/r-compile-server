package org.prlprg.bc;

import com.google.common.primitives.ImmutableIntArray;
import java.util.List;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

class FromRawBCFactory {
  private final ImmutableIntArray byteCode;
  private final ConstPool.Builder cpb;
  private final BcCode.Builder cbb;
  private final LabelMapping labelMapping;
  int curr;

  FromRawBCFactory(ImmutableIntArray byteCode, List<SEXP> consts) {
    this.byteCode = byteCode;

    cpb = new ConstPool.Builder(consts);
    cbb = new BcCode.Builder();
    labelMapping = LabelMapping.from(byteCode);

    curr = 1;
  }

  public Bc create() {
    var code = buildCode();
    var pool = cpb.build();
    return new Bc(code, pool);
  }

  private BcCode buildCode() throws BcFromRawException {
    if (byteCode.isEmpty()) {
      throw new BcFromRawException("Bytecode is empty, needs at least version number");
    }
    if (byteCode.get(0) != Bc.R_BC_VERSION) {
      throw new BcFromRawException("Unsupported bytecode version: " + byteCode.get(0));
    }

    int sanityCheckJ = 0;
    while (curr < byteCode.length()) {
      try {
        var instr = decode();

        cbb.add(instr);
        sanityCheckJ++;

        // FIXME: too many exceptions
        try {
          var sanityCheckJFromI = labelMapping.make(curr).getTarget();
          if (sanityCheckJFromI != sanityCheckJ) {
            throw new AssertionError(
                "expected target offset " + sanityCheckJ + ", got " + sanityCheckJFromI);
          }
        } catch (IllegalArgumentException | AssertionError e) {
          throw new AssertionError(
              "BcInstrs.fromRaw and BcInstrs.sizeFromRaw are out of sync, at instruction " + instr,
              e);
        }
      } catch (BcFromRawException e) {
        throw new BcFromRawException(
            "malformed bytecode at " + curr + "\nBytecode up to this point: " + cbb.build(), e);
      }
    }

    return cbb.build();
  }

  BcInstr decode() {
    BcOp op;
    try {
      op = BcOp.valueOf(byteCode.get(curr++));
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (instruction) at " + byteCode.get(curr - 1));
    }

    try {
      return switch (op) {
        case BCMISMATCH ->
            throw new BcFromRawException("invalid opcode " + BcOp.BCMISMATCH.value());
        case RETURN -> new BcInstr.Return();
        case GOTO -> new BcInstr.Goto(labelMapping.make(byteCode.get(curr++)));
        case BRIFNOT ->
            new BcInstr.BrIfNot(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case POP -> new BcInstr.Pop();
        case DUP -> new BcInstr.Dup();
        case PRINTVALUE -> new BcInstr.PrintValue();
        case STARTLOOPCNTXT ->
            new BcInstr.StartLoopCntxt(
                byteCode.get(curr++) != 0, labelMapping.make(byteCode.get(curr++)));
        case ENDLOOPCNTXT -> new BcInstr.EndLoopCntxt(byteCode.get(curr++) != 0);
        case DOLOOPNEXT -> new BcInstr.DoLoopNext();
        case DOLOOPBREAK -> new BcInstr.DoLoopBreak();
        case STARTFOR ->
            new BcInstr.StartFor(
                cpb.indexLang(byteCode.get(curr++)),
                cpb.indexSym(byteCode.get(curr++)),
                labelMapping.make(byteCode.get(curr++)));
        case STEPFOR -> new BcInstr.StepFor(labelMapping.make(byteCode.get(curr++)));
        case ENDFOR -> new BcInstr.EndFor();
        case SETLOOPVAL -> new BcInstr.SetLoopVal();
        case INVISIBLE -> new BcInstr.Invisible();
        case LDCONST -> new BcInstr.LdConst(cpb.indexAny(byteCode.get(curr++)));
        case LDNULL -> new BcInstr.LdNull();
        case LDTRUE -> new BcInstr.LdTrue();
        case LDFALSE -> new BcInstr.LdFalse();
        case GETVAR -> new BcInstr.GetVar(cpb.indexSym(byteCode.get(curr++)));
        case DDVAL -> new BcInstr.DdVal(cpb.indexSym(byteCode.get(curr++)));
        case SETVAR -> new BcInstr.SetVar(cpb.indexSym(byteCode.get(curr++)));
        case GETFUN -> new BcInstr.GetFun(cpb.indexSym(byteCode.get(curr++)));
        case GETGLOBFUN -> new BcInstr.GetGlobFun(cpb.indexSym(byteCode.get(curr++)));
        case GETSYMFUN -> new BcInstr.GetSymFun(cpb.indexSym(byteCode.get(curr++)));
        case GETBUILTIN -> new BcInstr.GetBuiltin(cpb.indexSym(byteCode.get(curr++)));
        case GETINTLBUILTIN -> new BcInstr.GetIntlBuiltin(cpb.indexSym(byteCode.get(curr++)));
        case CHECKFUN -> new BcInstr.CheckFun();
        case MAKEPROM -> new BcInstr.MakeProm(cpb.indexAny(byteCode.get(curr++)));
        case DOMISSING -> new BcInstr.DoMissing();
        case SETTAG -> new BcInstr.SetTag(cpb.indexStrOrSymOrNil(byteCode.get(curr++)));
        case DODOTS -> new BcInstr.DoDots();
        case PUSHARG -> new BcInstr.PushArg();
        case PUSHCONSTARG -> new BcInstr.PushConstArg(cpb.indexAny(byteCode.get(curr++)));
        case PUSHNULLARG -> new BcInstr.PushNullArg();
        case PUSHTRUEARG -> new BcInstr.PushTrueArg();
        case PUSHFALSEARG -> new BcInstr.PushFalseArg();
        case CALL -> new BcInstr.Call(cpb.indexLang(byteCode.get(curr++)));
        case CALLBUILTIN -> new BcInstr.CallBuiltin(cpb.indexLang(byteCode.get(curr++)));
        case CALLSPECIAL -> new BcInstr.CallSpecial(cpb.indexLang(byteCode.get(curr++)));
        case MAKECLOSURE -> new BcInstr.MakeClosure(cpb.indexClosure(byteCode.get(curr++)));
        case UMINUS -> new BcInstr.UMinus(cpb.indexLang(byteCode.get(curr++)));
        case UPLUS -> new BcInstr.UPlus(cpb.indexLang(byteCode.get(curr++)));
        case ADD -> new BcInstr.Add(cpb.indexLang(byteCode.get(curr++)));
        case SUB -> new BcInstr.Sub(cpb.indexLang(byteCode.get(curr++)));
        case MUL -> new BcInstr.Mul(cpb.indexLang(byteCode.get(curr++)));
        case DIV -> new BcInstr.Div(cpb.indexLang(byteCode.get(curr++)));
        case EXPT -> new BcInstr.Expt(cpb.indexLang(byteCode.get(curr++)));
        case SQRT -> new BcInstr.Sqrt(cpb.indexLang(byteCode.get(curr++)));
        case EXP -> new BcInstr.Exp(cpb.indexLang(byteCode.get(curr++)));
        case EQ -> new BcInstr.Eq(cpb.indexLang(byteCode.get(curr++)));
        case NE -> new BcInstr.Ne(cpb.indexLang(byteCode.get(curr++)));
        case LT -> new BcInstr.Lt(cpb.indexLang(byteCode.get(curr++)));
        case LE -> new BcInstr.Le(cpb.indexLang(byteCode.get(curr++)));
        case GE -> new BcInstr.Ge(cpb.indexLang(byteCode.get(curr++)));
        case GT -> new BcInstr.Gt(cpb.indexLang(byteCode.get(curr++)));
        case AND -> new BcInstr.And(cpb.indexLang(byteCode.get(curr++)));
        case OR -> new BcInstr.Or(cpb.indexLang(byteCode.get(curr++)));
        case NOT -> new BcInstr.Not(cpb.indexLang(byteCode.get(curr++)));
        case DOTSERR -> new BcInstr.DotsErr();
        case STARTASSIGN -> new BcInstr.StartAssign(cpb.indexSym(byteCode.get(curr++)));
        case ENDASSIGN -> new BcInstr.EndAssign(cpb.indexSym(byteCode.get(curr++)));
        case STARTSUBSET ->
            new BcInstr.StartSubset(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case DFLTSUBSET -> new BcInstr.DfltSubset();
        case STARTSUBASSIGN ->
            new BcInstr.StartSubassign(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case DFLTSUBASSIGN -> new BcInstr.DfltSubassign();
        case STARTC ->
            new BcInstr.StartC(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case DFLTC -> new BcInstr.DfltC();
        case STARTSUBSET2 ->
            new BcInstr.StartSubset2(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case DFLTSUBSET2 -> new BcInstr.DfltSubset2();
        case STARTSUBASSIGN2 ->
            new BcInstr.StartSubassign2(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case DFLTSUBASSIGN2 -> new BcInstr.DfltSubassign2();
        case DOLLAR ->
            new BcInstr.Dollar(
                cpb.indexLang(byteCode.get(curr++)), cpb.indexSym(byteCode.get(curr++)));
        case DOLLARGETS ->
            new BcInstr.DollarGets(
                cpb.indexLang(byteCode.get(curr++)), cpb.indexSym(byteCode.get(curr++)));
        case ISNULL -> new BcInstr.IsNull();
        case ISLOGICAL -> new BcInstr.IsLogical();
        case ISINTEGER -> new BcInstr.IsInteger();
        case ISDOUBLE -> new BcInstr.IsDouble();
        case ISCOMPLEX -> new BcInstr.IsComplex();
        case ISCHARACTER -> new BcInstr.IsCharacter();
        case ISSYMBOL -> new BcInstr.IsSymbol();
        case ISOBJECT -> new BcInstr.IsObject();
        case ISNUMERIC -> new BcInstr.IsNumeric();
        case VECSUBSET -> new BcInstr.VecSubset(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case MATSUBSET -> new BcInstr.MatSubset(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case VECSUBASSIGN ->
            new BcInstr.VecSubassign(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case MATSUBASSIGN ->
            new BcInstr.MatSubassign(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case AND1ST ->
            new BcInstr.And1st(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case AND2ND -> new BcInstr.And2nd(cpb.indexLang(byteCode.get(curr++)));
        case OR1ST ->
            new BcInstr.Or1st(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case OR2ND -> new BcInstr.Or2nd(cpb.indexLang(byteCode.get(curr++)));
        case GETVAR_MISSOK -> new BcInstr.GetVarMissOk(cpb.indexSym(byteCode.get(curr++)));
        case DDVAL_MISSOK -> new BcInstr.DdValMissOk(cpb.indexSym(byteCode.get(curr++)));
        case VISIBLE -> new BcInstr.Visible();
        case SETVAR2 -> new BcInstr.SetVar2(cpb.indexSym(byteCode.get(curr++)));
        case STARTASSIGN2 -> new BcInstr.StartAssign2(cpb.indexSym(byteCode.get(curr++)));
        case ENDASSIGN2 -> new BcInstr.EndAssign2(cpb.indexSym(byteCode.get(curr++)));
        case SETTER_CALL ->
            new BcInstr.SetterCall(
                cpb.indexLang(byteCode.get(curr++)), cpb.indexAny(byteCode.get(curr++)));
        case GETTER_CALL -> new BcInstr.GetterCall(cpb.indexLang(byteCode.get(curr++)));
        case SWAP -> new BcInstr.SpecialSwap();
        case DUP2ND -> new BcInstr.Dup2nd();
        case SWITCH -> {
          var ast = cpb.indexLang(byteCode.get(curr++));
          var names = cpb.indexStrOrNil(byteCode.get(curr++));
          var chrLabelsIdx = cpb.indexIntOrNil(byteCode.get(curr++));
          var numlabelsIdx = cpb.indexIntOrNil(byteCode.get(curr++));

          // FIXME: why could it be null?
          if (chrLabelsIdx != null) {
            cpb.reset(chrLabelsIdx, this::remapLabels);
          }

          // FIXME: why could it be null?
          if (numlabelsIdx != null) {
            cpb.reset(numlabelsIdx, this::remapLabels);
          }

          yield new BcInstr.Switch(ast, names, chrLabelsIdx, numlabelsIdx);
        }
        case RETURNJMP -> new BcInstr.ReturnJmp();
        case STARTSUBSET_N ->
            new BcInstr.StartSubsetN(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case STARTSUBASSIGN_N ->
            new BcInstr.StartSubassignN(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case VECSUBSET2 ->
            new BcInstr.VecSubset2(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case MATSUBSET2 ->
            new BcInstr.MatSubset2(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case VECSUBASSIGN2 ->
            new BcInstr.VecSubassign2(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case MATSUBASSIGN2 ->
            new BcInstr.MatSubassign2(cpb.indexLangOrNilIfNegative(byteCode.get(curr++)));
        case STARTSUBSET2_N ->
            new BcInstr.StartSubset2N(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case STARTSUBASSIGN2_N ->
            new BcInstr.StartSubassign2N(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case SUBSET_N ->
            new BcInstr.SubsetN(
                cpb.indexLangOrNilIfNegative(byteCode.get(curr++)), byteCode.get(curr++));
        case SUBSET2_N ->
            new BcInstr.Subset2N(
                cpb.indexLangOrNilIfNegative(byteCode.get(curr++)), byteCode.get(curr++));
        case SUBASSIGN_N ->
            new BcInstr.SubassignN(
                cpb.indexLangOrNilIfNegative(byteCode.get(curr++)), byteCode.get(curr++));
        case SUBASSIGN2_N ->
            new BcInstr.Subassign2N(
                cpb.indexLangOrNilIfNegative(byteCode.get(curr++)), byteCode.get(curr++));
        case LOG -> new BcInstr.Log(cpb.indexLang(byteCode.get(curr++)));
        case LOGBASE -> new BcInstr.LogBase(cpb.indexLang(byteCode.get(curr++)));
        case MATH1 -> new BcInstr.Math1(cpb.indexLang(byteCode.get(curr++)), byteCode.get(curr++));
        case DOTCALL ->
            new BcInstr.DotCall(cpb.indexLang(byteCode.get(curr++)), byteCode.get(curr++));
        case COLON -> new BcInstr.Colon(cpb.indexLang(byteCode.get(curr++)));
        case SEQALONG -> new BcInstr.SeqAlong(cpb.indexLang(byteCode.get(curr++)));
        case SEQLEN -> new BcInstr.SeqLen(cpb.indexLang(byteCode.get(curr++)));
        case BASEGUARD ->
            new BcInstr.BaseGuard(
                cpb.indexLang(byteCode.get(curr++)), labelMapping.make(byteCode.get(curr++)));
        case INCLNK -> new BcInstr.IncLnk();
        case DECLNK -> new BcInstr.DecLnk();
        case DECLNK_N -> new BcInstr.DeclnkN(byteCode.get(curr++));
        case INCLNKSTK -> new BcInstr.IncLnkStk();
        case DECLNKSTK -> new BcInstr.DecLnkStk();
      };
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode " + op + " (arguments)", e);
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new BcFromRawException(
          "invalid opcode " + op + " (arguments, unexpected end of bytecode stream)");
    }
  }

  private IntSXP remapLabels(IntSXP oldLabels) {
    var remapped = oldLabels.data().stream().map(labelMapping::getTarget).toArray();
    return SEXPs.integer(remapped);
  }
}

/**
 * Create labels from GNU-R labels.
 *
 * @implNote This contains a map of positions in GNU-R bytecode to positions in our bytecode. We
 *     need this because every index in our bytecode maps to an instruction, while indexes in
 *     GNU-R's bytecode also map to the bytecode version and instruction metadata.
 */
class LabelMapping {
  private final ImmutableIntArray posMap;

  private LabelMapping(ImmutableIntArray posMap) {
    this.posMap = posMap;
  }

  /** Create a label from a GNU-R label. */
  BcLabel make(int gnurLabel) {
    return new BcLabel(getTarget(gnurLabel));
  }

  int getTarget(int gnurLabel) {
    if (gnurLabel == 0) {
      throw new IllegalArgumentException("GNU-R label 0 is reserved for the version number");
    }

    var target = posMap.get(gnurLabel);
    if (target == -1) {
      var gnurEarlier = gnurLabel - 1;
      int earlier;
      do {
        earlier = posMap.get(gnurEarlier);
      } while (earlier == -1);
      var gnurLater = gnurLabel + 1;
      int later;
      do {
        later = posMap.get(gnurLater);
      } while (later == -1);
      throw new IllegalArgumentException(
          "GNU-R position maps to the middle of one of our instructions: "
              + gnurLabel
              + " between "
              + earlier
              + " and "
              + later);
    }

    return target;
  }

  static LabelMapping from(ImmutableIntArray gnurBC) {
    var builder = new Builder();
    // skip the BC version number
    int i = 1;
    while (i < gnurBC.length()) {
      try {
        var op = BcOp.valueOf(gnurBC.get(i));
        var size = 1 + op.nArgs();
        builder.step(size, 1);
        i += size;
      } catch (BcFromRawException e) {
        throw new BcFromRawException(
            "malformed bytecode at " + i + "\nBytecode up to this point: " + builder.build(), e);
      }
    }
    return builder.build();
  }

  // FIXME: inline
  static class Builder {
    private final ImmutableIntArray.Builder map = ImmutableIntArray.builder();
    private int targetPc = 0;

    Builder() {
      // Add initial mapping of 1 -> 0 (version # is 0)
      map.add(-1);
      map.add(0);
    }

    /** Step <i>m</i> times in the source bytecode and <i>n</i> times in the target bytecode */
    void step(int sourceOffset, @SuppressWarnings("SameParameterValue") int targetOffset) {
      if (sourceOffset < 0 || targetOffset < 0) {
        throw new IllegalArgumentException("offsets must be nonnegative");
      }

      targetPc += targetOffset;
      // Offsets before sourceOffset map to the middle of the previous instruction
      for (int i = 0; i < sourceOffset - 1; i++) {
        map.add(-1);
      }
      // Add target position
      if (sourceOffset > 0) {
        map.add(targetPc);
      }
    }

    LabelMapping build() {
      return new LabelMapping(map.build());
    }
  }
}
