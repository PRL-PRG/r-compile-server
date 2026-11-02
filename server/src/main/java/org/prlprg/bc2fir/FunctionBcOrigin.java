package org.prlprg.bc2fir;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.bc.Bc;
import org.prlprg.sexp.ListSXP;

/// A function's original GNU-R bytecode and formals, the registers of the FIŘ instructions that
/// its recorded bytecode instructions were compiled into, and the recorded `GETVAR`s that read a
/// parameter's argument.
public final class FunctionBcOrigin {
  private final Bc bc;
  private final ListSXP formals;
  private final Map<Integer, String> feedbackRegisters = new LinkedHashMap<>();
  private final Map<Integer, String> parameterReads = new LinkedHashMap<>();

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

  /// Record that the `GETVAR` at `bcPos` (an index into [#bc()]'s code) pushes the argument of
  /// the parameter named `parameterName`.
  void recordParameterRead(int bcPos, String parameterName) {
    parameterReads.put(bcPos, parameterName);
  }

  /// The name of the parameter whose argument a `GETVAR` pushes, keyed by the instruction's index
  /// into [#bc()]'s code.
  ///
  /// A parameter has at most one entry: its first `GETVAR`. A parameter that the bytecode stores
  /// to has none, because after the store the variable's value isn't the argument. The type the
  /// copy-and-patch JIT records for the `GETVAR` is then the type of the forced argument.
  public @UnmodifiableView Map<Integer, String> parameterReads() {
    return Collections.unmodifiableMap(parameterReads);
  }
}
