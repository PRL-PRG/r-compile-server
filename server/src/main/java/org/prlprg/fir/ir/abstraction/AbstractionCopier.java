package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Objects;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.cfg.cursor.CFGCopier;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;
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
                    new FunctionParameter(
                        parameter.name(), type, parameter.strict() && !type.isValue()))
            .collect(ImmutableList.toImmutableList());
    return copy2(feedback, function, version, newParameters);
  }

  /// Copy `version` except change the parameters.
  public static Abstraction copy2(
      ModuleFeedback feedback,
      Function function,
      Abstraction version,
      List<FunctionParameter> newParameters) {
    var copy = function.addVersion(newParameters, version.isStub());
    copy.setReturnType(version.returnType());
    copy.setEffects(version.effects());

    // Carry over declared named-variable types.
    version.namedVariableTypes().forEach(copy::setNamedVariableType);

    if (version.cfg() != null) {
      // Seed the register remapping with the old parameters mapped to the new ones, so the copied
      // body references the new parameter registers.
      var registerMap = new HashMap<Register, Register>();
      var oldParameters = version.parameters();
      for (var i = 0; i < oldParameters.size(); i++) {
        registerMap.put(oldParameters.get(i), copy.parameters().get(i));
      }
      CFGCopier.copyTo(Objects.requireNonNull(copy.cfg()), version.cfg(), registerMap);
    }
    feedback.copyTo(copy, version);
    return copy;
  }

  private AbstractionCopier() {}
}
