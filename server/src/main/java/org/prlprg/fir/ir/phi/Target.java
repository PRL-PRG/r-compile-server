package org.prlprg.fir.ir.phi;

import com.google.common.collect.ImmutableList;
import java.util.function.Function;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Target(BBRef bbRef, ImmutableList<Argument> phiArgs) {
  public Target(BB bb, ImmutableList<Argument> phiArgs) {
    this(new BBRef(bb), phiArgs);
  }

  public Target(BB bb, Argument... phiArgs) {
    this(bb, ImmutableList.copyOf(phiArgs));
  }

  public BB bb() {
    return bbRef.get();
  }

  public ImmutableList<Argument> phiArgs() {
    return phiArgs;
  }

  public Target mapArguments(Function<Argument, Argument> transformer) {
    return new Target(
        bbRef, phiArgs.stream().map(transformer).collect(ImmutableList.toImmutableList()));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(bb().label());
    p.printAsList("(", ")", phiArgs);
  }

  public record ParseContext(BBRef.ParseContext forBbRef, @Nullable Object inner) {}

  @ParseMethod
  private static Target parse(Parser p1, ParseContext ctx) {
    var p = p1.withContext(ctx.inner);
    var p2 = p1.withContext(ctx.forBbRef);

    var bbRef = p2.parse(BBRef.class);
    var phiArgs = p.parseList("(", ")", Argument.class);

    return new Target(bbRef, phiArgs);
  }
}
