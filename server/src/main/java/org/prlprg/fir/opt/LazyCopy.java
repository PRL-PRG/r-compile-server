package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.LazyBody;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCopier;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Streams;

/// How optimizations create versions: as copies of another version (the *source*) whose body is
/// only copied when it's first accessed (see `server/doc/lazy-versions.md`).
///
/// Until then the copy runs its fallback, which calls the source.
///
/// A copy is an unoptimized starting point, so something has to optimize it once it's evaluated.
/// If that's during the run that created it, the run does, like it optimizes any other version.
/// Otherwise nothing would, so evaluating the copy runs the top-level optimization of the run that
/// created it again. That's what [Optimization#runId()] tells apart.
public final class LazyCopy {
  /// How a copy's parameters and return value differ from its source's, other than by having
  /// narrower types.
  ///
  /// The copied body expects the source's parameters and returns what the source returns, as does
  /// the call in the copy's fallback. Both are adapted the same way.
  public interface Adapter {
    Adapter NONE = new Adapter() {};

    /// A standalone statement that computes what the source's parameter at `index` would be from
    /// `copy`'s, and assigns it. `null` if `copy`'s parameter can be used as-is.
    ///
    /// Its assignee's name must come from [Abstraction#freshName(String)].
    default @Nullable Statement adaptParameter(Abstraction copy, int index) {
      return null;
    }

    /// The copy's return type, given the source's.
    default Type returnType(Type sourceReturnType) {
      return sourceReturnType;
    }

    /// A standalone statement that computes what `copy` returns from what the source would return,
    /// and assigns it. `null` if the source's return value can be used as-is.
    ///
    /// Its assignee's name must come from [Abstraction#freshName(String)].
    default @Nullable Statement adaptReturn(Abstraction copy, Argument sourceReturn) {
      return null;
    }
  }

  /// Add to `function` a lazy copy of `source` except with `newParameterTypes`, and return it.
  public static Abstraction create(
      Optimization topLevel,
      ModuleFeedback feedback,
      Function function,
      Abstraction source,
      List<Type> newParameterTypes) {
    var newParameters =
        Streams.zip(
                source.parameters().stream(),
                newParameterTypes.stream(),
                (parameter, type) ->
                    new FunctionParameter(
                        parameter.name(), type, parameter.strict() && !type.isValue()))
            .collect(ImmutableList.toImmutableList());
    return create(topLevel, feedback, function, source, newParameters, Adapter.NONE);
  }

  /// Add to `function` a lazy copy of `source` except with `newParameters` (and what `adapter`
  /// changes), and return it.
  ///
  /// The copy of a stub is a stub.
  ///
  /// Every parameter in `newParameters` must be unowned: a [FunctionParameter] is owned by exactly
  /// one [Abstraction] and accumulates that abstraction's uses, so handing the copy one that
  /// `source` already owns would re-own it and merge both bodies' uses. Pass
  /// [FunctionParameter#copyAll(List)] of `source`'s parameters to keep some of them unchanged.
  ///
  /// @throws IllegalArgumentException If any parameter in `newParameters` is already owned.
  public static Abstraction create(
      Optimization topLevel,
      ModuleFeedback feedback,
      Function function,
      Abstraction source,
      List<FunctionParameter> newParameters,
      Adapter adapter) {
    for (var parameter : newParameters) {
      if (parameter.owner() != null) {
        throw new IllegalArgumentException(
            "Parameter is already owned by another abstraction, pass a copy instead: " + parameter);
      }
    }

    // The signature isn't lazy.
    var sourceSignature = source.signature();
    var returnType = adapter.returnType(source.returnType());
    var effects = source.effects();

    if (source.isStub()) {
      var copy = function.addVersion(newParameters, true);
      copy.setReturnType(returnType);
      copy.setEffects(effects);
      return copy;
    }

    // Only if the copy is created during a run: outside of one, whatever run ends up evaluating
    // it may be optimizing something else.
    var creationRunId = topLevel.isRunning() ? topLevel.runId() : NO_RUN;
    var copy =
        function.addVersion(
            newParameters,
            new LazyBody.Initializer() {
              @Override
              public void evaluate(CFG body) {
                copyBody(feedback, body, source, adapter);
              }

              @Override
              public void afterEvaluated(Abstraction copy) {
                if (creationRunId != NO_RUN && topLevel.runId() == creationRunId) {
                  // The run that created `copy` optimizes it, now that it's evaluated.
                  return;
                }

                // The run optimizes more than `copy`, so it waits for whoever is in the middle of
                // running the module's code (the interpreter).
                var module = function.owner();
                module.changeWhenUnpinned(
                    new OptimizeKey(topLevel, feedback),
                    () -> {
                      // A later run in progress optimizes `copy` too. It also must not be
                      // re-entered: it may be in the middle of changing the code that made it
                      // evaluate `copy`.
                      if (!topLevel.isRunning()) {
                        topLevel.run(feedback, module);
                      }
                    });
              }

              @Override
              public List<Abstraction> sources() {
                return List.of(source);
              }
            });
    copy.setReturnType(returnType);
    copy.setEffects(effects);

    addFallback(copy, sourceSignature, adapter);

    return copy;
  }

  /// A `creationRunId` for a copy created outside of a run.
  private static final int NO_RUN = 0;

