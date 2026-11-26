package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SymSXP;

/// Replaces a static call of the baseline of a GNU-R base closure `bitwX(a, b)`, whose body is
/// only `.Internal(bitwiseX(a, b))`, with forces of its promise arguments (in parameter order, as
/// the body evaluates them), `setVisible`, and a call of the `.Internal` `bitwiseX`.
///
/// Each promise is then forced once in the frame that creates it, so [org.prlprg.fir.opt.Inline]
/// can inline it. The guard that the binding is the original closure isn't this pass's job.
///
/// The whole rewrite runs when the deferred insertions commit, on the statement then at the call's
/// position, after the conditions are checked again: during the pass, the call never refers to a
/// force that isn't in a block yet, and a call visited twice is rewritten once.
public record InlineInternalWrapper() implements SpecializeOptimization {
  private static final Set<String> WRAPPERS =
      Set.of("bitwAnd", "bitwNot", "bitwOr", "bitwShiftL", "bitwShiftR", "bitwXor");

  private static final Function SET_VISIBLE =
      Objects.requireNonNull(INTRINSICS.localFunction(Variable.named("setVisible")));

  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
  }

  @Override
  public Result run(
      BB bb,
      int index,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (internalOf(statement, scope) != null) {
      defer.stage(() -> rewrite(bb.statements().get(index), scope));
    }
    return Result.UNCHANGED;
  }

  private static void rewrite(Statement call, Abstraction scope) {
    var internal = internalOf(call, scope);
    if (internal == null) {
      return;
    }

    var forced = false;
    for (var i = 1; i < call.argCount(); i++) {
      var type = scope.typeOf(call.arg(i));
      if (!type.isPromise()) {
        continue;
      }
      var force = new Statement(new Force(false), List.of(call.arg(i)));
      var name = internal.parameterNames().get(i - 1).name();
      var value = force.setAssignee(scope.freshName(name), type.withPromisity(Promisity.VALUE));
      force.insertBefore(call);
      call.setArg(i, new Read(value));
      forced = true;
    }
    if (forced) {
      new Statement(
              new Call(new StaticFnCallee(SET_VISIBLE, false, SET_VISIBLE.baseline().signature())),
              List.of(Constant.ELIDED_CLOSURE))
          .insertBefore(call);
    }
    call.setArg(0, Constant.ELIDED_CLOSURE);
    call.setExpression(
        new Call(new StaticFnCallee(internal, false, internal.baseline().signature())));
  }

  /// The `.Internal` to call instead of `statement`, or `null` if it can't be rewritten.
  private static @Nullable Function internalOf(Statement statement, Abstraction scope) {
    if (!(statement.expression() instanceof Call(StaticFnCallee callee)) || callee.isDispatch()) {
      return null;
    }
    var function = callee.function();
    var name = function.name().name();
    // The test `Fir2CCompiler#emitCall` uses to call the GNU-R function, here the closure.
    if (function.owner() != BUILTINS
        || !WRAPPERS.contains(name)
        || function.guessWorst(callee.signature()) != function.baseline()) {
      return null;
    }
    var internal = BUILTINS.localFunction(Variable.named(internalName(name)));
    // The call's arguments follow the callee's own argument (index 0).
    var arity = function.parameterNames().size();
    if (internal == null
        || internal.parameterNames().size() != arity
        || statement.argCount() != arity + 1) {
      return null;
    }
    var parameterTypes = internal.baseline().signature().parameterTypes();
    for (var i = 1; i < statement.argCount(); i++) {
      if (!isPassable(statement.arg(i), scope, parameterTypes.get(i - 1))) {
        return null;
      }
    }
    return internal;
  }

  /// The `.Internal` that the body of the base closure `wrapper` calls: `bitwX` calls `bitwiseX`.
  private static String internalName(String wrapper) {
    return "bitwise" + wrapper.substring("bitw".length());
  }

  /// Whether `argument`, forced if it's a promise, can be passed to the `.Internal`'s
  /// `parameterType`: a value or a non-reflective promise register, never `<missing>`, a symbol, a
  /// call, or `...`.
  private static boolean isPassable(Argument argument, Abstraction scope, Type parameterType) {
    if (argument instanceof Constant(Value.Sexp(var sexp))
        && (sexp instanceof SymSXP || sexp instanceof LangSXP)) {
      return false;
    }
    var type = scope.typeOf(argument);
    Type valueType;
    if (type.isPromise()) {
      if (!(argument instanceof Read) || type.promisity().effects().reflect()) {
        return false;
      }
      valueType = type.withPromisity(Promisity.VALUE);
    } else if (type.isValue()) {
      valueType = type;
    } else {
      return false;
    }
    if (valueType.kind() instanceof Kind.Missing || valueType.kind() instanceof Kind.Dots) {
      return false;
    }
    // An owned value passed to a shared parameter is shared (as `TypeAndEffectChecker` allows).
    if (valueType.ownership() == Ownership.OWNED) {
      valueType = valueType.withOwnership(Ownership.SHARED);
    }
    return valueType.matches(parameterType);
  }
}
