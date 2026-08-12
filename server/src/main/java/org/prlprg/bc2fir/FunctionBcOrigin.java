package org.prlprg.bc2fir;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.bc.Bc;
import org.prlprg.sexp.ListSXP;

/// A function's original GNU-R bytecode and formals, and the registers of the FIŘ instructions
/// that its recorded bytecode instructions were compiled into.
public final class FunctionBcOrigin {
  private final Bc bc;
  private final ListSXP formals;
  private final Map<Integer, String> feedbackRegisters = new LinkedHashMap<>();

  FunctionBcOrigin(Bc bc, ListSXP formals) {
    this.bc = bc;
    this.formals = formals;
  }

  public Bc bc() {
    return bc;
  }

  public ListSXP formals() {
    return formals;
  }

  /// Record that the feedback the copy-and-patch JIT records for the bytecode instruction at
  /// `bcPos` (an index into [#bc()]'s code) describes the register named `registerName`.
  void recordFeedbackRegister(int bcPos, String registerName) {
    feedbackRegisters.put(bcPos, registerName);
  }

  /// The register each recorded bytecode instruction's feedback describes, keyed by the
  /// instruction's index into [#bc()]'s code.
  public @UnmodifiableView Map<Integer, String> feedbackRegisters() {
    return Collections.unmodifiableMap(feedbackRegisters);
  }
}
