package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;

/// If a version owns a vector parameter it never actually needs to own, copy it into a new version
/// that only *borrows* that parameter.
///
/// An owned parameter demands a fresh argument ([Type#matches]), so a caller holding a shared or
/// borrowed vector can't call the version at all and falls back to a worse one (often the
/// baseline). A borrowed copy is callable by all of them, and
/// [Function#guess(org.prlprg.fir.ir.type.Signature)] finds it with no change at the call site.
///
/// The catch is that a borrowed vector is only on loan for the duration of the call, so it can't be
/// demoted if the body lets it outlive the frame (see [#escapes]).
///
/// This is the inverse of [CreateOwnedParameterVersion], and the two never fight over the same
/// parameter: that one promotes exactly the parameters a `dup` reads, and this one skips those (see
/// [#isDupped]).
public record CreateBorrowedParameterVersion(int versionLimit) implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction version) {
    if (function == null || version.isStub() || version == function.baseline()) {
      return false;
    }
    if (function.versions().size() >= versionLimit) {
      // Too many versions, don't create a new one.
      return false;
    }
    if (version.signature().parameterTypes().stream()
        .noneMatch(type -> type.ownership() == Ownership.OWNED)) {
      // Nothing to demote, so don't pay for the traversal in `escapingCfgs`.
      return false;
    }

    var escapingCfgs = escapingCfgs(version);
    var newParameterTypes = new ArrayList<>(version.signature().parameterTypes());
    var changed = false;
    for (var i = 0; i < newParameterTypes.size(); i++) {
      var parameter = version.parameters().get(i);
      var parameterType = newParameterTypes.get(i);
      if ((parameterType.ownership() != Ownership.OWNED
              && parameterType.ownership() != Ownership.SHARED)
          || needsOwnership(parameter)
          || isDupped(parameter)
          || escapes(parameter, escapingCfgs)) {
        continue;
      }

      newParameterTypes.set(i, parameterType.withOwnership(Ownership.BORROWED));
      changed = true;
    }
    if (!changed) {
      return false;
    }

    if (hasVersion(function, version, newParameterTypes)) {
      // Already created (or hand-written), don't create a duplicate.
      return false;
    }

