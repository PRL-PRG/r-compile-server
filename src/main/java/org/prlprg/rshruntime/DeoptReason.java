package org.prlprg.rshruntime;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.StringCase;

public record DeoptReason(Type type, FeedbackOrigin origin) {
  @EnumSerialCaseIs(StringCase.PASCAL)
  public enum Type {
    UNKNOWN,
    TYPECHECK,
    DEAD_CALL,
    CALL_TARGET,
    FORCE_AND_CALL,
    ENV_STUB_MATERIALIZED,
    DEAD_BRANCH_REACHED
  }

  @ParseMethod
  private static DeoptReason parse(Parser p) {
    var s = p.scanner();
    var type = p.parse(Type.class);
    s.assertAndSkip('@');
    var origin = p.parse(FeedbackOrigin.class);
    return new DeoptReason(type, origin);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    p.print(type);
    w.write('@');
    p.print(origin);
  }

  @Override
  public String toString() {
    return type + "@" + origin;
  }
}
