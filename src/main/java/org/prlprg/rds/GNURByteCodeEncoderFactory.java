package org.prlprg.rds;

import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.BcInstr;

public class GNURByteCodeEncoderFactory {
  private final BcCode bc;
  private final ImmutableIntArray.Builder builder;
  private final LabelMapping mapping;

  GNURByteCodeEncoderFactory(BcCode bc) {
    this.bc = bc;
    this.builder = ImmutableIntArray.builder();
    this.mapping = LabelMapping.toGNUR(bc);
  }

  public ImmutableIntArray buildRaw() {
    // Write the bytecode version first
    builder.add(Bc.R_BC_VERSION);
    // Write the serialized instruction, containing the opcode and the arguments
    for (var instr : bc) {
      // Add the opcode
      builder.add(instr.op().value());
      // Add the arguments
      var args = args(instr);
      if (args.length != instr.op().nArgs())
        throw new AssertionError(
            "Sanity check failed: number of arguments "
                + "serialized for "
                + instr.op().name()
                + " is not equal to instr.op().nArgs()");
      builder.addAll(args);
    }
    return builder.build();
  }

  /** Converts the arguments of the provided BcInstr to a "raw" format; i.e. an array of integers */
  public int[] args(BcInstr instr) {
    return switch (instr) {
      case BcInstr.Goto i -> new int[] {mapping.extract(i.label())};
      case BcInstr.BrIfNot i -> new int[] {i.ast().idx(), mapping.extract(i.label())};
      case BcInstr.StartLoopCntxt i ->
          new int[] {i.isForLoop() ? 1 : 0, mapping.extract(i.break_())};
      case BcInstr.EndLoopCntxt i ->
          new int[] {
            i.isForLoop() ? 1 : 0,
          };
      case BcInstr.StartFor i ->
          new int[] {i.ast().idx(), i.elemName().idx(), mapping.extract(i.end())};
      case BcInstr.StepFor i -> new int[] {mapping.extract(i.end())};
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
      case BcInstr.StartSubassign i -> new int[] {i.ast().idx(), mapping.extract(i.after())};
      case BcInstr.StartC i -> new int[] {i.ast().idx()};
      case BcInstr.StartSubset2 i -> new int[] {i.ast().idx()};
      case BcInstr.StartSubassign2 i -> new int[] {i.ast().idx()};
      case BcInstr.Dollar i -> new int[] {i.ast().idx()};
      case BcInstr.DollarGets i -> new int[] {i.ast().idx()};
      case BcInstr.VecSubset i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubset i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.VecSubassign i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubassign i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.And1st i -> new int[] {i.ast().idx(), mapping.extract(i.shortCircuit())};
      case BcInstr.And2nd i -> new int[] {i.ast().idx()};
      case BcInstr.Or1st i -> new int[] {i.ast().idx(), mapping.extract(i.shortCircuit())};
      case BcInstr.Or2nd i -> new int[] {i.ast().idx()};
      case BcInstr.GetVarMissOk i -> new int[] {i.name().idx()};
      case BcInstr.DdValMissOk i -> new int[] {i.name().idx()};
      case BcInstr.SetVar2 i -> new int[] {i.name().idx()};
      case BcInstr.StartAssign2 i -> new int[] {i.name().idx()};
      case BcInstr.EndAssign2 i -> new int[] {i.name().idx()};
      case BcInstr.SetterCall i -> new int[] {i.ast().idx(), i.valueExpr().idx()};
      case BcInstr.GetterCall i -> new int[] {i.ast().idx()};
      case BcInstr.Switch i ->
          new int[] {
            i.ast().idx(),
            i.names() == null ? -1 : i.names().idx(),
            i.chrLabelsIdx() == null ? -1 : i.chrLabelsIdx().idx(),
            i.numLabelsIdx() == null ? -1 : i.numLabelsIdx().idx(),
          };
      case BcInstr.StartSubsetN i ->
          new int[] {
            i.ast().idx(), mapping.extract(i.after()),
          };
      case BcInstr.StartSubassignN i ->
          new int[] {
            i.ast().idx(), mapping.extract(i.after()),
          };
      case BcInstr.VecSubset2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubset2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.VecSubassign2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.MatSubassign2 i -> new int[] {i.ast() == null ? -1 : i.ast().idx()};
      case BcInstr.StartSubset2N i -> new int[] {i.ast().idx(), mapping.extract(i.after())};
      case BcInstr.StartSubassign2N i -> new int[] {i.ast().idx(), mapping.extract(i.after())};
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
      case BcInstr.BaseGuard i -> new int[] {i.expr().idx(), mapping.extract(i.after())};
      case BcInstr.DeclnkN i -> new int[] {i.n()};

        // Otherwise, there are no arguments we need to serialize
      default -> new int[0];
    };
  }
}
