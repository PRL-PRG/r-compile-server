package org.prlprg.fir.interpret.internal;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public class DeoptSnapshot {
  private final Function function;
  private final int pc;
  private final ImmutableList<SEXP> bcStack;
  private final EnvSXP env;
  private final String toString;

  DeoptSnapshot(Function function, int pc, ImmutableList<SEXP> bcStack, EnvSXP env) {
    this.function = function;
    this.pc = pc;
    this.bcStack = bcStack;
    this.env = env;

    // Print now, because `env` and `bcStack` are live and can change later.
    toString = Printer.use(this::doPrint);
  }

  public int pc() {
    return pc;
  }

  public ImmutableList<SEXP> bcStack() {
    return bcStack;
  }

  /// The environment the deopt resumes in: the checkpoint's environment, or the one the deopt
  /// branch creates (`mkenv`). It isn't a copy, so it can change after the snapshot. The deopt
  /// branch's stores into the checkpoint's environment are undone after the snapshot, so only
  /// [#toString()] shows them.
  public EnvSXP env() {
    return env;
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
    p.print(function.name());
    w.write('@');
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
