package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Objects;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.cursor.CFGCopier;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.util.Streams;

public final class AbstractionCopier {
  /// Copy `version` except change the parameter types.
  public static Abstraction copy(
      ModuleFeedback feedback,
      Function function,
      Abstraction version,
      List<Type> newParameterTypes) {
    var newParameters =
        Streams.zip(
                version.parameters().stream(),
                newParameterTypes.stream(),
                (parameter, type) ->
                    new Parameter(
                        parameter.variable(), type, parameter.strict() && !type.isValue()))
            .collect(ImmutableList.toImmutableList());
    return copy2(feedback, function, version, newParameters);
  }

  /// Copy `version` except change the parameters.
  ///
  /// Instructions will still reference the old parameters' names
  public static Abstraction copy2(
      ModuleFeedback feedback,
      Function function,
      Abstraction version,
      List<Parameter> newParameters) {
    var copy = function.addVersion(newParameters, version.isStub());
    copy.setReturnType(version.returnType());
    copy.setEffects(version.effects());
    copy.addLocals(version.locals());
    if (version.cfg() != null) {
      CFGCopier.copyTo(Objects.requireNonNull(copy.cfg()), version.cfg());
    }
    feedback.copyTo(copy, version);
    return copy;
  }

  private AbstractionCopier() {}
}
