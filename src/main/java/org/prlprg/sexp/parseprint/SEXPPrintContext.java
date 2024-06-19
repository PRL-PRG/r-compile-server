package org.prlprg.sexp.parseprint;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.Closure;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EmptyEnvSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NamespaceEnvSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.StaticEnvSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.TaggedElem.BindingsParsePrintContext;
import org.prlprg.sexp.VectorSXP;

/**
 * Maps potentially-recursive {@link SEXP}s to integers to they can be serialized.
 *
 * <p>If you print multiple {@link SEXP}s with the same context, the references will be shared
 * across the prints. This is useful e.g. when printing {@link CFG} or {@link Closure}, since they
 * may contain many references to the same large {@link StaticEnvSXP}.
 *
 * @implNote All of the logic for printing SEXPs and {@link Attributes} (but not {@link
 *     TaggedElem}s) is implemented in this class.
 */
public class SEXPPrintContext implements HasSEXPPrintContext {
  private final Map<SEXP, Integer> refs = new HashMap<>();
  private final SEXPPrintOptions options;
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

  @Override
  public SEXPPrintContext sexpPrintContext() {
    return this;
  }

  @PrintMethod
  private void print(NilSXP sexp, Printer p) {
    handleDepth(p, () -> p.writer().write(sexp.toString()));
  }

  @PrintMethod
  private void print(SymSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          var w = p.writer();

          var toString = sexp.toString();
          switch (toString) {
              // These will be parsed as other things if they aren't explicitly quoted.
            case "NULL",
                "TRUE",
                "FALSE",
                "NA_LGL",
                "NA_INT",
                "NA_REAL",
                "NA_CPLX",
                "NA_STR",
                "NA" -> {
              w.write('`');
              w.write(toString);
              w.write('`');
            }
            default -> w.write(toString);
          }
        });
  }

  @PrintMethod
  private void print(LangSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
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
            p.print(sexp.args());
          }
        });
  }

  @PrintMethod
  private void print(ListSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp.hasAttributes()) {
            printGeneralStart(sexp.type(), p);
            printList(sexp, p);
            printAttributes(sexp, p);
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
          if (sexp.isScalar()) {
            printStringElem(sexp.get(0), options.maxStringLength(), p);
          } else {
            printGeneralStart(sexp.type(), p);
            printStringElems(sexp, p);
            printAttributes(sexp, p);
            printGeneralEnd(p);
          }
        });
  }

  @PrintMethod
  private void print(VectorSXP<?> sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          if (sexp.isScalar() && canPrintScalarInline(sexp.type())) {
            p.withContext(VectorElem.INSTANCE).print(sexp.get(0));
          } else {
            printGeneralStart(sexp.type(), p);
            printElems(sexp, p.withContext(VectorElem.INSTANCE));
            printAttributes(sexp, p);
            printGeneralEnd(p);
          }
        });
  }

  @PrintMethod
  private void print(CloSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          var w = p.writer();

          printGeneralStart(sexp.type(), p);
          printList(sexp.parameters(), p.withContext(new BindingsParsePrintContext(p.context())));
          w.write(" env=");
          w.runIndented(() -> p.print(sexp.env()));
          printAttributes(sexp, p);
          w.write(" ⇒ ");
          w.runIndented(() -> p.print(sexp.body()));
          printGeneralEnd(p);
        });
  }

  @PrintMethod
  private void print(EnvSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          var w = p.writer();

          w.write('<');
          p.print(sexp.envType());

          if (!(sexp instanceof EmptyEnvSXP)) {
            if (printAndCheckRef(sexp, p)) {
              printGeneralEnd(p);
              return;
            }
          }
          if (sexp instanceof NamespaceEnvSXP ns) {
            w.write(' ');
            w.write(Names.quoteIfNecessary(ns.name()));
            w.write(':');
            w.write(ns.version());
          }

          if (!(sexp instanceof EmptyEnvSXP)) {
            if (options.printStaticEnvironmentDetails()) {
              w.write(" parent=");
              w.runIndented(() -> p.print(sexp.parent()));
              w.write(' ');
              printList(
                  sexp.bindingsAsTaggedElems(),
                  p.withContext(new BindingsParsePrintContext(p.context())));
            } else {
              w.write(" ...");
            }
          }

          printAttributes(sexp, p);

          printGeneralEnd(p);
        });
  }

  @PrintMethod
  private void print(BCodeSXP sexp, Printer p) {
    handleDepth(
        p,
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
        });
  }

  @PrintMethod
  private void print(PromSXP sexp, Printer p) {
    handleDepth(
        p,
        () -> {
          var w = p.writer();

          printGeneralStart(sexp.type(), p);
          w.write("env=");
          w.runIndented(() -> p.print(sexp.env()));
          if (sexp.isEvaluated()) {
            w.write(" val=");
            w.runIndented(() -> p.print(sexp.val()));
          }
          w.write(" ⇒ ");
          w.runIndented(() -> p.print(sexp.expr()));
          printGeneralEnd(p);
        });
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
  private void print(SEXP sexp, Printer p) {
    throw new AssertionError("unhandled SEXP class: " + sexp.getClass().getSimpleName());
  }

  @PrintMethod
  private void print(Attributes attributes, Printer p) {
    var w = p.writer();

    var i = 0;
    for (var attribute : attributes.entrySet()) {
      if (i == options.maxAttributes()) {
        w.write("\n...");
        break;
      }

      if (i != 0) {
        w.write("\n, ");
      }
      w.write(Names.quoteIfNecessary(attribute.getKey()));
      w.write('=');
      p.print(attribute.getValue());
      i++;
    }
  }

  private static class VectorElem {
    private static final VectorElem INSTANCE = new VectorElem();

    @PrintMethod
    private void print(Integer integer, Printer p) {
      var w = p.writer();

      p.withContext(null).print(integer);
      w.write('L');
    }

    @PrintMethod
    private void print(Complex cplx, Printer p) {
      var w = p.writer();

      p.withContext(null).print(cplx);
      if (cplx.imag() == 0) {
        w.write("+0i");
      }
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

  private void printList(Iterable<TaggedElem> list, Printer p) {
    var w = p.writer();

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

  /**
   * If {@code currentDepth < options.maxDepth}: increment {@code currentDepth}, call {@code
   * doPrint}, decrement.
   *
   * <p>Otherwise, write {@code <...>}.
   */
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

  private boolean canPrintScalarInline(SEXPType type) {
    assert type != SEXPType.STR
        : "`VectorElem` should never be given strings, because they are handled with their own print function";
    // `ScalarRawSXP` must print like `<raw ##>`, the `VectorSXP<?>` implementation.
    return type == SEXPType.INT
        || type == SEXPType.REAL
        || type == SEXPType.LGL
        || type == SEXPType.CPLX;
  }
}
