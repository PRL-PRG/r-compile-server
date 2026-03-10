package org.prlprg.sexp.parseprint;

/// Pass this as a context to [org.prlprg.parseprint.Printer#print], [#toString], and other
/// functions that print an [`SEXP`][org.prlprg.sexp.SEXP] to customize how it's printed.
///
/// In particular, you can omit details when printing large SEXPs. [#FULL] or [#FULL_DELIMITED]
/// is required to be able to parse the SEXPs.
///
/// @param printDelimited Ensure that all [`SEXP`][org.prlprg.sexp.SEXP]s except `NULL` and
/// scalars are printed within `<` and `>`.
///
/// Default: `false`.
///
/// @param printEnvironmentDetails Which environments to print the parent and bindings of.
///
/// Default: [PrintEnvironmentDetails#BELOW_GLOBAL].
///
/// @param printBcDetails Print the contents of bytecode objects.
///
/// Default: `false`.
///
/// @param maxElements Maximum number of elements to print in a list, vector, or other collection.
///
/// Set to `Long#MAX_VALUE` to print all elements.
///
/// Default: `10`.
///
/// @param maxAttributes Maximum number of attributes to print in an [`SEXP`][org.prlprg.sexp.SEXP].
///
/// Set to `Long#MAX_VALUE` to print all attributes.
///
/// Default: `3`.
///
/// @param maxStringLength Maximum length of strings to print, _and_ maximum length of all
///     strings that will be printed in a string vector (which means string vectors may have more
///     elements cut off then `maxElements`).
///
/// Set to `Long#MAX_VALUE` to print never truncate strings.
///
/// Default: `100`.
///
/// @param maxDepth Maximum depth of language objects to print, where each [SEXP][
/// org.prlprg.sexp.SEXP] adds 1 to the depth, whether it's a symbol, list, vector, or environment
/// (e.g. `foo(bar(<vec baz(<str"qux" "abc" "def">)>))` has a depth of 5: `foo(...)`, `bar(...)`,
/// `<vec...>`, `baz(...)`, and `<str ...>`). Once this is reached, inner SEXPs will be replaced
/// with `<...>`.
///
/// Set to [Long#MAX_VALUE] to print all levels.
///
/// Default: `5`.
public record SEXPPrintOptions(
    boolean printDelimited,
    PrintEnvironmentDetails printEnvironmentDetails,
    boolean printBcDetails,
    boolean printPromiseLazyDetails,
    boolean printMapsSorted,
    long maxElements,
    long maxAttributes,
    long maxStringLength,
    long maxDepth) {
  /// The default print options that you get when calling
  /// [org.prlprg.parseprint.Printer#print(Object)] and [#toString()].
  public static final SEXPPrintOptions DEFAULT =
      new SEXPPrintOptions(
          false, PrintEnvironmentDetails.BELOW_GLOBAL, false, true, false, 10, 3, 100, 5);

  /// Print every part of the [`SEXP`][org.prlprg.sexp.SEXP].
  ///
  /// This or [#FULL_DELIMITED] is required for the string to be parse-able.
  public static final SEXPPrintOptions FULL =
      new SEXPPrintOptions(
          false,
          PrintEnvironmentDetails.ALL,
          true,
          true,
          false,
          Long.MAX_VALUE,
          Long.MAX_VALUE,
          Long.MAX_VALUE,
          Long.MAX_VALUE);

  /// Print every part of the [`SEXP`][org.prlprg.sexp.SEXP] that indicate the SEXP is
  /// definitely semantically different.
  ///
  /// e.g. different promise bodies or bytecode don't matter, because different promise bodies
  /// may have the same semantics. But constants do.
  public static final SEXPPrintOptions SEMANTIC =
      SEXPPrintOptions.FULL
          .withEnvironmentDetails(PrintEnvironmentDetails.BELOW_GLOBAL)
          .withPromiseLazyDetails(false)
          .withMapsSorted(true);

  /// Print every part of the [`SEXP`][org.prlprg.sexp.SEXP], and guarantee it's surrounded by
  /// `<` and `>`.
  ///
  /// This or [#FULL] is required for the string to be parse-able.
  public static final SEXPPrintOptions FULL_DELIMITED = FULL.withDelimited(true);

  public SEXPPrintOptions withDelimited(boolean printDelimited) {
    return printDelimited == this.printDelimited
        ? this
        : new SEXPPrintOptions(
            printDelimited,
            printEnvironmentDetails,
            printBcDetails,
            printPromiseLazyDetails,
            printMapsSorted,
            maxElements,
            maxAttributes,
            maxStringLength,
            maxDepth);
  }

  public SEXPPrintOptions withEnvironmentDetails(PrintEnvironmentDetails printEnvironmentDetails) {
    return printEnvironmentDetails == this.printEnvironmentDetails
        ? this
        : new SEXPPrintOptions(
            printDelimited,
            printEnvironmentDetails,
            printBcDetails,
            printPromiseLazyDetails,
            printMapsSorted,
            maxElements,
            maxAttributes,
            maxStringLength,
            maxDepth);
  }

  public SEXPPrintOptions withBcDetails(boolean printBcDetails) {
    return printBcDetails == this.printBcDetails
        ? this
        : new SEXPPrintOptions(
            printDelimited,
            printEnvironmentDetails,
            printBcDetails,
            printPromiseLazyDetails,
            printMapsSorted,
            maxElements,
            maxAttributes,
            maxStringLength,
            maxDepth);
  }

  public SEXPPrintOptions withPromiseLazyDetails(boolean printPromiseLazyDetails) {
    return printPromiseLazyDetails == this.printPromiseLazyDetails
        ? this
        : new SEXPPrintOptions(
            printDelimited,
            printEnvironmentDetails,
            printBcDetails,
            printPromiseLazyDetails,
            printMapsSorted,
            maxElements,
            maxAttributes,
            maxStringLength,
            maxDepth);
  }

  public SEXPPrintOptions withMapsSorted(boolean printMapsSorted) {
    return printMapsSorted == this.printMapsSorted
        ? this
        : new SEXPPrintOptions(
            printDelimited,
            printEnvironmentDetails,
            printBcDetails,
            printPromiseLazyDetails,
            printMapsSorted,
            maxElements,
            maxAttributes,
            maxStringLength,
            maxDepth);
  }

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

  public enum PrintEnvironmentDetails {
    NONE,
    BELOW_GLOBAL,
    BELOW_BASE,
    ALL,
  }
}
