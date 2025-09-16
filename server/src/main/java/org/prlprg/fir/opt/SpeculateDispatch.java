package org.prlprg.fir.opt;

import static org.prlprg.fir.check.TypeAndEffectChecker.assumeCanSucceed;
import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.prlprg.fir.feedback.Feedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.util.Lists;
import org.prlprg.util.OptionalFunction;
import org.prlprg.util.Streams;

/// Compile a new version with feedback from parameters on an existing version.
///
/// TODO: Somewhere we should store removed specializations which were deoptimized.
/// Also remove ones with more specific assumptions which turn out to not be optimizations over
/// other verisons, and try to merge ones that are equal by compiling with the intersected
/// assumptions. In both cases, we need to keep track of those removed so they aren't recompiled.
public record SpeculateDispatch(
    OptionalFunction<Abstraction, Feedback> getFeedback,
    int threshold,
    int parameterLimit,
    int versionLimit)
    implements Optimization {
  @Override
  public void run(Function function) {
    // Copy `version` because we may modify it.
    for (var version : List.copyOf(function.versions())) {
      run(function, version);
    }
  }

  private void run(Function function, Abstraction version) {
    // Don't specialize stubs
    if (version.cfg() == null) {
      return;
    }

    // If the function has too many versions, don't add any more.
    var newVersionLimit = versionLimit - function.versions().size();
    if (newVersionLimit <= 0) {
      return;
    }

    // Get version feedback, and abort if we don't have any.
    var feedback = getFeedback.apply(version);
    if (feedback == null) {
      return;
    }

    // See if parameter feedback suggests more specific types.
    var candidates =
        version.parameters().stream()
            .map(
                param ->
                    feedback
                        .type(param.variable())
                        .streamHits(threshold, param.type())
                        .limit(parameterLimit))
            .gather(Streams.cartesianShuffled())
            // If there are *many* versions even checking them all is too slow.
            // If there are many parameters we may get many versions.
            .limit(newVersionLimit * 9L)
            .filter(
                parameterTypes -> {
                  var existing =
                      function.guess(new Signature(parameterTypes, Type.ANY_VALUE, Effects.ANY));
                  return existing == null
                      || !Lists.mapLazy(existing.parameters(), Parameter::type)
                          .equals(parameterTypes);
                })
            // Check the specialized types don't guarantee any speculations to fail.
            .filter(
                parameterTypes ->
                    version
                        .streamScopes()
                        .flatMap(Abstraction::streamCfgs)
                        .flatMap(cfg -> cfg.bbs().stream())
                        .flatMap(bb -> bb.statements().stream())
                        .noneMatch(
                            stmt -> {
                              if (!(stmt.expression() instanceof Assume assume)
                                  || assume.target().variable() == null) {
                                return false;
                              }

                              Type argType = null;
                              for (int i = 0; i < version.parameters().size(); i++) {
                                if (version
                                    .parameters()
                                    .get(i)
                                    .variable()
                                    .equals(assume.target().variable())) {
                                  argType = parameterTypes.get(i);
                                  break;
                                }
                              }
                              if (argType == null) {
                                return false;
                              }

                              return !assumeCanSucceed(assume, argType);
                            }))
            .limit(newVersionLimit);

    // Create each candidate.
    candidates.forEach(
        parameterTypes -> {
          var copyParameters =
              Streams.zip(
                      version.parameters().stream(),
                      parameterTypes.stream(),
                      (parameter, type) -> new Parameter(parameter.variable(), type))
                  .collect(ImmutableList.toImmutableList());

          // Copy `version` except change the parameters.
          var copy = function.addVersion(copyParameters);
          assert copy.cfg() != null;
          copy.setReturnType(version.returnType());
          copy.setEffects(version.effects());
          copy.addLocals(version.locals());
          copyFrom(copy.cfg(), version.cfg());
        });
  }
}
