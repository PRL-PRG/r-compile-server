package org.prlprg.fir.opt;

import static org.prlprg.fir.check.TypeAndEffectChecker.assumeCanSucceed;
import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyTo;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.util.Lists;
import org.prlprg.util.Streams;

/// Compile a new version with feedback from parameters on an existing version.
///
/// TODO: Somewhere we should store removed specializations which were deoptimized.
/// Also remove ones with more specific assumptions which turn out to not be optimizations over
/// other verisons, and try to merge ones that are equal by compiling with the intersected
/// assumptions. In both cases, we need to keep track of those removed so they aren't recompiled.
public record SpeculateDispatch(int threshold, int parameterLimit, int versionLimit)
    implements Optimization {
  @Override
  public boolean run(ModuleFeedback feedback, Function function) {
    var changed = false;
    // Copy `version` because we may modify it.
    for (var version : List.copyOf(function.versions())) {
      changed |= run(feedback, function, version);
    }
    return changed;
  }

  private boolean run(ModuleFeedback moduleFeedback, Function function, Abstraction version) {
    // Don't specialize stubs
    if (version.cfg() == null) {
      return false;
    }

    // If the function has too many versions, don't add any more
    var newVersionLimit = versionLimit - function.versions().size();
    if (newVersionLimit <= 0) {
      return false;
    }

    // See if parameter feedback suggests more specific types
    var versionFeedback = moduleFeedback.get(version);
    var candidates =
        version.parameters().stream()
            .map(
                param ->
                    versionFeedback
                        .type(param.variable())
                        .streamHits(threshold, param.type())
                        .limit(parameterLimit))
            .gather(Streams.cartesianShuffled())
            // If there are *many* versions even checking them all is too slow.
            // If there are many parameters we may get many versions.
            .limit(newVersionLimit * 9L)
            // Check the version is more specific than an existing one.
            .filter(
                parameterTypes -> {
                  var existing =
                      function.guess(
                          new Signature(parameterTypes, Type.ANY_VALUE, Effects.REFLECT));
                  return existing == null
                      || !Lists.mapLazy(existing.parameters(), Parameter::type)
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
                              if (!(stmt.expression() instanceof Assume(var assumption))
                                  || assumption.target() == null
                                  || assumption.target().variable() == null) {
                                return false;
                              }

                              Type argType = null;
                              for (int i = 0; i < version.parameters().size(); i++) {
                                if (version
                                    .parameters()
                                    .get(i)
                                    .variable()
                                    .equals(assumption.target().variable())) {
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
        parameterTypes -> {
          changed[0] = true;
          copyVersionWithNewParameterTypes(moduleFeedback, function, version, parameterTypes);
        });
    return changed[0];
  }

  public static void copyVersionWithNewParameterTypes(
      ModuleFeedback feedback,
      Function function,
      Abstraction version,
      Collection<Type> newParameterTypes) {
    var copyParameters =
        Streams.zip(
                version.parameters().stream(),
                newParameterTypes.stream(),
                (parameter, type) ->
                    new Parameter(
                        parameter.variable(), type, parameter.strict() && !type.isValue()))
            .collect(ImmutableList.toImmutableList());

    // Copy `version` except change the parameters.
    var copy = function.addVersion(copyParameters, version.isStub());
    copy.setReturnType(version.returnType());
    copy.setEffects(version.effects());
    copy.addLocals(version.locals());
    if (version.cfg() != null) {
      copyTo(Objects.requireNonNull(copy.cfg()), version.cfg());
    }
    feedback.copyTo(copy, version);
  }
}
