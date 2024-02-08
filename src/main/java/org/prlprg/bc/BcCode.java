package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import com.google.errorprone.annotations.CanIgnoreReturnValue;
import java.util.Collection;
import java.util.List;
import javax.annotation.concurrent.Immutable;

/**
 * An array of bytecode instructions, which make up the code of a closure or promise. A complete
 * bytecode is {@link Bc}, which also includes a constant pool.
 */
@Immutable
public final class BcCode extends ForwardingList<BcInstr> {
  final ImmutableList<BcInstr> instrs;

  private BcCode(ImmutableList<BcInstr> instrs) {
    this.instrs = instrs;
  }

  @Override
  protected List<BcInstr> delegate() {
    return instrs;
  }

  /**
   * Create from the raw GNU-R representation, not including the initial version number.
   *
   * @param makePoolIdx A function to create pool indices from raw integers
   */
  static BcCode fromRaw(ImmutableIntArray bytecodes, ConstPool.MakeIdx makePoolIdx)
      throws BcFromRawException {
    if (bytecodes.isEmpty()) {
      throw new BcFromRawException("Bytecode is empty, needs at least version number");
    }
    if (bytecodes.get(0) != Bc.R_BC_VERSION) {
      throw new BcFromRawException("Unsupported bytecode version: " + bytecodes.get(0));
    }

    var labelMap = labelFactoryFromRaw(bytecodes);

    var builder = new Builder();
    int i = 1;
    int sanityCheckJ = 0;
    while (i < bytecodes.length()) {
      try {
        var instrAndI = BcInstrs.fromRaw(bytecodes, i, labelMap, makePoolIdx);
        var instr = instrAndI.a();
        i = instrAndI.b();

        builder.add(instr);
        sanityCheckJ++;

        try {
          var sanityCheckJFromI = labelMap.make(i).target;
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
            "malformed bytecode at " + i + "\nBytecode up to this point: " + builder.build(), e);
      }
    }
    return builder.build();
  }

  static BcLabel.Factory labelFactoryFromRaw(ImmutableIntArray bytecodes) {
    var builder = new BcLabel.Factory.Builder();
    int i = 1;
    while (i < bytecodes.length()) {
      try {
        var size = BcInstrs.sizeFromRaw(bytecodes, i);
        builder.step(size, 1);
        i += size;
      } catch (BcFromRawException e) {
        throw new BcFromRawException(
            "malformed bytecode at " + i + "\nBytecode up to this point: " + builder.build(), e);
      }
    }
    return builder.build();
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder("=== CODE ===");
    for (BcInstr instr : instrs) {
      sb.append("\n").append(instr);
    }
    return sb.toString();
  }

  /**
   * A builder class for creating BcArray instances.
   *
   * <p>Not synchronized, so don't use from multiple threads.
   */
  public static class Builder {
    final ImmutableList.Builder<BcInstr> builder = ImmutableList.builder();

    /** Create a new builder. */
    public Builder() {}

    /** Append an instruction. */
    @CanIgnoreReturnValue
    public Builder add(BcInstr instr) {
      builder.add(instr);
      return this;
    }

    /** Append instructions. */
    @CanIgnoreReturnValue
    public Builder addAll(Collection<? extends BcInstr> c) {
      builder.addAll(c);
      return this;
    }

    /**
     * Finish building the array.
     *
     * @return The array.
     */
    public BcCode build() {
      return new BcCode(builder.build());
    }
  }
}
