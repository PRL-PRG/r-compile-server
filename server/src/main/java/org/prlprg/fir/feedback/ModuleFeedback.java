package org.prlprg.fir.feedback;

import javax.annotation.Nullable;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// Request [AbstractionFeedback]s for closure versions.
///
/// There's [MockModuleFeedback][MockModuleFeedback] which is a simple
/// hash-map, but this can also be implemented by a compile service.
public interface ModuleFeedback {
  AbstractionFeedback get(Abstraction scope);
}
