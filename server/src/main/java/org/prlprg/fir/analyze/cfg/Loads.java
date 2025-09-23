package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.ArrayList;
import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Computes a map of [NamedVariable] to [ScopePosition]s of `Load` and `LoadFun` instructions
/// that load said variable.
public final class Loads implements Analysis {
  private final Abstraction scope;
  private final Multimap<NamedVariable, ScopePosition> loads = ArrayListMultimap.create();

  @AnalysisConstructor
  public Loads(Abstraction scope) {
    this.scope = scope;
    run();
  }

  /// Get all positions where the given variable is loaded.
  public @UnmodifiableView Collection<ScopePosition> get(NamedVariable variable) {
    return loads.get(variable);
  }

  private void run() {
    if (scope.cfg() != null) {
      run(new ArrayList<>(), scope.cfg());
    }
  }

  private void run(ArrayList<CfgPosition> parents, CFG cfg) {
    for (var bb : cfg.bbs()) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var statement = bb.statements().get(i);
        run(parents, bb, i, statement);
      }
    }
  }

  private void run(ArrayList<CfgPosition> parents, BB bb, int index, Statement statement) {
    var cfgPosition = new CfgPosition(bb, index, statement);
    var scopePosition = new ScopePosition(parents, cfgPosition);

    switch (statement.expression()) {
      case Load(var variable) -> loads.put(variable, scopePosition);
      case LoadFun(var variable, var env) when env == Env.LOCAL ->
          loads.put(variable, scopePosition);
      case Promise(var _, var _, var code) -> {
        parents.add(cfgPosition);
        run(parents, code);
        parents.removeLast();
      }
      default -> {}
    }
  }
}
