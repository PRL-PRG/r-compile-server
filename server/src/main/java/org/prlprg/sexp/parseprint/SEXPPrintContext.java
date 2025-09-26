package org.prlprg.sexp.parseprint;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.AbstractListSXP;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EmptyEnvSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NamespaceEnvSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StaticEnvSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VectorSXP;

/**
 * Maps potentially-recursive {@link SEXP}s to integers to they can be serialized.
 *
 * <p>If you print multiple {@link SEXP}s with the same context, the references will be shared
 * across the prints. This is useful e.g. when printing IR, since it may contain many references to
 * the same large {@link StaticEnvSXP}.
 *
 * <p><b>Implementation note:</b> all of the logic for printing {@link SEXP}s, {@link Attributes},
 * and {@link TaggedElem}s (all data-types in {@link org.prlprg.sexp}) is implemented in this class.
 */
public class SEXPPrintContext {
  private final ForBindings forBindings = new ForBindings();
  private final ForVectorElem forVectorElem = new ForVectorElem();
  private final Map<SEXP, Integer> refs = new HashMap<>();
  private SEXPPrintOptions options;
  private int currentDepth = 0;

  /**
   * Create a {@link SEXPPrintContext} with the given options.
   *
   * <p>Call with {@link SEXPPrintOptions#FULL} to print {@link SEXP}s in a way that they can be
   * re-parsed. Otherwise they may be truncated.
   */
  public SEXPPrintContext(SEXPPrintOptions options) {
    this.options = options;
  }

  /**
   * Create a {@link SEXPPrintContext} with the {@linkplain SEXPPrintOptions#DEFAULT default
   * options}.
   */
  public SEXPPrintContext() {
    this(SEXPPrintOptions.DEFAULT);
  }

  /**
   * Context to print {@link ListSXP}s and {@link TaggedElem}s as they are printed in {@linkplain
   * CloSXP#parameters() closure parameters} and {@linkplain EnvSXP#bindingsAsTaggedElems()
   * environment bindings}.
   *
   * <p>Specifically, in any other context, the {@link TaggedElem}s without names print like {@code
   * value}, those with missing values print like {@code name=}, and empty lists print {@code NULL}.
   * In this context, {@link TaggedElem}s without names print like {@code =value}, those with
   * missing values print like {@code name}, and empty lists print {@code ()}. In both contexts,
   * {@link TaggedElem}s with names and non-missing values print like {@code name=value}, those
   * without names and missing values parse and print the empty string (for parsing, the {@link
   * TaggedElem} must be followed by a delimiter like ",", ")", or end-of-input), and non- empty
   * lists print like {@code (taggedElem1, taggedElem2, ...)}.
   */
  public ForBindings forBindings() {
    return forBindings;
  }

  @PrintMethod
  private void print(NilSXP sexp, Printer p) {
    // `NULL`
    handleDepth(p, () -> p.writer().write(sexp.toString()));
  }

