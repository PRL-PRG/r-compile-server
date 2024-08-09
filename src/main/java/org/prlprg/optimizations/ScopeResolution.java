package org.prlprg.optimizations;

import org.prlprg.ir.analysis.scope.Scopes;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.ClosureVersion.Properties.Property;
import org.prlprg.ir.closure.Promise;

/**
 * Uses scope analysis to get rid of as many `LdVar`'s as possible (from PIR).
 *
 * <p>Similar to LLVM's {@code mem2reg} pass, we try to lift as many loads from the R environment to
 * {@linkplain ISexp SSA variables}.
 */
class ScopeResolution implements OptimizationPass {
  private void actuallyDoApply(ClosureVersion version, OptimizationContext ctx) {
    var cfg = version.body();
    var dom = cfg.domTree();
    var contexts = cfg.contexts();

    var anyChanges = false;
    var scopes = new Scopes(version);

    if (!scopes.mayUseReflection()) {
      version.setProperties(version.properties().withFlags(Property.NO_REFLECTION));
    }

    for (var bb : cfg) {
      var before = scopes.

      for (var stmt : bb) {
        if (stmt instanceof ISexp) {
          var iSexp = (ISexp) stmt;
          var scope = scopes.at(iSexp);
          if (scope == null) {
            continue;
          }

          var context = contexts.at(iSexp);
          if (context == null) {
            continue;
          }

          var env = scope.env();
          if (env == null) {
            continue;
          }

          var envContext = contexts.at(env);
          if (envContext == null) {
            continue;
          }

          if (dom.dominates(envContext, context)) {
            iSexp.replaceWith(env);
            anyChanges = true;
          }
        }
      }
    }
  }

  // region boilerplate
  @Override
  public void doApply(ClosureVersion version, boolean isOutermost, OptimizationContext ctx) {
    // Scope analysis is inter-procedural and thus only done for the outermost closure.
    if (!isOutermost) {
      return;
    }

    actuallyDoApply(version, ctx);
  }

  @Override
  public void doApply(Promise promise, OptimizationContext ctx) {
    // Scope analysis is inter-procedural and thus only done for the outermost closure.
  }

  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    throw new UnsupportedOperationException("`ScopeResolution` does not apply to `CFG`s, it's overridden for `ClosureVersion`s and `Promise`s.")
  }
  // endregion boilerplate
}
