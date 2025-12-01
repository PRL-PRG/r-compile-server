package org.prlprg.examples;

import static org.prlprg.bc.BCCompiler.DEFAULT_OPTIMIZATION_LEVEL;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.Set;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.bc.BCCompiler;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.Pair;
import org.prlprg.util.Streams;
import org.prlprg.util.gnur.GNUR;

/// An R source file
public class RExample {
  private final GNUR R;
  final Example inner;

  private @Nullable EnvSXP ast;
  private @Nullable EnvSXP compiledClosures;

  public RExample(GNUR r, Example inner) {
    this.R = r;
    this.inner = inner;
  }

  public String name() {
    return inner.name();
  }

  public @Unmodifiable Set<ExampleOption> options(String filter) {
    return inner.options(filter);
  }

  public EnvSXP astClosures() {
    if (ast == null) {
      ast = R.evalEnvironment(inner.text());
    }
    return ast;
  }

  public EnvSXP compiledClosures() {
    if (compiledClosures == null) {
      var optLevel = options("bc").stream()
          .filter(opt -> opt.name().equals("optLevel"))
          .findFirst()
          .map(opt -> opt.expectOneArg().asScalarInteger().orElseThrow(() -> new IllegalArgumentException(
              "optLevel option requires an integer argument")))
          .orElse(DEFAULT_OPTIMIZATION_LEVEL);
      var astClosures = astClosures();

      compiledClosures = new UserEnvSXP(astClosures.parent());
      for (var astEntry : astClosures().bindings()) {
          var name = astEntry.getKey();
          if (!(astEntry.getValue() instanceof CloSXP astClosure)) {
            continue;
          }

          var compiler = new BCCompiler(astClosure, R.getSession());
          compiler.setOptimizationLevel(optLevel);
          var bcOpt = compiler.compile();

          if (bcOpt.isEmpty()) {
            continue;
          }
          var bc = bcOpt.get();

          var compiledClosure = SEXPs.closure(astClosure.parameters(), SEXPs.bcode(bc), astClosure.env());
          compiledClosures.set(name, compiledClosure);
        }
    }
    return compiledClosures;
  }

  @Override
  public String toString() {
    return inner.toString();
  }
}