  @PrintMethod
  private void print(SymSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp instanceof RegSymSXP && options.printDelimited()) {
            printGeneralStart(sexp.type(), p);
            p.writer().write(sexp.toString());
            printGeneralEnd(p);
          } else {
            p.writer().write(sexp.toString());
          }
        });
  }

  @PrintMethod
  private void print(LangSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp.hasAttributes() || options.printDelimited()) {
            printGeneralStart(sexp.type(), p);
            runNotDelimited(
                () -> {
                  printLang(sexp, p);
                  printAttributes(sexp, p);
                });
            printGeneralEnd(p);
          } else {
            printLang(sexp, p);
          }
        });
  }

  @PrintMethod
  private void print(AbstractListSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp.hasAttributes() || options.printDelimited() || !(sexp instanceof ListSXP)) {
            printGeneralStart(sexp.type(), p);
            runNotDelimited(
                () -> {
                  // Special-case, because otherwise this looks like the empty list.
                  if (sexp.size() == 1 && sexp.get(0).equals(new TaggedElem(SEXPs.MISSING_ARG))) {
                    p.writer().write("<missing>");
                  } else {
                    printElems(sexp, p);
                  }

                  printAttributes(sexp, p);
                });
            printGeneralEnd(p);
          } else {
            printList(sexp, p);
          }
        });
  }

  @PrintMethod
  private void print(StrSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp.isSimpleScalar()) {
            printStringElem(sexp.get(0), options.maxStringLength(), p.withContext(forVectorElem));
          } else {
            printGeneralStart(sexp.type(), p);
            runNotDelimited(
                () -> {
                  printStringElems(sexp, p.withContext(forVectorElem));
                  printAttributes(sexp, p);
                });
            printGeneralEnd(p);
          }
        });
  }

  @PrintMethod
  private void print(VectorSXP<?> sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          // RAWSXP are simple scalars, but can't be printed inline because they conflict with ints.
          if (sexp.isSimpleScalar() && sexp.type() != SEXPType.RAW) {
            p.withContext(forVectorElem).print(sexp.get(0));
          } else {
            printGeneralStart(sexp.type(), p);
            runNotDelimited(
                () -> {
                  printElems(sexp, p.withContext(forVectorElem));
                  printAttributes(sexp, p);
                });
            printGeneralEnd(p);
          }
        });
  }

  @PrintMethod
  private void print(CloSXP sexp, Printer p) {
    handleDepth(
        p,
        () ->
            runNotDelimited(
                () -> {
                  var w = p.writer();

                  printGeneralStart(sexp.type(), p);

                  printList(sexp.parameters(), p.withContext(forBindings));
                  w.write(" env=");
                  w.runIndented(() -> p.print(sexp.env()));
                  printAttributes(sexp, p);
                  w.write(" ⇒ ");
                  w.runIndented(() -> p.print(sexp.body()));

                  printGeneralEnd(p);
                }));
  }

  @PrintMethod
  private void print(EnvSXP sexp, Printer p) {
    handleDepth(
        p,
        () ->
            runNotDelimited(
                () -> {
                  var w = p.writer();

                  w.write('<');
                  p.print(sexp.envType());

                  if (!(sexp instanceof EmptyEnvSXP) && printAndCheckRef(sexp, p)) {
                    printGeneralEnd(p);
                    return;
                  }
                  if (sexp instanceof NamespaceEnvSXP ns) {
                    w.write(' ');
                    Names.write(w, ns.name());
                    w.write(':');
                    w.write(ns.version());
                  }

                  if (!(sexp instanceof EmptyEnvSXP)) {
                    if (options.printStaticEnvironmentDetails()) {
                      if (!(sexp instanceof BaseEnvSXP)) {
                        w.write(" parent=");
                        w.runIndented(() -> p.print(sexp.parent()));
                      }
                      w.write(' ');
                      printList(sexp.bindingsAsTaggedElems(), p.withContext(forBindings));
                    } else {
                      w.write(" ...");
                    }
                  }

                  printAttributes(sexp, p);

                  printGeneralEnd(p);
                }));
  }

  @PrintMethod
  private void print(BCodeSXP sexp, Printer p) {
    handleDepth(
        p,
        () ->
            runNotDelimited(
                () -> {
                  var w = p.writer();

                  w.write('<');
                  p.print(sexp.type());

                  if (printAndCheckRef(sexp, p)) {
                    printGeneralEnd(p);
                    return;
                  }

                  if (options.printBcContents()) {
                    w.write(' ');
                    p.print(sexp.bc());
                  } else {
                    w.write(" ...");
                  }

                  printGeneralEnd(p);
                }));
  }

  @PrintMethod
  private void print(PromSXP sexp, Printer p) {
    handleDepth(
        p,
        () ->
            runNotDelimited(
                () -> {
                  var w = p.writer();

                  printGeneralStart(sexp.type(), p);

                  w.write("env=");
                  w.runIndented(() -> p.print(sexp.env()));
                  if (sexp.isEvaluated()) {
                    w.write(" val=");
                    w.runIndented(() -> p.print(sexp.boundVal()));
                  }
                  w.write(" ⇒ ");
                  w.runIndented(() -> p.print(sexp.expr()));

                  printGeneralEnd(p);
                }));
  }

  @PrintMethod
  private void print(BuiltinOrSpecialSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          printGeneralStart(sexp.type(), p);
          p.print(sexp.id());
          printGeneralEnd(p);
        });
  }

  @PrintMethod
  private void print(SEXP sexp, Printer ignored) {
    throw new AssertionError("unhandled SEXP class: " + sexp.getClass().getSimpleName());
  }

  @PrintMethod
  private void print(Attributes attributes, Printer p) {
    var w = p.writer();

    var i = 0;
    for (var attribute : attributes.entrySet()) {
      assert attribute.getKey() != null;

      if (i == options.maxAttributes()) {
        w.write("\n...");
        break;
      }

      if (i != 0) {
        w.write("\n, ");
      }
      Names.write(w, attribute.getKey());
      w.write('=');
      p.print(attribute.getValue());
      i++;
    }
  }

  @PrintMethod
  private void printTaggedElem(TaggedElem taggedElem, Printer p) {
    var w = p.writer();

    if (taggedElem.hasTag()) {
      Names.write(w, taggedElem.tag());
      w.write('=');
    }
    if (taggedElem.value() != SEXPs.MISSING_ARG) {
      p.print(taggedElem.value());
    }
  }

  /**
   * @see #forBindings()
   */
  public class ForBindings {
    private ForBindings() {}

    @PrintMethod
    private void print(ListSXP sexp, Printer p) {
      printList(sexp, p);
    }

    @PrintMethod
    private void print(TaggedElem elem, Printer p) {
      var w = p.writer();

      if (elem.hasTag()) {
        Names.write(w, elem.tag());
      }
      if (elem.value() != SEXPs.MISSING_ARG) {
        w.write('=');
        p.withContext(SEXPPrintContext.this).print(elem.value());
      }
    }

    @PrintMethod
    private void print(Object o, Printer ignored) {
      throw new UnsupportedOperationException(
          "SEXPPrintContext#Bindings can only print lists and tagged elements: given "
              + o.getClass().getName());
    }
  }

  private class ForVectorElem {
    @PrintMethod
    private void print(Logical logical, Printer p) {
      p.writer()
          .write(
              switch (logical) {
                case TRUE -> "TRUE";
                case FALSE -> "FALSE";
                case NA -> "NA_LGL";
              });
    }

    @PrintMethod
    private void print(Integer integer, Printer p) {
      if (integer == Constants.NA_INT) {
        p.writer().write("NA_INT");
      } else {
        p.withContext(null).print(integer);
      }
    }

    @PrintMethod
    private void print(Double real, Printer p) {
      if (Double.isNaN(real)) {
        // Technically only one NaN is NA, but Java only has one NaN.
        // See [Constants#NA_REAL]'s docs.
        p.writer().write("NA_REAL");
      } else if (Double.isInfinite(real) && real > 0) {
        // Ensure the first character is a number, `+`, or `-` to make parsing easier.
        // Specifically, print positive infinity as `+Infinity`.
        p.writer().write("+Infinity");
      } else {
        p.withContext(null).print(real);
      }
    }

    @PrintMethod
    private void print(Complex cplx, Printer p) {
      if (cplx.isNaOrNaN()) {
        p.writer().write("NA_CPLX");
      } else {
        if ((Double.isNaN(cplx.real()) || (Double.isInfinite(cplx.real()) && cplx.real() > 0))
            || (cplx.real() == 0
                && (Double.isNaN(cplx.imag())
                    || (Double.isInfinite(cplx.imag()) && cplx.imag() > 0)))) {
          // Ensure the first character is a number, `+`, or `-` to make parsing easier.
          // Specifically, print positive infinity and `NaN` as `+Infinity` and `+NaN`.
          p.writer().write('+');
        }
        p.withContext(null).print(cplx);
      }
    }

    @PrintMethod
    private void print(String string, Printer p) {
      if (Constants.isNaString(string)) {
        p.writer().write("NA_STR");
      } else {
        p.withContext(null).print(string);
      }
    }

    @PrintMethod
    private void print(Byte raw, Printer p) {
      // Java bytes are signed, so we must convert it into a larger type, then print that.
      var rawAsInt = raw < 0 ? (int) raw + 256 : (int) raw;

      // We can't use `Integer.toHexString` because we must ensure the leading 0 is written.
      var w = p.writer();
      w.write(Character.forDigit((rawAsInt >> 4) & 0xF, 16));
      w.write(Character.forDigit(rawAsInt & 0xF, 16));
    }

    @PrintMethod
    private void print(SEXP sexp, Printer p) {
      p.withContext(SEXPPrintContext.this).print(sexp);
    }
  }

  private void printGeneralStart(SEXPType type, Printer p) {
    var w = p.writer();

    w.write('<');
    p.print(type);
    w.write(' ');
  }

  /**
   * Prints "#ref", and returns whether the {@link SEXP} was previously printed in this context.
   *
   * <p>If it was previously printed, "ref" is the original index it was printed with. Otherwise,
   * it's the next lowest index not already assigned to another {@link SEXP}.
   *
   * <p>If the ref was found, we should print ">" and exit early. The caller is responsible for
   * doing that.
   */
  private boolean printAndCheckRef(SEXP sexp, Printer p) {
    var w = p.writer();

    w.write('#');

    if (refs.containsKey(sexp)) {
      p.print(refs.get(sexp));
      return true;
    }

    p.print(refs.size());
    refs.put(sexp, refs.size());
    return false;
  }

  private void printAttributes(SEXP sexp, Printer p) {
    var w = p.writer();

    if (sexp.hasAttributes()) {
      w.runIndented(
          () -> {
            w.write("\n| ");
            p.print(Objects.requireNonNull(sexp.attributes()));
          });
    }
  }

  private void printGeneralEnd(Printer p) {
    p.writer().write('>');
  }

  private void printLang(LangSXP sexp, Printer p) {
    var w = p.writer();

    if (sexp.funNameIs("{")) {
      if (sexp.args().isEmpty()) {
        w.write("{}");
      } else {
        w.write('{');
        w.runIndented(
            () -> {
              w.write('\n');
              var first = true;
              for (var arg : sexp.args()) {
                if (!first) {
                  w.write(";\n");
                }
                p.print(arg);
                first = false;
              }
            });
        w.write("\n}");
      }
    } else {
      p.print(sexp.fun());
      if (sexp.args().isEmpty()) {
        w.write("()");
      } else {
        p.print(sexp.args());
      }
    }
  }

  private void printList(AbstractListSXP list, Printer p) {
    var w = p.writer();

    // Special-case, because otherwise this looks like the empty list.
    if (list.size() == 1 && list.get(0).equals(new TaggedElem(SEXPs.MISSING_ARG))) {
      w.write("(<missing>)");
      return;
    }

    w.write("(");
    printElems(list, p);
    w.write(")");
  }

  private void printList(Collection<TaggedElem> list, Printer p) {
    var w = p.writer();

    // Special-case, because otherwise this looks like the empty list.
    if (list.size() == 1 && list.iterator().next().equals(new TaggedElem(SEXPs.MISSING_ARG))) {
      w.write("(<missing>)");
      return;
    }

    w.write("(");
    printElems(list, p);
    w.write(")");
  }

  private void printElems(Iterable<?> elems, Printer p) {
    var w = p.writer();

    w.runIndented(
        () -> {
          var i = 0;
          for (var elem : elems) {
            if (i == options.maxElements()) {
              w.write(" ...");
              break;
            }

            if (i != 0) {
              w.write(", ");
            }
            p.print(elem);
            i++;
          }
        });
  }

  private void printStringElems(Iterable<String> elems, Printer p) {
    var w = p.writer();

    w.runIndented(
        () -> {
          var i = 0;
          var totalLen = 0;
          for (var elem : elems) {
            if (i == options.maxElements() || totalLen > options.maxStringLength()) {
              w.write(" ...");
              break;
            }

            if (i != 0) {
              w.write(", ");
            }
            printStringElem(elem, options.maxStringLength() - totalLen, p);
            i++;
            totalLen += elem.length();
          }
        });
  }

  private void printStringElem(String elem, long allowedLength, Printer p) {
    var w = p.writer();

    if (elem.length() < allowedLength) {
      p.print(elem);
    } else {
      p.print(elem.substring(0, (int) allowedLength));
      w.write("...");
    }
  }

  /// If `currentDepth < options.maxDepth`: increment `currentDepth`, call `doPrint`, decrement.
  ///
  /// Otherwise, write `<...>`.
  private void handleDepth(Printer p, Runnable doPrint) {
    if (currentDepth < options.maxDepth()) {
      currentDepth++;
      try {
        doPrint.run();
      } finally {
        currentDepth--;
      }
    } else {
      p.writer().write("<...>");
    }
  }

  /// Call `doPrint` with `options.withDelimited(false)`.
  ///
  /// @see SEXPPrintOptions#printDelimited()
  private void runNotDelimited(Runnable doPrint) {
    var oldOptions = options;
    try {
      options = options.withDelimited(false);
      doPrint.run();
    } finally {
      options = oldOptions;
    }
  }
}
