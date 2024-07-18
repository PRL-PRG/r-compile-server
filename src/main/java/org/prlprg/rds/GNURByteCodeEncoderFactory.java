package org.prlprg.rds;

import com.google.common.primitives.ImmutableIntArray;
import org.jetbrains.annotations.NotNull;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXPs;

public class GNURByteCodeEncoderFactory {
  private final BcCode bc;
  private final ImmutableIntArray.Builder builder;
  private final LabelMapping labelMapping;
  private final ConstPool.Builder cpb;

  GNURByteCodeEncoderFactory(Bc bc) {
    this.bc = bc.code();
    this.builder = ImmutableIntArray.builder();
    this.labelMapping = LabelMapping.toGNUR(this.bc);
    this.cpb = new ConstPool.Builder(bc.consts().size());
    this.cpb.addAll(bc.consts());
  }

  public static class GNURByteCode {
    private final ImmutableIntArray instructions;
    private final ConstPool consts;

    private GNURByteCode(ImmutableIntArray instructions, ConstPool consts) {
      this.instructions = instructions;
      this.consts = consts;
    }

    public ImmutableIntArray getInstructions() {
      return instructions;
    }

    public ConstPool getConsts() {
      return consts;
    }
  }

  public GNURByteCode buildRaw() {
    // Write the bytecode version first
    builder.add(Bc.R_BC_VERSION);
    // Write the serialized instruction, containing the opcode and the arguments
    for (var instr : bc) {
      // Add the opcode
      builder.add(instr.op().value());
      // Add the arguments
      var args = args(instr, cpb);
      if (args.length != instr.op().nArgs())
        throw new AssertionError(
            "Sanity check failed: number of arguments "
                + "serialized for "
                + instr.op().name()
                + " is not equal to instr.op().nArgs()");
      builder.addAll(args);
    }
    return new GNURByteCode(builder.build(), cpb.build());
  }

