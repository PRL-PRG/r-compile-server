package org.prlprg.fir.check;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Predicate;
import javax.annotation.CheckReturnValue;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;

public abstract class Checker {
  /// Never reports errors.
  private static final Checker NULL =
      new Checker() {
        @Override
        protected void doRun(Abstraction version) {
          // Do nothing
        }
      };

  /// Check invariants (CFG, types, effects, provenance, and environments) in the version. If
  /// there are any errors, [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  public static boolean checkAll(Abstraction version, Exclude... exclusions) {
    return checkAll(c -> c.run(null, version), exclusions);
  }

  /// Check invariants (CFG, types, effects, provenance, and environments) in the function. If
  /// there are any errors, [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  public static boolean checkAll(Function function, Exclude... exclusions) {
    return checkAll(c -> c.run(function), exclusions);
  }

  /// Check invariants (CFG, types, effects, provenance, and environments) in the module. If
  /// there are any errors, [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  public static boolean checkAll(Module module, Exclude... exclusions) {
    return checkAll(c -> c.run(module), exclusions);
  }

  /// Check invariants (CFG, types, effects, provenance, and environments). If there are any
  /// errors, [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  private static boolean checkAll(Consumer<Checker> doCheck, Exclude... exclusions) {
    var checkers = checkers(exclusions);

    // Don't short-circuit.
    for (var checker : checkers) {
      doCheck.accept(checker);
    }
    for (var checker : checkers) {
      checker.print();
    }
    return checkers.stream().noneMatch(Checker::hasErrors);
  }

  public static List<Checker> checkers(Exclude... exclusions) {
    var exclusionsSet = EnumSet.noneOf(Exclude.class);
    exclusionsSet.addAll(Arrays.asList(exclusions));

    return List.of(
        new CFGChecker(!exclusionsSet.contains(Exclude.STRICT_CFG)),
        new TypeAndEffectChecker(),
        exclusionsSet.contains(Exclude.PROVENANCE) ? NULL : new ProvenanceChecker(),
        exclusionsSet.contains(Exclude.PROVENANCE) ? NULL : new StrictnessChecker(),
        new EnvironmentChecker());
  }

  private @Nullable Function function = null;
  private final List<CheckException> errors = new ArrayList<>();

  /// Returns all errors found during type-checking.
  public List<CheckException> errors() {
    return errors;
  }

  /// Filters errors
  public void removeErrorsIf(Predicate<CheckException> doRemove) {
    errors.removeIf(doRemove);
  }

  /// Check all code in the module.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  public final void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  /// Check all code in the function.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  public final void run(Function function) {
    for (var version : function.versions()) {
      run(function, version);
    }
  }

  /// Check all code in the version.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  ///
  /// @throws IllegalArgumentException If `version` isn't in `function`.
  public final void run(@Nullable Function function, Abstraction version) {
    if (function != null && !function.contains(version)) {
      throw new IllegalArgumentException(
          "Function " + function.name() + " doesn't contain version " + version);
    }

    this.function = function;
    doRun(version);
    this.function = null;
  }

  /// Prints any errors found during checking.
  public final void print() {
    if (!errors.isEmpty()) {
      var name = getClass().getSimpleName().replace("Checker", "");
      System.err.println("Encountered " + name + " errors:");
      for (var error : errors) {
        System.err.println();
        System.err.println(error.getMessage());
      }
    }
  }

  public final boolean hasErrors() {
    return !errors.isEmpty();
  }

  protected abstract void doRun(Abstraction version);

  /// The function currently being checked.
  protected final @Nullable Function function() {
    return function;
  }

  protected final void report(Abstraction abstraction, String message) {
    errors.add(
        new CheckException(
            function(),
            abstraction.cfg() == null ? null : new CFGCursor(abstraction.cfg()),
            message));
  }

  protected final void report(ScopePosition position, String message) {
    report(position.inInnermostCfg(), message);
  }

  protected final void report(CfgPosition position, String message) {
    report(position.bb(), position.instructionIndex(), message);
  }

  protected final void report(BB bb, int instructionIndex, String message) {
    errors.add(new CheckException(function(), new CFGCursor(bb, instructionIndex), message));
  }

  public enum Exclude {
    STRICT_CFG,
    PROVENANCE,
  }
}
