package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import com.google.errorprone.annotations.CanIgnoreReturnValue;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;

/**
 * An array of bytecode instructions, which make up the code of a closure or promise. A complete
 * bytecode is {@link Bc}, which also includes a constant pool.
 */
@Immutable
public final class BcCode extends ForwardingList<BcInstr> {
  final ImmutableList<BcInstr> code;

  private BcCode(Collection<BcInstr> code) {
    this.code = ImmutableList.copyOf(code);
  }

  @Override
  protected List<BcInstr> delegate() {
    return code;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder("=== CODE ===");
    var idx = 0;
    for (BcInstr instr : code) {
      sb.append(String.format("%n%3d: ", idx++)).append(instr);
    }
    return sb.toString();
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (o == null || getClass() != o.getClass()) return false;
    if (!super.equals(o)) return false;
    BcCode bcInstrs = (BcCode) o;
    return Objects.equals(code, bcInstrs.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), code);
  }

  public ImmutableIntArray toRaw() {
    var builder = ImmutableIntArray.builder();
    builder.add(Bc.R_BC_VERSION);
    for (var instr : code) {
      builder.add(instr.op().value());
      for (var i = 0; i < instr.op().nArgs(); i++) {
        builder.add(instr.op().nArgs());
      }
    }
    return builder.build();
  }

  /**
   * A builder class for creating BcArray instances.
   *
   * <p>Not synchronized, so don't use from multiple threads.
   */
  public static class Builder {
    private final List<BcInstr> code = new ArrayList<>();

    /** Create a new builder. */
    public Builder() {}

    /** Append an instruction. */
    @CanIgnoreReturnValue
    public Builder add(BcInstr instr) {
      code.add(instr);
      return this;
    }

    /**
     * Finish building the array.
     *
     * @return The array.
     */
    public BcCode build() {
      return new BcCode(code);
    }

    public int size() {
      return code.size();
    }

    public void patch(int idx, Function<BcInstr, BcInstr> patch) {
      assert (idx >= 0 && idx < code.size());
      code.set(idx, patch.apply(code.get(idx)));
    }
  }
}
