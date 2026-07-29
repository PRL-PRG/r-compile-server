package org.prlprg.fir.parseprint;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

/// Prints recorded [feedback][org.prlprg.fir.feedback.ModuleFeedback] (specifically
/// [MockModuleFeedback], the serializable implementation).
///
/// The only thing printing feedback needs is how to print the constants in it, which is
/// [#forSexps]; [AbstractionFeedbackPrintContext] is nested here because it needs the same.
public final class ModuleFeedbackPrintContext {
  private final SEXPPrintContext forSexps;

  /// Print constants in full (the form the parser reads back).
  public ModuleFeedbackPrintContext() {
    this(new SEXPPrintContext(SEXPPrintOptions.FULL));
  }

  public ModuleFeedbackPrintContext(SEXPPrintContext forSexps) {
    this.forSexps = forSexps;
  }

  /// A context for the feedback of a single version.
  public AbstractionFeedbackPrintContext forAbstraction() {
    return new AbstractionFeedbackPrintContext();
  }

  @PrintMethod
  private void printModuleFeedback(MockModuleFeedback moduleFeedback, Printer p) {
    var w = p.writer();
    var p2 = p.withContext(forAbstraction());

    var module = moduleFeedback.module();
    boolean[] printedAny = {false};

    w.write("feedback {");
    w.runIndented(
        () -> {
          for (var fn : module.localFunctions()) {
            for (var version : fn.versions()) {
              if (!moduleFeedback.recordedAny(version)) {
                continue;
              }
              printedAny[0] = true;

              var abstractionFeedback = moduleFeedback.get(version);

              w.write('\n');
              p.print(fn.name());
              w.write("< ");
              p.print(version.signature());
              w.write(" > = ");
              w.runIndented(() -> p2.print(abstractionFeedback));
            }
          }
        });
    if (printedAny[0]) {
      w.write('\n');
    }
    w.write('}');
  }

  /// Prints the [AbstractionFeedback] recorded for one version.
  public final class AbstractionFeedbackPrintContext {
    private AbstractionFeedbackPrintContext() {}

    @PrintMethod
    private void printAbstractionFeedback(AbstractionFeedback feedback, Printer p) {
      var w = p.writer();

      p.print(feedback.numCalls());
      w.write("x\n");

      var registers = feedback.recordedRegisters();
      if (registers.isEmpty()) {
        w.write("[]");
        return;
      }

      w.write("[ ");
      w.runIndented(
          () -> {
            var wroteAny = false;

            for (var register : registers) {
              if (wroteAny) {
                w.write('\n');
              } else {
                wroteAny = true;
              }

              w.write("reg ");
              p.print(register);
              printRegister(p, feedback, register);
            }

            for (var env : feedback.reflectiveEnvs) {
              if (wroteAny) {
                w.write('\n');
              } else {
                wroteAny = true;
              }

              w.write("env ");
              printPosition(p, env);
            }

            for (var prom : feedback.escapingPromises) {
              if (wroteAny) {
                w.write('\n');
              } else {
                wroteAny = true;
              }

              w.write("prom ");
              printPosition(p, prom);
            }
          });
      w.write("\n]");
    }

    /// Print one register's feedback. Prints nothing if it has none.
    ///
    /// Exposed because a register's feedback is also printed on its own, next to the register's
    /// value in an interpreter stack trace.
    public void printRegister(Printer p, AbstractionFeedback feedback, Register register) {
      var w = p.writer();
      var p2 = p.withContext(forSexps);

      var type = feedback.types.get(register);
      var callee = feedback.callees.get(register);
      var constant = feedback.constants.get(register);
      var assignedForceCount = feedback.forceCount.get(register);
      var times = feedback.times(register);

      if (times != 0) {
        if (assignedForceCount != null) {
          w.write(" !");
          p.print(assignedForceCount);
        }

        if (callee != null) {
          w.write(" -");
          if (callee.isPresent()) {
            p.print(callee.get().name());
          } else {
            w.write("_");
          }
        }

        if (constant != null) {
          w.write(" =");
          if (constant.isPresent()) {
            p2.print(constant.get());
          } else {
            w.write("_");
          }
        }

        if (type != null) {
          w.write(" :");
          p.print(type);
        }

        w.write(" (");
        p.print(times);
        w.write("x)");
      }
    }

    /// Print a statement's position: a `bb:index` (or `outer/.../innermost` through enclosing
    /// promise bodies). Inverse of
    /// [ModuleFeedbackParseContext.AbstractionFeedbackParseContext]'s `parsePosition`.
    private void printPosition(Printer p, Statement statement) {
      var w = p.writer();
      var first = true;
      for (var s : positionChain(statement)) {
        if (first) {
          first = false;
        } else {
          w.write('/');
        }
        w.write(Objects.requireNonNull(s.parentBB()).label());
        w.write(':');
        p.print(s.indexInBB());
      }
    }

    /// The enclosing-promise statements followed by `statement`, ordered outermost (in the
    /// version's [CFG][org.prlprg.fir.ir.cfg.CFG]) to innermost. Derived from the promise nesting
    /// via [CfgHierarchy], so it round-trips through `parsePosition`.
    private static List<Statement> positionChain(Statement statement) {
      var scope = Objects.requireNonNull(statement.parentBB()).owner().scope();
      var hierarchy = new CfgHierarchy(scope);
      var chain = new ArrayList<Statement>();
      for (var s = statement;
          s != null;
          s = hierarchy.parentPromise(Objects.requireNonNull(s.parentBB()).owner())) {
        chain.add(s);
      }
      Collections.reverse(chain);
      return chain;
    }
  }
}
