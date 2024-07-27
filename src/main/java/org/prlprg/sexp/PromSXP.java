package org.prlprg.sexp;

import javax.annotation.Nullable;
import org.prlprg.parseprint.Printer;

/** A promise that produces a value of type {@code T}.
 *
 * <p>A promise is a fundamental R data-type that encodes lazy computation. Promises are created as
 * function arguments: when you pass an argument to a function (e.g. "b + c" "f(b + c)"), instead of
 * evaluating the argument "b + c" and then passing the value to the function "f" like a normal
 * programming language, R wraps the expression in a promise and passes that to the function. A
 * promise is evaluated ("forced") when its parameter gets read (e.g. "f <- function(a, b) if
 * (b < 10) a else 0"" will evaluate "b", then evaluate "a" if the result is less than 10). The
 * promise expression's AST can also be accessed without forcing the promise by passing it to the
 * substitute function (e.g. "f <- function(a) substitute(a)", "f(b + c)" will return a quoted AST
 * "b + c". Besides returning quoted ASTs, "substitute" can be combined with "eval" to evaluate the
 * AST in a different environment, reinterpreted like "plot(y = 2 * x + 5)" will plot a graph of the
 * function "2 * x + 5" with "y" on the y-axis and "x" on the x-axis, or more).
 *
 * <p>For more information, see <a href="https://adv-r.hadley.nz/functions.html#promises">Advanced R
 * on promises</a>.
 *
 * @param expr The expression that will be evaluated when the promise is forced.
 *             This is either the AST of the expression or bytecode, which contains the ASt of the
 *             expression as its source
 * @param val The value of the promise if it has been evaluated, otherwise {@code null}.
 * @param env The environment in which the promise was created, and {@code expr} will be evaluated
 *            in (unless its AST is accessed directly).
 */
public record PromSXP<T extends SEXP>(SEXP expr, @Nullable T val, EnvSXP env) implements SEXP {
  public PromSXP {
    if (val instanceof PromSXP) {
      throw new IllegalArgumentException("Promises cannot be nested");
    }
  }

  /** Returns the promise's AST.
   *
   * <p>If {@code expr} is {@link BCodeSXP}, returns the AST which is stored in the first constant
   * pool slot. Otherwise, just returns {@code expr}.
   */
  public SEXP ast() {
    return expr instanceof BCodeSXP bc ? bc.bc().consts().getFirst() : expr;
  }

  /**
   * Whether the promise will run code when forced. Otherwise, its value is already computed.
   *
   * <p>This is the opposite of {@link #isEvaluated()}.
   */
  public boolean isLazy() {
    return val == null;
  }

  /**
   * Whether the promise's value is already computed.
   *
   * <p>This is the opposite of {@link #isLazy()}.
   */
  public boolean isEvaluated() {
    return val != null;
  }

  @Override
  public SEXPType type() {
    return SEXPType.PROM;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return PromSXP.class;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
