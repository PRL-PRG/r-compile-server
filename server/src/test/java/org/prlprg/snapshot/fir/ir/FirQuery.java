package org.prlprg.snapshot.fir.ir;

import static org.junit.Assert.fail;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.check.Checker.checkers;
import static org.prlprg.fir.ir.ParseUtil.parseModule;
import static org.prlprg.fir.opt.Cleanup.cleanup;
import static org.prlprg.snapshot.bc2fir.BC2FirUtils.compile;

import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.WeakHashMap;
import java.util.regex.Pattern;
import java.util.stream.Collectors;
import junit.framework.AssertionFailedError;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc2fir.BC2FirCFGCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2FirClosureCompilerUnsupportedException;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.examples.Example;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bc.BCQuery;

public class FirQuery implements GenFirQuery {
  public static final FirQuery INSTANCE = new FirQuery();

  private FirQuery() {}

  @Override
  public String name() {
    return "fir";
  }

  /// A module with unevaluated versions is only what this query computes until it's used.
  @Override
  public boolean isTransient() {
    return true;
  }

  /// For an R example, the module's baselines are unevaluated (see [BC2FirUtils#compile(EnvSXP,
  /// RSession, boolean, ModuleBcOriginMap)]).
  @Override
  public Module compute(Example example, SnapshotStore store) {
    return switch (example.type()) {
      case "fir" -> parseModule(example.text());
      case "R" -> {
        // An unevaluated module doesn't report what it doesn't support until it's evaluated,
        // which is too late to skip the example.
        var unsupported =
            unsupportedExamples.computeIfAbsent(
                example.rpath(),
                _ -> {
                  try {
                    evaluated(example, store);
                    return Optional.empty();
                  } catch (BC2FirClosureCompilerUnsupportedException
                      | BC2FirCFGCompilerUnsupportedException e) {
                    return Optional.of(e);
                  }
                });
        if (unsupported.isPresent()) {
          throw new SkipQueryException(name(), unsupported.get());
        }

        yield unevaluated(example, store);
      }
      default ->
          throw new AssertionFailedError(
              "Can't get fir module from this type of example: " + example.rpath());
    };
  }

  /// The module with every version evaluated, which is what's checked and saved: an unevaluated
  /// version has nothing to check, and isn't printed.
  ///
  /// It's compiled again instead of evaluating `data`, which whoever loaded it still wants
  /// unevaluated.
  @Override
  public Module snapshot(Module data, Example example, SnapshotStore store) {
    return switch (example.type()) {
      // Nothing is unevaluated, and checking doesn't change it.
      case "fir" -> data;
      default -> evaluated(example, store);
    };
  }

  /// The GNU-R bytecode that `module`'s functions were compiled from, if this query computed it
  /// from an R example, otherwise `null`.
  ///
  /// The bytecode of an inner closure is only in it once the enclosing function's baseline is
  /// evaluated.
  public static @Nullable ModuleBcOriginMap bytecodesOf(Module module) {
    return BYTECODES.get(module);
  }

  private static final Map<Module, ModuleBcOriginMap> BYTECODES =
      Collections.synchronizedMap(new WeakHashMap<>());

  /// Whether each R example (by path) has something BC->FIŘ doesn't support, and what.
  private final Map<Path, Optional<RuntimeException>> unsupportedExamples = new HashMap<>();

  /// Also cleans the evaluated bodies up, which BC->FIŘ leaves to whoever needs them clean: the
  /// checkers (below) and the printed snapshot.
  @Override
  public void evaluateAll(Module module) {
    module.evaluateAll();
    cleanup(module);
  }

  private Module evaluated(Example example, SnapshotStore store) {
    var module = unevaluated(example, store);
    evaluateAll(module);

    // Don't check provenance, because it's trivial (no `consume` annotations) but expensive.
    // Don't check captures, because promises are still non-local until `SpecializeLocalPromise`.
    if (!checkAll(module, Exclude.PROVENANCE, Exclude.CAPTURE)) {
      fail("Compiled FIŘ failed verification\n" + module);
    }
    return module;
  }

