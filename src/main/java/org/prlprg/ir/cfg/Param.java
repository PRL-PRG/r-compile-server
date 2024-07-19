package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/**
 * A parameter to a closure.
 *
 * <p>This is local to a {@link CFG}, however it isn't in any of the {@link CFG}'s blocks ({@link
 * BB}s). Liveness isn't an issue because it's live at the start of the CFG.
 *
 * <p>Note that unoptimized closures will immediately store these parameters in the closure's
 * lexical environment ("inclos"), and then they will only be referenced via loads. This is because,
 * like all variables, they may be arbitrarily affected by reflective code that access the
 * environment before they are loaded. After optimizations, if we can disprove reflective effects,
 * we can replace the load and direct access to the parameter.
 */
public final class Param<T> extends LocalNode<T> {
  /**
   * Create a parameter for the given {@link ClosureVersion} with the given type and ID.
   *
   * <p>The type of a parameter in a closure's baseline version is guaranteed to be {@link SEXP}. In
   * optimized versions, we can refine to a subclass of {@link SEXP} enforced by the call context,
   * or unbox the value entirely (unboxed by the dispatch function).
   *
   * <p>This is package-private because a {@link ClosureVersion} creates its {@link CFG}'s
   * parameters when it's constructed.
   *
   * @throws IllegalArgumentException If {@link ClosureVersion#isBaseline()} and {@code type} isn't
   *     {@link SEXP}.
   */
  Param(ClosureVersion version, Class<T> type, LocalNodeId<T> id) {
    super(version.body(), type, id);
    if (version.isBaseline() && type != SEXP.class) {
      throw new IllegalArgumentException("Baseline version parameters must be of type SEXP");
    }

    version.body().addParam(this);
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p, CFGParseOrPrintContext ctx) {
    var w = p.writer();

    p.print(id());
    if (!ctx.isClosureVersionBaseline()) {
      w.write(":");
      p.print(type());
    }
  }

  // `toString` is overridden by the superclass.
  // endregion serialization and deserialization
}
