package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Computes a map of `NamedVariable` to `CfgPosition`s of `Load` and `LoadFun` instructions that
/// load said variable.
public final class Loads implements CfgAnalysis {
  private final CFG cfg;
  private final Multimap<NamedVariable, CfgPosition> loads = ArrayListMultimap.create();

  @AnalysisConstructor
  public Loads(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get all positions where the given variable is loaded.
  public @UnmodifiableView Collection<CfgPosition> get(NamedVariable variable) {
    return loads.get(variable);
  }

  private void run() {
    for (var bb : cfg.bbs()) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var statement = bb.statements().get(i);
        run(bb, i, statement);
      }
    }
  }

  private void run(BB bb, int index, Statement statement) {
    switch (statement.expression()) {
      case Load(var variable) -> loads.put(variable, new CfgPosition(bb, index, statement));
      case LoadFun(var variable, var env) when env == Env.LOCAL ->
          loads.put(variable, new CfgPosition(bb, index, statement));
      default -> {}
    }
  }
}