  /** Converts the arguments of the provided BcInstr to a "raw" format; i.e. an array of integers */
  public int[] args(@NotNull BcInstr instr, ConstPool.Builder cpb) {
    return switch (instr) {
      case BcInstr.Goto i -> new int[] {labelMapping.extract(i.label())};
      case BcInstr.BrIfNot i -> new int[] {i.ast().idx(), labelMapping.extract(i.label())};
      case BcInstr.StartLoopCntxt i ->
          new int[] {i.isForLoop() ? 1 : 0, labelMapping.extract(i.end())};
      case BcInstr.EndLoopCntxt i ->
          new int[] {
            i.isForLoop() ? 1 : 0,
          };
      case BcInstr.StartFor i ->
          new int[] {i.ast().idx(), i.elemName().idx(), labelMapping.extract(i.step())};
      case BcInstr.StepFor i -> new int[] {labelMapping.extract(i.body())};
      case BcInstr.LdConst i -> new int[] {i.constant().idx()};
      case BcInstr.GetVar i -> new int[] {i.name().idx()};
      case BcInstr.DdVal i -> new int[] {i.name().idx()};
      case BcInstr.SetVar i -> new int[] {i.name().idx()};
      case BcInstr.GetFun i -> new int[] {i.name().idx()};
      case BcInstr.GetGlobFun i -> new int[] {i.name().idx()};
      case BcInstr.GetSymFun i -> new int[] {i.name().idx()};
      case BcInstr.GetBuiltin i -> new int[] {i.name().idx()};
      case BcInstr.GetIntlBuiltin i -> new int[] {i.name().idx()};
      case BcInstr.MakeProm i -> new int[] {i.code().idx()};
      case BcInstr.SetTag i -> new int[] {i.tag() == null ? -1 : i.tag().idx()};
      case BcInstr.PushConstArg i -> new int[] {i.constant().idx()};
      case BcInstr.Call i -> new int[] {i.ast().idx()};
      case BcInstr.CallBuiltin i -> new int[] {i.ast().idx()};
      case BcInstr.CallSpecial i -> new int[] {i.ast().idx()};
      case BcInstr.MakeClosure i -> new int[] {i.arg().idx()};
      case BcInstr.UMinus i -> new int[] {i.ast().idx()};
      case BcInstr.UPlus i -> new int[] {i.ast().idx()};
      case BcInstr.Add i -> new int[] {i.ast().idx()};
      case BcInstr.Sub i -> new int[] {i.ast().idx()};
      case BcInstr.Mul i -> new int[] {i.ast().idx()};
      case BcInstr.Div i -> new int[] {i.ast().idx()};
      case BcInstr.Expt i -> new int[] {i.ast().idx()};
      case BcInstr.Sqrt i -> new int[] {i.ast().idx()};
      case BcInstr.Exp i -> new int[] {i.ast().idx()};
      case BcInstr.Eq i -> new int[] {i.ast().idx()};
      case BcInstr.Ne i -> new int[] {i.ast().idx()};
      case BcInstr.Lt i -> new int[] {i.ast().idx()};
      case BcInstr.Le i -> new int[] {i.ast().idx()};
      case BcInstr.Ge i -> new int[] {i.ast().idx()};
      case BcInstr.Gt i -> new int[] {i.ast().idx()};
      case BcInstr.And i -> new int[] {i.ast().idx()};
      case BcInstr.Or i -> new int[] {i.ast().idx()};
      case BcInstr.Not i -> new int[] {i.ast().idx()};
      case BcInstr.StartAssign i -> new int[] {i.name().idx()};
      case BcInstr.EndAssign i -> new int[] {i.name().idx()};
      case BcInstr.StartSubset i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.StartSubassign i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.StartC i -> new int[] {i.ast().idx()};
      case BcInstr.StartSubset2 i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.StartSubassign2 i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.Dollar i -> new int[] {i.ast().idx(), i.member().idx()};
      case BcInstr.DollarGets i -> new int[] {i.ast().idx(), i.member().idx()};
      case BcInstr.VecSubset i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubset i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.VecSubassign i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubassign i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.And1st i -> new int[] {i.ast().idx(), labelMapping.extract(i.shortCircuit())};
      case BcInstr.And2nd i -> new int[] {i.ast().idx()};
      case BcInstr.Or1st i -> new int[] {i.ast().idx(), labelMapping.extract(i.shortCircuit())};
      case BcInstr.Or2nd i -> new int[] {i.ast().idx()};
      case BcInstr.GetVarMissOk i -> new int[] {i.name().idx()};
      case BcInstr.DdValMissOk i -> new int[] {i.name().idx()};
      case BcInstr.SetVar2 i -> new int[] {i.name().idx()};
      case BcInstr.StartAssign2 i -> new int[] {i.name().idx()};
      case BcInstr.EndAssign2 i -> new int[] {i.name().idx()};
      case BcInstr.SetterCall i -> new int[] {i.ast().idx(), i.valueExpr().idx()};
      case BcInstr.GetterCall i -> new int[] {i.ast().idx()};
      case BcInstr.Switch i -> {
        var chrLabelsIdx = i.chrLabelsIdx();
        var numLabelsIdx = i.numLabelsIdx();

        // Map the contents of the IntSXP referenced at i.chrLabelsIndex to the updated label
        // positions
        if (chrLabelsIdx != null) {
          cpb.reset(chrLabelsIdx, this::remapLabels);
        }
        // Map the contents of the IntSXP referenced at i.numLabelsIndex to the updated label
        // positions
        if (numLabelsIdx != null && !numLabelsIdx.equals(chrLabelsIdx)) {
          cpb.reset(numLabelsIdx, this::remapLabels);
        }
        yield new int[] {
          i.ast().idx(),
          i.names() == null ? -1 : i.names().idx(),
          i.chrLabelsIdx() == null ? -1 : i.chrLabelsIdx().idx(),
          i.numLabelsIdx() == null ? -1 : i.numLabelsIdx().idx(),
        };
      }

      case BcInstr.StartSubsetN i ->
          new int[] {
            i.ast().idx(), labelMapping.extract(i.after()),
          };
      case BcInstr.StartSubassignN i ->
          new int[] {
            i.ast().idx(), labelMapping.extract(i.after()),
          };
      case BcInstr.VecSubset2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubset2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.VecSubassign2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubassign2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.StartSubset2N i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.StartSubassign2N i -> new int[] {i.ast().idx(), labelMapping.extract(i.after())};
      case BcInstr.SubsetN i -> new int[] {i.ast() == null ? -1 : i.ast().idx(), i.n()};
      case BcInstr.Subset2N i -> new int[] {i.ast() == null ? -1 : i.ast().idx(), i.n()};
      case BcInstr.SubassignN i -> new int[] {i.ast() == null ? -1 : i.ast().idx(), i.n()};
      case BcInstr.Subassign2N i -> new int[] {i.ast() == null ? -1 : i.ast().idx(), i.n()};
      case BcInstr.Log i -> new int[] {i.ast().idx()};
      case BcInstr.LogBase i -> new int[] {i.ast().idx()};
      case BcInstr.Math1 i ->
          new int[] {
            i.ast().idx(), i.funId(),
          };
      case BcInstr.DotCall i -> new int[] {i.ast().idx(), i.numArgs()};
      case BcInstr.Colon i -> new int[] {i.ast().idx()};
      case BcInstr.SeqAlong i -> new int[] {i.ast().idx()};
      case BcInstr.SeqLen i -> new int[] {i.ast().idx()};
      case BcInstr.BaseGuard i -> new int[] {i.expr().idx(), labelMapping.extract(i.ifFail())};
      case BcInstr.DeclnkN i -> new int[] {i.n()};

        // Otherwise, there are no arguments we need to serialize
      default -> new int[0];
    };
  }

  private IntSXP remapLabels(IntSXP oldLabels) {
    var remapped = oldLabels.data().stream().map(labelMapping::getTarget).toArray();
    return SEXPs.integer(remapped);
  }
}