  private Module unevaluated(Example example, SnapshotStore store) {
    // Most functions are fine strict, so it's on by default
    var strict = !example.hasOption(name(), "noStrict");

    var R = GNUR.instance();
    var bc = store.load(example, BCQuery.FIR);

    // An environment with one function, `main`,
    // which takes zero arguments and its body is `bc`.
    var env = new UserEnvSXP();
    env.set("main", SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), env));

    var bytecodes = new ModuleBcOriginMap();
    var module = compile(env, R.getSession(), strict, bytecodes);
    BYTECODES.put(module, bytecodes);
    return module;
  }

  @Override
  public void verifyNoRegression(
      Module previous, Module current, Example example, SnapshotStore store) {
    assertEquals(previous.toString(), current.toString(), "FIŘ changed");
  }

  @Override
  public void verifyExtra(Module data, Example example, SnapshotStore store) {
    // Check that we have expected errors and not unexpected errors

    var expectedErrors =
        data.localFunctions().stream()
            .flatMap(f -> f.versions().stream())
            .flatMap(Abstraction::streamCfgs)
            .<ExpectedError>mapMulti(
                (cfg, add) -> {
                  if (!cfg.isPromise()) {
                    var entryPos = new Loc(cfg.entry(), -1);
                    for (var expectedError : expectedErrors(entryPos, cfg.scope().comments())) {
                      add.accept(expectedError);
                    }
                  }

                  for (var bb : cfg.bbs()) {
                    var bbEntryPos = new Loc(bb, -1);
                    for (var expectedError : expectedErrors(bbEntryPos, bb.comments())) {
                      add.accept(expectedError);
                    }

                    for (var instructionIndex = 0;
                        instructionIndex < bb.instructions().size();
                        instructionIndex++) {
                      var instr = bb.instructions().get(instructionIndex);

                      var pos = new Loc(bb, instructionIndex);
                      for (var expectedError : expectedErrors(pos, instr.comments())) {
                        add.accept(expectedError);
                      }
                    }
                  }
                })
            .collect(Collectors.toCollection(LinkedHashSet::new));

    // This is the freshly-compiled, pre-optimization module: capturing promises are still
    // legitimately non-local (they're marked local later by `SpecializeLocalPromise`), so exclude
    // the capture check here (it runs on the optimized module in `OptimizedFirQuery`).
    var checkers = checkers(Checker.Exclude.CAPTURE);

    for (var checker : checkers) {
      checker.run(data);
    }

    for (var checker : checkers) {
      checker.removeErrorsIf(
          e ->
              e.position() != null
                  && expectedErrors.remove(
                      new ExpectedError(
                          new Loc(e.position().bb(), e.position().instructionIndex()),
                          checker.name(),
                          e.mainMessage().split("\n")[0].trim())));
    }

    for (var checker : checkers) {
      checker.print();
    }

    var hasExpectedErrors = !expectedErrors.isEmpty();
    var hasUnexpectedErrors = checkers.stream().anyMatch(Checker::hasErrors);

    if (hasExpectedErrors) {
      var introduction =
          hasUnexpectedErrors
              ? "Verification failed with unexpected errors, while not catching these expected errors:"
              : "Verification didn't catch these expected errors:";
      var expectedErrorsList =
          expectedErrors.stream().map(Object::toString).collect(Collectors.joining("\n"));
      fail(introduction + "\n" + expectedErrorsList);
    } else if (hasUnexpectedErrors) {
      fail("Verification failed with unexpected errors");
    }
  }

  private static List<ExpectedError> expectedErrors(Loc pos, Comments comments) {
    var regex = Pattern.compile("\\s*([\\w-]+)-error:(.*)");
    var errors = new ArrayList<ExpectedError>();
    for (var line : comments) {
      var match = regex.matcher(line);
      if (match.matches()) {
        errors.add(new ExpectedError(pos, match.group(1), match.group(2).trim()));
      }
    }
    return errors;
  }

  /// The location of an expected/actual error: a `(bb, index)` position, matched by equality.
  private record Loc(BB bb, int index) {
    @Override
    public String toString() {
      return bb.label() + ":" + index + " ";
    }
  }

  private record ExpectedError(Loc pos, String checkerName, String message) {
    @Override
    public String toString() {
      return String.format("at %s%s-error: %s", pos, checkerName, message);
    }
  }
}