  /// Identifies the runs that optimize evaluated copies (see [Module#changeWhenUnpinned(Object,
  /// Runnable)]): one run optimizes every copy evaluated until then.
  ///
  /// Both by identity: a feedback's own equality is by content, which changes as more is recorded.
  private record OptimizeKey(Optimization topLevel, ModuleFeedback feedback) {
    @Override
    public boolean equals(Object o) {
      return o instanceof OptimizeKey(var topLevel1, var feedback1)
          && topLevel == topLevel1
          && feedback == feedback1;
    }

    @Override
    public int hashCode() {
      return System.identityHashCode(topLevel) * 31 + System.identityHashCode(feedback);
    }
  }

  /// Make `body` (the body of a copy) a copy of `source`'s, adapted by `adapter`.
  private static void copyBody(
      ModuleFeedback feedback, CFG body, Abstraction source, Adapter adapter) {
    var copy = body.scope();
    var sourceBody = source.body();

    // Carry over declared named-variable types.
    source.namedVariableTypes().forEach(copy::setNamedVariableType);

    // Seed the register remapping with the old parameters mapped to the new ones, so the copied
    // body references the new parameter registers.
    var registerMap = new HashMap<Register, Register>();
    var oldParameters = source.parameters();
    for (var i = 0; i < oldParameters.size(); i++) {
      registerMap.put(oldParameters.get(i), copy.parameters().get(i));
    }
    CFGCopier.copyTo(body, sourceBody, registerMap);

    // Before adapting, because it requires `copy` to be structurally equivalent to `source`.
    feedback.copyTo(copy, source);

    // Adapt each parameter at the entry, so the copied body still sees what `source`'s would be.
    var entry = body.entry();
    for (var i = 0; i < copy.parameters().size(); i++) {
      var parameter = copy.parameters().get(i);
      // The adapting statement reads the parameter itself, so only redirect the uses from before.
      var uses = List.copyOf(parameter.uses());

      var adapt = adapter.adaptParameter(copy, i);
      if (adapt == null) {
        continue;
      }
      var adapted = Objects.requireNonNull(adapt.assignee(), "adapter must assign");

      entry.prependStatement(adapt);
      for (var use : uses) {
        use.replaceWith(new Read(adapted));
      }
    }

    // Adapt each return.
    for (var exit : List.copyOf(body.exits())) {
      if (!(exit.jump().expression() instanceof Return)) {
        continue;
      }

      var adapt = adapter.adaptReturn(copy, exit.jump().arg(0));
      if (adapt == null) {
        break;
      }
      var adapted = Objects.requireNonNull(adapt.assignee(), "adapter must assign");

      exit.appendStatement(adapt);
      exit.setJump(new Jump(exit.jump().comments(), new Return(), List.of(new Read(adapted))));
    }
  }

  /// Give `copy` a fallback: adapt the parameters, call a version with `targetSignature`, adapt
  /// what it returns, and return that.
  private static void addFallback(Abstraction copy, Signature targetSignature, Adapter adapter) {
    var entry = Objects.requireNonNull(copy.lazyBody()).initFallback().entry();

    var arguments = new ArrayList<Argument>();
    // There's no closure to get the environment from (see [FallbackCallee]).
    arguments.add(Constant.ELIDED_CLOSURE);
    for (var i = 0; i < copy.parameters().size(); i++) {
      Register value = copy.parameters().get(i);

      var adapt = adapter.adaptParameter(copy, i);
      if (adapt != null) {
        entry.appendStatement(adapt);
        value = Objects.requireNonNull(adapt.assignee(), "adapter must assign");
      }

      arguments.add(pass(entry, value, targetSignature.parameterTypes().get(i)));
    }

    var call = new Statement(new Call(new FallbackCallee(targetSignature)), arguments);
    var result =
        call.setAssignee(
            copy.freshName(Register.DEFAULT_NAME), registerType(targetSignature.returnType()));
    entry.appendStatement(call);
    var returned = give(result);

    var adapt = adapter.adaptReturn(copy, returned);
    if (adapt != null) {
      entry.appendStatement(adapt);
      returned = give(Objects.requireNonNull(adapt.assignee(), "adapter must assign"));
    }

    entry.setJump(new Jump(new Return(), List.of(returned)));
  }

  /// An argument that passes `value` to a parameter of type `expected`.
  ///
  /// The copy's parameter types are narrower than the source's, which guarantees that whatever is
  /// passed to the copy could have been passed to the source. But the copy is handed a *register*
  /// of that type, and reading it isn't the same: e.g. an owned vector must be given away
  /// (consumed) to be passed as an owned one, and a borrowed one must be duplicated.
  private static Argument pass(BB bb, Register value, Type expected) {
    var type = value.type();
    if (type.matches(expected)) {
      return new Read(value);
    }
    if (canConsume(type)) {
      return new Consume(value);
    }

    var scope = bb.owner().scope();
    var dup = new Statement(new Dup(), List.of(new Read(value)));
    var duplicate =
        dup.setAssignee(scope.freshName(value.name()), type.withOwnership(Ownership.OWNED));
    bb.appendStatement(dup);
    return new Consume(duplicate);
  }

  /// An argument that returns `value`, or passes it on as fresh if it is.
  private static Argument give(Register value) {
    return canConsume(value.type()) ? new Consume(value) : new Read(value);
  }

  private static boolean canConsume(Type type) {
    return type.ownership() == Ownership.OWNED
        && type.isValue()
        && type.kind() instanceof PrimitiveVector;
  }

  /// The type of a register that's assigned a value of `type`: registers can't be fresh, but an
  /// owned one holds a fresh value.
  private static Type registerType(Type type) {
    return type.ownership() == Ownership.FRESH ? type.withOwnership(Ownership.OWNED) : type;
  }

  private LazyCopy() {}
}