    copy(feedback.module(), function, version, newParameterTypes);
    return true;
  }

  /// Whether some use of `parameter` needs an owned vector, so borrowing it wouldn't type-check.
  ///
  /// Only two uses do: a `consume`, which moves the vector out, and a subscript write, which
  /// mutates it in place. Nothing else can re-establish ownership downstream, because the only
  /// values assignable to an owned register are fresh ones ([Type#canBeAssignedTo]), and no
  /// expression yields a fresh value from a borrowed one except `dup`, which copies.
  ///
  /// A `consume` in a [org.prlprg.fir.ir.instruction.Jump] counts too, even though
  /// `TypeAndEffectChecker` only reports the ones in [Statement]s.
  private static boolean needsOwnership(FunctionParameter parameter) {
    return parameter.uses().stream()
        .anyMatch(
            use ->
                use.argument() instanceof Consume
                    || (use.instruction() instanceof Statement statement
                        && statement.expression() instanceof SubscriptWrite
                        && use.index() == 0));
  }

  /// Whether a `dup` reads `parameter`, which is what [CreateOwnedParameterVersion] promotes a
  /// borrowed parameter for.
  ///
  /// Demoting one of those would trade versions with that optimization forever: it would promote
  /// the copy right back, and once further specialization improves either copy's postconditions,
  /// [#hasVersion] stops recognizing the twin and both keep creating new versions.
  private static boolean isDupped(FunctionParameter parameter) {
    return parameter.uses().stream()
        .anyMatch(
            use ->
                use.instruction() instanceof Statement statement
                    && statement.expression() instanceof Dup);
  }

  /// Whether some use of `parameter` lets it outlive the frame it's passed to, which a borrowed
  /// vector isn't allowed to do: the caller only lends it for the duration of the call, and is free
  /// to free or mutate it afterwards. An owned one is ours to keep.
  ///
  /// Two uses let it escape:
  ///
  /// - An argument of a call that expects a *shared* parameter, which is exactly the parameter a
  ///   callee is allowed to retain (store into an environment, capture in a closure or promise).
  ///   A dynamic call's callee isn't known, so every one of its arguments counts (see
  ///   [#expectsShared]).
  /// - A read inside a non-local promise, which may be forced after the frame that created it
  ///   returns. [org.prlprg.fir.check.CaptureChecker] rejects those, but it's excluded from the
  ///   part of the pipeline this optimization runs in, so they do reach us.
  ///
  /// `escapingCfgs` must be [#escapingCfgs] of the version `parameter` belongs to.
  private static boolean escapes(FunctionParameter parameter, Set<CFG> escapingCfgs) {
    return parameter.uses().stream().anyMatch(use -> escapes(use, escapingCfgs));
  }

  private static boolean escapes(Use use, Set<CFG> escapingCfgs) {
    var bb = use.instruction().parentBB();
    if (bb == null || escapingCfgs.contains(bb.owner())) {
      // A detached instruction isn't in any CFG, so we can't tell; assume the worst.
      return true;
    }

    return use.instruction() instanceof Statement statement
        && statement.expression() instanceof Call(var callee)
        && expectsShared(callee, use.index());
  }

  /// Whether the argument at `index` of a call to `callee` may be retained after the call returns.
  ///
  /// `index` is an index into the owning statement's arguments: 0 is the callee's own argument and
  /// the call arguments follow it, so it lines up with `callee`'s parameters shifted by one.
  private static boolean expectsShared(Callee callee, int index) {
    return switch (callee) {
      // Nothing bounds what an unknown callee does with its arguments.
      case DynamicCallee _ -> true;
      case StaticFnCallee(_, _, var signature) -> {
        var parameterTypes = signature.parameterTypes();
        // Index 0 is the closure-with-env, which is shared, and an index past the end is an arity
        // mismatch that `TypeAndEffectChecker` reports; assume the worst for both.
        yield index == 0
            || index > parameterTypes.size()
            || parameterTypes.get(index - 1).ownership() == Ownership.SHARED;
      }
    };
  }

  /// The CFGs of `version` that sit inside a non-local promise, at any depth.
  ///
  /// Which CFG a use is in is all that decides this, so it's collected once per version instead of
  /// walking out from each use (a [CFG] only backlinks its [Abstraction], not its enclosing
  /// promise).
  private static Set<CFG> escapingCfgs(Abstraction version) {
    var escapingCfgs = new HashSet<CFG>();
    var cfg = version.cfg();
    if (cfg != null) {
      collectEscapingCfgs(cfg, false, escapingCfgs);
    }
    return escapingCfgs;
  }

  /// Add `cfg` to `escapingCfgs` if `isEscaping`, then recurse into its promises' CFGs, which
  /// escape if `cfg` does or if the promise itself is non-local.
  private static void collectEscapingCfgs(CFG cfg, boolean isEscaping, Set<CFG> escapingCfgs) {
    if (isEscaping) {
      escapingCfgs.add(cfg);
    }

    for (var bb : cfg.bbs()) {
      for (var statement : bb.statements()) {
        if (statement.expression() instanceof Promise(_, _, var code, var local)) {
          collectEscapingCfgs(code, isEscaping || !local, escapingCfgs);
        }
      }
    }
  }

  /// Whether `function` already has a version like `version` but with `parameterTypes`.
  private static boolean hasVersion(
      Function function, Abstraction version, List<Type> parameterTypes) {
    return function.versions().stream()
        .anyMatch(
            other ->
                other.signature().parameterTypes().equals(parameterTypes)
                    && other
                        .signature()
                        .parameterStrictnesses()
                        .equals(version.signature().parameterStrictnesses())
                    && other.returnType().equals(version.returnType())
                    && other.effects() == version.effects());
  }
}
