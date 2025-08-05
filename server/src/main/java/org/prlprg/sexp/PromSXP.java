package org.prlprg.sexp;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.parseprint.Printer;

public sealed interface PromSXP extends SEXP {
  /// Promise code (either AST or bytecode).
  SEXP expr();

  /// Promise value if evaluated, otherwise `null`.
  @Nullable SEXP boundVal();

  /// Promise code environment.
  EnvSXP env();

  /// Set the promise value.
  ///
  /// @throws IllegalStateException if already set.
  void bind(SEXP value);

  /// Whether the promise will run code when forced. Otherwise, its value is already computed.
  ///
  /// This is the opposite of [#isEvaluated()].
  boolean isLazy();

  /// Whether the promise's value is already computed.
  ///
  /// This is the opposite of [#isLazy()].
  boolean isEvaluated();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return PromSXP.class;
  }

  @Override
  default SEXPType type() {
    return SEXPType.PROM;
  }
}

final class PromSXPImpl implements PromSXP {
  private final SEXP expr;
  private SEXP val;
  private final EnvSXP env;

  PromSXPImpl(SEXP expr, SEXP val, EnvSXP env) {
    if (val instanceof PromSXP) {
      throw new IllegalArgumentException("Promises cannot be nested");
    }
    this.expr = expr;
    this.val = val;
    this.env = env;
  }

  @Override
  public SEXP expr() {
    return expr;
  }

  @Override
  public @Nullable SEXP boundVal() {
    return val == SEXPs.UNBOUND_VALUE ? null : val;
  }

  @Override
  public EnvSXP env() {
    return env;
  }

  @Override
  public boolean isLazy() {
    return val == SEXPs.UNBOUND_VALUE;
  }

  @Override
  public boolean isEvaluated() {
    return val != SEXPs.UNBOUND_VALUE;
  }

  @Override
  public void bind(SEXP value) {
    if (!isLazy()) {
      throw new IllegalStateException("Promise value is already set");
    }
    if (value instanceof PromSXP) {
      throw new IllegalArgumentException("Promises cannot be nested");
    }
    this.val = value;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (PromSXPImpl) obj;
    return Objects.equals(this.expr, that.expr)
        && Objects.equals(this.val, that.val)
        && Objects.equals(this.env, that.env);
  }

  @Override
  public int hashCode() {
    return Objects.hash(expr, val, env);
  }
}
