package org.prlprg.sexp.parseprint;

import org.prlprg.ir.closure.CodeObjectPrintOptions;
import org.prlprg.ir.closure.HasCodeObjectPrintOptions;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/**
 * Pass this as a context to {@link Printer#print}, {@link Printer#toString}, and other functions
 * that print an {@link SEXP} to customize how it's printed.
 *
 * <p>In particular, you can omit details when printing large SEXPs. {@link SEXPPrintOptions#FULL}
 * is required to be able to parse the SEXPs.
 *
 * @param printStaticEnvironmentDetails Print the parent and bindings of global environments.
 *     <p>Default: {@code false}.
 * @param printBcContents Print the contents of bytecode objects.
 *     <p>Default: {@code false}.
 * @param maxElements Maximum number of elements to print in a list, vector, or other collection.
 *     <p>Set to {@code Long#MAX_VALUE} to print all elements.
 *     <p>Default: {@code 10}.
 * @param maxAttributes Maximum number of attributes to print in an SEXP.
 *     <p>Set to {@code Long#MAX_VALUE} to print all attributes.
 *     <p>Default: {@code 3}.
 * @param maxStringLength Maximum length of strings to print, <i>and</i> maximum length of all
 *     strings that will be printed in a string vector (which means string vectors may have more
 *     elements cut off then {@code maxElements}).
 *     <p>Set to {@code Long#MAX_VALUE} to print never truncate strings.
 *     <p>Default: {@code 100}.
 * @param maxDepth Maximum depth of language objects to print, where each {@link SEXP} adds 1 to the
 *     depth, whether it's a symbol, list, vector, or environment (e.g. {@code foo(bar(<vec baz(<str
 *     "qux" "abc" "def">)>))} has a depth of 5: {@code foo(...)}, {@code bar(...)}, {@code <vec
 *     ...>}, {@code baz(...)}, and {@code <str ...>}). Once this is reached, inner SEXPs will be
 *     replaced with {@code <...>}.
 *     <p>Set to {@code Long#MAX_VALUE} to print all levels.
 *     <p>Default: {@code 5}.
 */
public record SEXPPrintOptions(
    boolean printStaticEnvironmentDetails,
    boolean printBcContents,
    long maxElements,
    long maxAttributes,
    long maxStringLength,
    long maxDepth)
    implements HasSEXPPrintContext, HasCodeObjectPrintOptions {
  /**
   * The default print options that you get when calling {@link Printer#print(Object)
   * Printer#print(SEXP)} and {@link Object#toString SEXP#toString()}.
   */
  public static final SEXPPrintOptions DEFAULT = new SEXPPrintOptions(false, false, 10, 3, 100, 5);

  /** Print every part of the {@link SEXP}. Required for the string to be parse-able. */
  public static final SEXPPrintOptions FULL =
      new SEXPPrintOptions(
          true, true, Long.MAX_VALUE, Long.MAX_VALUE, Long.MAX_VALUE, Long.MAX_VALUE);

  public SEXPPrintOptions {
    if (maxElements < 1) {
      throw new IllegalArgumentException("`maxElements` must be positive (can't be 0)");
    }
    if (maxAttributes < 0) {
      throw new IllegalArgumentException("`maxAttributes` must be non-negative");
    }
    if (maxStringLength < 1) {
      throw new IllegalArgumentException("`maxStringLength` must be positive (can't be 0)");
    }
    if (maxDepth < 1) {
      throw new IllegalArgumentException("`maxDepth` must be positive (can't be 0)");
    }
  }

  @Override
  public SEXPPrintContext sexpPrintContext() {
    return new SEXPPrintContext(this);
  }

  @Override
  public CodeObjectPrintOptions codeObjectPrintOptions() {
    throw new UnsupportedOperationException(
        "Since you're printing a closure, pass `ClosurePrintOptions` instead");
  }
}
