package org.prlprg.fir.check;

import org.prlprg.fir.analyze.cfg.StrictnessAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;

/// Verifies that every parameter marked `strict` is actually forced on all paths from entry
/// to every `return` or reflective operation (whichever comes first).
public class StrictnessChecker extends Checker {
  @Override
  public String name() {
    return "strict";
  }

  @Override
  protected void doRun(Abstraction version) {
    var cfg = version.cfg();
    if (cfg == null) {
      return;
    }

    var strictParams = new StrictnessAnalysis(cfg).strictParameters();
    var params = version.parameters();

    for (var param : params) {
      if (param.strict() && !strictParams.contains(param.variable())) {
        report(
            version,
            "Parameter '"
                + param.variable().name()
                + "' is marked strict but is not forced on all paths");
      }
    }
  }
}
