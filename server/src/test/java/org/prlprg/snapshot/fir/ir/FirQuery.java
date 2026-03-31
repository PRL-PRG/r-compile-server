package org.prlprg.snapshot.fir.ir;

import static org.junit.Assert.fail;
import static org.prlprg.fir.check.Checker.checkers;
import static org.prlprg.fir.ir.ParseUtil.parseModule;
import static org.prlprg.snapshot.bc2fir.BC2FirUtils.compile;

import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.regex.Pattern;
import java.util.stream.Collectors;
import junit.framework.AssertionFailedError;
import org.prlprg.bc2fir.BC2FirCFGCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2FirClosureCompilerUnsupportedException;
import org.prlprg.examples.Example;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.position.CfgPosition;
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

  @Override
  public Module compute(Example example, SnapshotStore store) {
    return switch (example.type()) {
      case "fir" -> parseModule(example.text());
      case "R" -> {
        var R = GNUR.instance();
        var bc = store.load(example, BCQuery.FIR);

        // An environment with one function, `main`,
        // which takes zero arguments and its body is `bc`.
        var env = new UserEnvSXP();
        env.set("main", SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), env));

        try {
          yield compile(env, R.getSession());
        } catch (BC2FirClosureCompilerUnsupportedException
            | BC2FirCFGCompilerUnsupportedException e) {
          throw new SkipQueryException(name(), e);
        }
      }
      default ->
          throw new AssertionFailedError(
              "Can't get fir module from this type of example: " + example.rpath());
    };
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
                    var entryPos = new CfgPosition(cfg.entry(), -1, null);
                    for (var expectedError : expectedErrors(entryPos, cfg.scope().comments())) {
                      add.accept(expectedError);
                    }
                  }

                  for (var bb : cfg.bbs()) {
                    var bbEntryPos = new CfgPosition(bb, -1, null);
                    for (var expectedError : expectedErrors(bbEntryPos, bb.comments())) {
                      add.accept(expectedError);
                    }

                    for (var instructionIndex = 0;
                        instructionIndex < bb.instructions().size();
                        instructionIndex++) {
                      var instr = bb.instructions().get(instructionIndex);

                      var pos = new CfgPosition(bb, instructionIndex, instr);
                      for (var expectedError : expectedErrors(pos, instr.comments())) {
                        add.accept(expectedError);
                      }
                    }
                  }
                })
            .collect(Collectors.toCollection(LinkedHashSet::new));

    var checkers = checkers();

    for (var checker : checkers) {
      checker.run(data);
    }

    for (var checker : checkers) {
      checker.removeErrorsIf(
          e ->
              e.position() != null
                  && expectedErrors.remove(
                      new ExpectedError(
                          new CfgPosition(e.position().bb(), e.position().instructionIndex()),
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

  private static List<ExpectedError> expectedErrors(CfgPosition pos, Comments comments) {
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

  private record ExpectedError(CfgPosition pos, String checkerName, String message) {
    @Override
    public String toString() {
      return String.format("at %s%s-error: %s", pos, checkerName, message);
    }
  }
}
