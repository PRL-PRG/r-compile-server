package org.prlprg.bc;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.function.Function;

import javax.annotation.concurrent.Immutable;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import com.google.errorprone.annotations.CanIgnoreReturnValue;

/**
 * An array of bytecode instructions, which make up the code of a closure or
 * promise. A complete
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

  /**
   * A builder class for creating BcArray instances.
   *
   * <p>
   * Not synchronized, so don't use from multiple threads.
   */
  public static class Builder {
    private final List<BcInstr> code = new ArrayList<>();

    /** Create a new builder. */
    public Builder() {
    }

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
