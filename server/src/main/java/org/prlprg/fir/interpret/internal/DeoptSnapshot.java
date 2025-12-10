package org.prlprg.fir.interpret.internal;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public class DeoptSnapshot {
  private final int pc;
  private final ImmutableList<SEXP> bcStack;
  private final EnvSXP env;
  private final String fullStackToString;
  private @Nullable String moduleToString = null;
  private final String toString;

  DeoptSnapshot(int pc, ImmutableList<SEXP> bcStack, EnvSXP env, String fullStackToString) {
    this.pc = pc;
    this.bcStack = bcStack;
    this.env = env;
    this.fullStackToString = fullStackToString;

    toString = Printer.use(this::doPrint);
  }

  public int pc() {
    return pc;
  }

  public ImmutableList<SEXP> bcStack() {
    return bcStack;
  }

  public EnvSXP env() {
    return env;
  }

  public String fullStackToString() {
    return fullStackToString;
  }

  void unsafeSetModuleToString(@Nullable String moduleToString) {
    if (this.moduleToString != null) {
      throw new IllegalStateException("`moduleToString` is already set: " + this.moduleToString);
    }
    this.moduleToString = moduleToString;
  }

  public String moduleToString() {
    return Objects.requireNonNull(moduleToString, "`moduleToString` was deferred and not set");
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof DeoptSnapshot that)) {
      return false;
    }
    // Environment SEXPs have different identities, but snapshots are compared structurally.
    return Objects.equals(toString, that.toString);
  }

  @Override
  public int hashCode() {
    // Environment SEXPs have different identities, but snapshots are compared structurally.
    return Objects.hashCode(toString);
  }

  @Override
  public String toString() {
    return toString;
  }

  private void doPrint(Printer p) {
    var w = p.writer();
    var p1 = p.withContext(new SEXPPrintContext(SEXPPrintOptions.SEMANTIC));

    w.write("deopt ");
    p.print(pc);
    w.write(' ');
    p1.printAsList("[", "]", bcStack);
    w.runIndented(
        () -> {
          w.write('\n');
          p1.print(env);
        });
  }
}
