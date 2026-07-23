package org.prlprg.fir.interpret.internal;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.fir.parseprint.ModuleFeedbackPrintContext;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
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
            feedback.toString(),
            MockModuleFeedback.class,
            new ModuleFeedbackParseContext(moduleCopy));
    return Pair.of(moduleCopy, feedbackCopy);
  }

  public MockModuleFeedback() {}

  @Override
  public AbstractionFeedback get(Abstraction scope) {
    return feedbacks.computeIfAbsent(scope, _ -> new AbstractionFeedback(this));
  }

  /// The feedback recorded for every version that has any.
  public @UnmodifiableView Map<Abstraction, AbstractionFeedback> all() {
    return Collections.unmodifiableMap(feedbacks);
  }

  /// Set the feedback for a version, e.g. one that was just parsed.
  public void put(Abstraction scope, AbstractionFeedback feedback) {
    feedbacks.put(scope, feedback);
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

  /// Feedback can be printed without any surrounding information (constants are printed in full),
  /// so this forwards to [ModuleFeedbackPrintContext] and callers can just `p.print(feedback)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new ModuleFeedbackPrintContext()).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this, new ModuleFeedbackPrintContext());
  }

  /// Two feedbacks are equal iff they record the same feedback for the same functions.
  ///
  /// Compared via the printed representation, which is keyed by function name and signature rather
  /// than [Abstraction] identity, so it's stable across separately-built modules (e.g. comparing an
  /// optimized module's eval feedback against the unoptimized oracle's).
  @Override
  public boolean equals(Object o) {
    return o instanceof MockModuleFeedback other && toString().equals(other.toString());
  }

  @Override
  public int hashCode() {
    return toString().hashCode();
  }
}
