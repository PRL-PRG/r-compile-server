package org.prlprg.fir.ir.phi;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Expression;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;

public final class Target {
  private @Nullable BB bb = null;
  private final ImmutableList<Expression> phiArgs;

  public Target(BB bb, ImmutableList<Expression> phiArgs) {
    this.bb = bb;
    this.phiArgs = phiArgs;
  }

  public Target(BB label, Expression... phiArgs) {
    this(label, ImmutableList.copyOf(phiArgs));
  }

  public BB bb() {
    return Objects.requireNonNull(bb, "target BB was deferred and not set");
  }

  public ImmutableList<Expression> phiArgs() {
    return phiArgs;
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (Target) obj;
    return Objects.equals(this.bb, that.bb) && Objects.equals(this.phiArgs, that.phiArgs);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bb, phiArgs);
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

  public record ParseContext(DeferredCallbacks<CFG> postCfg, @Nullable Object inner) {}

  @ParseMethod
  private Target(Parser p1, ParseContext ctx) {
    var postCfg = ctx.postCfg;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    var bbLabel = s.readJavaIdentifierOrKeyword();
    phiArgs = p.parseList("(", ")", Expression.class);

    postCfg.add(
        cfg -> {
          var bb = cfg.bb(bbLabel);
          if (bb == null) {
            throw s.fail("Target references a basic block that wasn't defined: " + bbLabel);
          }

          this.bb = bb;
        });
  }
}
