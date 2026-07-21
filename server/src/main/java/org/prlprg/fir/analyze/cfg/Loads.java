package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Computes a map of [NamedVariable] to the local [Load] statements that load said variable
/// (recursing into promise bodies).
public final class Loads implements Analysis {
  private final Multimap<NamedVariable, Statement> loads = ArrayListMultimap.create();

  @AnalysisConstructor
  public Loads(Abstraction scope) {
    if (scope.cfg() != null) {
      run(scope.cfg());
    }
  }

  /// Get all local [Load] statements that load the given variable.
  public @UnmodifiableView Collection<Statement> get(NamedVariable variable) {
    return loads.get(variable);
  }

  private void run(CFG cfg) {
    for (var bb : cfg.bbs()) {
      for (var statement : bb.statements()) {
        switch (statement.expression()) {
          case Load(var loadType, var variable)
              when loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN ->
              loads.put(variable, statement);
          case Promise(_, _, var code) -> run(code);
          default -> {}
        }
      }
    }
  }
}
