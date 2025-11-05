package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public class DeoptSnapshot {
  private final int pc;
  private final ImmutableList<SEXP> bcStack;
  private final EnvSXP env;
  private final String toString;

  public DeoptSnapshot(int pc, ImmutableList<SEXP> bcStack, EnvSXP env) {
    this.pc = pc;
    this.bcStack = bcStack;
    this.env = env;

    toString = Printer.use(p -> p.print(this));
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

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("deopt ");
    p.print(pc);
    w.write(' ');
    p.printAsList("[", "]", bcStack);
    w.runIndented(() -> {
      w.write('\n');
      p.print(env);
    });
  }
}
