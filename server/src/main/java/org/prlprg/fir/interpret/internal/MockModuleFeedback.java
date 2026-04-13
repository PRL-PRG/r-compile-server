package org.prlprg.fir.interpret.internal;

import java.util.HashMap;
import java.util.Map;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;
import org.prlprg.util.Pair;

/// [ModuleFeedback] implemented by a simple hash-map.
public class MockModuleFeedback implements ModuleFeedback {
  private final Map<Abstraction, AbstractionFeedback> feedbacks = new HashMap<>();

  /// Deep copy the module and its feedback together
  public static Pair<Module, MockModuleFeedback> deepCopy(
      Module module, MockModuleFeedback feedback) {
    var moduleCopy = module.deepCopy();
    var feedbackCopy =
        Parser.fromString(
            feedback.toString(), MockModuleFeedback.class, new ParseContext(moduleCopy));
    return Pair.of(moduleCopy, feedbackCopy);
  }

  public MockModuleFeedback() {}

  @Override
  public AbstractionFeedback get(Abstraction scope) {
    return feedbacks.computeIfAbsent(scope, _ -> new AbstractionFeedback(this));
  }

  @Override
  public void copyTo(Abstraction dst, Abstraction src) {
    var srcFeedback = feedbacks.get(src);
    if (srcFeedback == null) {
      return;
    }
    feedbacks.put(dst, srcFeedback.copy());
  }

  @Override
  public void resetCalls() {
    for (var feedback : feedbacks.values()) {
      feedback.resetCalls();
    }
  }

  public record ParseContext(Module module) {}

  @ParseMethod
  private MockModuleFeedback(Parser p, ParseContext ctx) {
    var s = p.scanner();
    var module = ctx.module();
    var forSexps = new SEXPParseContext();
    var p2 = p.withContext(new AbstractionFeedback.ParseContext(this, module, forSexps));

    s.assertAndSkip("feedback");
    s.assertAndSkip('{');
    while (!s.trySkip('}')) {
      var name = p.parse(NamedVariable.class);
      var fn = module.localFunction(name);
      if (fn == null) {
        throw s.fail("No such function: " + name);
      }
      s.assertAndSkip('<');

      var signature = p.parse(Signature.class);
      var version = fn.guess(signature);
      if (version == null || !version.signature().equals(signature)) {
        throw s.fail("No such version: " + name + "/" + signature);
      }
      s.assertAndSkip('>');

      s.assertAndSkip('=');

      var feedback = p2.parse(AbstractionFeedback.class);

      feedbacks.put(version, feedback);
    }
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    var forSexps = new SEXPPrintContext(SEXPPrintOptions.FULL);
    var p2 = p.withContext(new AbstractionFeedback.PrintContext(forSexps));

    if (feedbacks.isEmpty()) {
      w.write("feedback {}");
      return;
    }

    var module = feedbacks.keySet().iterator().next().module();

    w.write("feedback {");
    w.runIndented(
        () -> {
          for (var fn : module.localFunctions()) {
            for (var version : fn.versions()) {
              if (!feedbacks.containsKey(version)) {
                continue;
              }

              w.write('\n');
              p.print(fn.name());
              w.write("< ");
              p.print(version.signature());
              w.write(" > = ");
              w.runIndented(() -> p2.print(feedbacks.get(version)));
            }
          }
        });
    w.write("\n}");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
