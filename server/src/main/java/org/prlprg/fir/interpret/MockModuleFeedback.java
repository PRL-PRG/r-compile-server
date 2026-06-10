package org.prlprg.fir.interpret;

import java.util.HashMap;
import java.util.Map;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// [ModuleFeedback] implemented by a simple hash-map.
public class MockModuleFeedback implements ModuleFeedback {
  private final Map<Abstraction, AbstractionFeedback> feedbacks = new HashMap<>();

  @Override
  public AbstractionFeedback get(Abstraction scope) {
    return feedbacks.computeIfAbsent(scope, _ -> new AbstractionFeedback());
  }
}
