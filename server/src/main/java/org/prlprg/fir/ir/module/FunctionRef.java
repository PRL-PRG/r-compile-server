package org.prlprg.fir.ir.module;

import java.util.HashMap;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.ForwardRef;

public final class FunctionRef extends ForwardRef<Function> {
  public FunctionRef() {
    super();
  }

  public FunctionRef(@Nullable Function function) {
    super(function);
  }

  public record ParseContext(HashMap<NamedVariable, FunctionRef> deferred) {
    public FunctionRef deferredLookup(NamedVariable name) {
      return deferred.computeIfAbsent(name, _ -> new FunctionRef());
    }
  }

  @ParseMethod
  private static FunctionRef parse(Parser p, ParseContext ctx) {
    var name = p.parse(NamedVariable.class);
    return ctx.deferredLookup(name);
  }
}
