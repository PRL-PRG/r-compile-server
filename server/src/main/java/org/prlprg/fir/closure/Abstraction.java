package org.prlprg.fir.closure;

import com.google.common.collect.ImmutableList;
import org.jetbrains.annotations.NotNull;
import org.prlprg.fir.cfg.CFG;
import org.prlprg.fir.cfg.variable.Register;
import org.prlprg.fir.cfg.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

// TODO: Argument types, return type and effects
public record Abstraction(ImmutableList<Register> params, ImmutableList<Variable> locals, CFG cfg) {
  @Override
  public @NotNull String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write('(');
    p.printSeparated(", ", params);
    w.write(')');

    w.write("{ ");
    p.printSeparated(", ", locals);
    w.write(" |\n");
    p.print(cfg);
    w.write("}");
  }

  @ParseMethod
  private static Abstraction parse(Parser p) {
    var s = p.scanner();

    var params = p.parseList("(", ")", Register.class);

    s.assertAndSkip('{');
    var locals = ImmutableList.<Variable>builder();
    if (!s.nextCharIs('|')) {
      do {
        locals.add(p.parse(Variable.class));
      } while (s.nextCharIs(','));
    }
    s.assertAndSkip('|');

    var cfg = p.parse(CFG.class);
    s.assertAndSkip('}');

    return new Abstraction(params, locals.build(), cfg);
  }
}
