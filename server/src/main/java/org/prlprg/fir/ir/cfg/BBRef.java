package org.prlprg.fir.ir.cfg;

import java.util.ArrayList;
import java.util.HashMap;
import org.jspecify.annotations.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.ForwardRef;

public final class BBRef extends ForwardRef<BB> {
  public BBRef() {
    super();
  }

  public BBRef(@Nullable BB bb) {
    super(bb);
  }

  public record ParseContext(
      HashMap<String, BBRef> deferred, ArrayList<Runnable> fixPredecessors) {}

  @ParseMethod
  private static BBRef parse(Parser p, ParseContext ctx) {
    var label = p.scanner().readIdentifierOrKeyword();
    return ctx.deferred.computeIfAbsent(label, _ -> new BBRef());
  }
}
