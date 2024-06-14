package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import com.google.errorprone.annotations.CanIgnoreReturnValue;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import java.util.function.Function;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ClassProvidingContext;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

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

  // region serialization and deserialization
  private static class InstrContext implements ClassProvidingContext {
    private static final InstrContext INSTANCE = new InstrContext();

    @Override
    public @Nullable Class<?> getClass(String className) {
      return BcInstr.CLASSES.get(className);
    }
  }

  @ParseMethod(SkipWhitespace.ALL_EXCEPT_NEWLINES)
  private static BcCode parse(Parser p) {
    p = p.withContext(InstrContext.INSTANCE);
    var s = p.scanner();

    var code = new ArrayList<BcInstr>();
    s.assertAndSkip("=== CODE ===");
    for (var idx = 0; s.nextCharSatisfies(Character::isDigit); idx++) {
      var actualIdx = s.readUInt();
      if (actualIdx != idx) {
        throw s.fail("index " + idx, "index " + actualIdx);
      }
      s.assertAndSkip(":");

      code.add(p.parse(BcInstr.class));
    }

    return new BcCode(code);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("=== CODE ===");
    var n = Math.floor(Math.log10(size())) + 1;
    var idx = 0;
    for (BcInstr instr : code) {
      w.formatter().format("%n%" + n + "d: ", idx++);
      p.print(instr);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
