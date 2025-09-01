package org.prlprg.fir.ir.cfg.cursor;

import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.variable.NamedVariable;

public class NamedVariablesOf {
  /// All named variables that are loaded or stored.
  ///
  /// This includes variables in promises, but not locally declared ones if they're neither
  /// loaded nor stored.
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
                          Call _,
                          Cast _,
                          Closure _,
                          Dup _,
                          Force _,
                          MaybeForce _,
                          MkVector _,
                          Placeholder _,
                          Promise _,
                          ReflectiveLoad _,
                          ReflectiveStore _,
                          SubscriptRead _,
                          SubscriptWrite _ ->
                      Stream.empty();
                })
        .collect(Collectors.toSet());
  }

  private NamedVariablesOf() {}
}
