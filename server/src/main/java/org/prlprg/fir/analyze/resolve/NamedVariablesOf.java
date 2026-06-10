package org.prlprg.fir.analyze.resolve;

import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Simple analysis that gets all named variables that are loaded or stored in a scope.
public class NamedVariablesOf implements Analysis {
  /// All named variables that are loaded or stored.
  ///
  /// This includes variables in promises, but not locally declared ones if they're neither
  /// loaded nor stored.
  ///
  /// This is the function that [NamedVariablesOf] uses.
  public static Set<NamedVariable> namedVariablesOf(Abstraction scope) {
    return scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream())
        .flatMap(
            statement ->
                switch (statement.expression()) {
                  case Load(var v) -> Stream.of(v);
                  case LoadFun(var v, var env) -> env == Env.LOCAL ? Stream.of(v) : Stream.empty();
                  case Store(var v, var _) -> Stream.of(v);
                  case SuperLoad(var v) -> Stream.of(v);
                  case SuperStore(var v, var _) -> Stream.of(v);
                  case Aea _,
                      Assume _,
                      Call _,
                      Cast _,
                      Closure _,
                      Dup _,
                      Force _,
                      MaybeForce _,
                      MkVector _,
                      MkEnv _,
                      Placeholder _,
                      PopEnv _,
                      Promise _,
                      ReflectiveLoad _,
                      ReflectiveStore _,
                      SubscriptRead _,
                      SubscriptWrite _ ->
                      Stream.empty();
                })
        .collect(Collectors.toSet());
  }

  private final Set<NamedVariable> namedVariables;

  @AnalysisConstructor
  public NamedVariablesOf(Abstraction scope) {
    namedVariables = namedVariablesOf(scope);
  }

  public @Unmodifiable Set<NamedVariable> namedVariables() {
    return namedVariables;
  }
}
