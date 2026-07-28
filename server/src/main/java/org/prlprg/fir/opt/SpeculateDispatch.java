package org.prlprg.fir.opt;

import static org.prlprg.fir.check.TypeAndEffectChecker.assumeCanSucceed;
import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.util.Lists;
import org.prlprg.util.Streams;

/// Compile a new version with feedback from parameters on an existing version.
///
/// TODO: Somewhere we should store removed specializations which were deoptimized.
/// Also remove ones with more specific assumptions which turn out to not be optimizations over
/// other verisons, and try to merge ones that are equal by compiling with the intersected
/// assumptions. In both cases, we need to keep track of those removed so they aren't recompiled.
public record SpeculateDispatch(int threshold, int parameterLimit, int versionLimit)
    implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction version) {
    // Don't specialize stubs, can't run if there's no function
    if (function == null || version.cfg() == null) {
      return false;
    }

    // If the function has too many versions, don't add any more
    var newVersionLimit = versionLimit - function.versions().size();
    if (newVersionLimit <= 0) {
      return false;
    }

    // See if parameter feedback suggests more specific types
    var candidates =
        version.parameters().stream()
            .map(
                param ->
                    feedback.type(param).streamHits(threshold, param.type()).limit(parameterLimit))
            .gather(Streams.cartesianShuffled())
            // If there are *many* versions even checking them all is too slow.
            // If there are many parameters we may get many versions.
            .limit(newVersionLimit * 9L)
            // Check the version is more specific than an existing one.
            .filter(
                parameterTypes -> {
                  var existing =
                      function.guess(
                          new Signature(parameterTypes, Type.ANY_VALUE_SEXP, Effects.REFLECT));
                  return existing == null
                      || !Lists.mapLazy(existing.parameters(), FunctionParameter::type)
                          .equals(parameterTypes);
                })
            // Check the specialized types don't guarantee any speculations to fail.
            .filter(
                parameterTypes ->
                    version
                        .streamCfgs()
                        .flatMap(cfg -> cfg.bbs().stream())
                        .flatMap(bb -> bb.statements().stream())
                        .noneMatch(
                            stmt -> {
                              // The assume's target is its argument (assumptions without one, e.g.
                              // load-based, have no arguments).
                              if (!(stmt.expression() instanceof Assume(var assumption))
                                  || stmt.argCount() == 0
                                  || stmt.arg(0).variable() == null) {
                                return false;
                              }
                              var targetVariable = stmt.arg(0).variable();

                              Type argType = null;
                              for (int i = 0; i < version.parameters().size(); i++) {
                                if (version.parameters().get(i).equals(targetVariable)) {
                                  argType = parameterTypes.get(i);
                                  break;
                                }
                              }
                              if (argType == null) {
                                return false;
                              }

                              return !assumeCanSucceed(assumption, argType);
                            }))
            .limit(newVersionLimit);

    // Create each candidate
    boolean[] changed = {false};
    candidates.forEach(
        newParameterTypes -> {
          changed[0] = true;
          copy(feedback.module(), function, version, newParameterTypes);
        });
    return changed[0];
  }
}
