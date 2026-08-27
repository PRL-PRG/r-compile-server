package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;

/// Retypes a phi that merges values with trivial promises into a value phi, unwrapping the
/// promises in the predecessors.
///
/// A phi that receives a value on one edge and a promise on another is typed `*`, so every
/// consumer has to `force?` it, and -- because `*` says nothing about the forced value either --
/// behind a speculative checkpoint. That checkpoint's `deopt` block then keeps
/// [StrictifyPromise] from inlining the promise built around the phi, so an argument stays lazy
/// for a callee that immediately forces it.
///
/// The promise edges this can remove are the *trivial* ones, `prom{ return v }`, which
/// [StrictifyPromise] emits itself: when it rewrites a callee to take a parameter by value, the
/// copied body still forces that parameter, so the copy rewraps it. Every such wrapper collapses
/// again at its direct uses ([org.prlprg.fir.opt.specialize.DefiniteForce] and friends), but one
/// that reaches a phi has no direct use to collapse at -- the merge is what keeps it alive. This
/// is that missing case, and the counterpart to [UnboxPhi] for promisity instead of boxing.
///
/// Forcing a trivial promise runs nothing and yields the register it returns, so replacing the
/// edge with that register computes the same value; its declared effects are an upper bound that
/// an empty body can't reach.
///
/// Only applies when some incoming argument is *already* a value. That's what makes retyping the
/// phi invisible to its consumers: they demonstrably handle a value there, because on that edge
/// they already get one. It matters for the consumers that don't force -- a deopt block's
/// `st x = phi` binds whatever the phi holds, so a phi that was only ever a promise would start
/// binding values to the environment the interpreter resumes with.
public record StrictifyPhi() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    return scope.cfg() != null && new Run(scope).run();
  }

  private static final class Run {
    private final Abstraction scope;

    /// Built on the first phi that gets far enough to need it, since most are rejected before
    /// then. Only phi arguments and phi types change below, never blocks or statements, so it
    /// stays valid for the whole run.
    private @Nullable DominatorTree domTree;

    Run(Abstraction scope) {
      this.scope = scope;
    }

    boolean run() {
      var changed = false;
      for (var bb : scope.streamCfgs().flatMap(cfg -> cfg.bbs().stream()).toList()) {
        for (var phiIndex = 0; phiIndex < bb.phiParameters().size(); phiIndex++) {
          changed |= runPhi(bb, phiIndex);
        }
      }
      return changed;
    }

    private boolean runPhi(BB bb, int phiIndex) {
      var phi = bb.phiParameters().get(phiIndex);
      var phiType = scope.typeOf(phi);
      if (phiType.isValue()) {
        // Already a value, so there's nothing to unwrap and nothing to narrow. Also what makes
        // this idempotent: a phi it changes is skipped on the next run.
        return false;
      }

      var predecessors = List.copyOf(bb.predecessors());

      // What each incoming argument becomes, and the type the phi would get. An argument can
      // reach the same block from several targets (an `if` with both branches here) and from
      // several predecessors, so this is keyed by argument, not by edge.
      //
      // The same argument always unwraps to the same replacement, so a repeat only has to not
      // count its type twice.
      var replacements = new HashMap<Argument, Argument>();
      Type valueType = null;
      var anyValue = false;
      var anyUnwrapped = false;

      for (var pred : predecessors) {
        for (var target : pred.jump().targets()) {
          if (target.bb() != bb) {
            continue;
          }

          var arg = target.phiArgs().get(phiIndex);

          Argument replacement;
          if (scope.typeOf(arg).isValue()) {
            replacement = arg;
            anyValue = true;
          } else {
            // Re-checked per edge rather than memoized with the replacement: availability is a
            // question about this predecessor's jump, even when the same promise reaches the phi
            // from several.
            replacement = trivialPromiseValue(arg, pred);
            if (replacement == null) {
              // A promise we can't unwrap: the phi has to stay a maybe-promise.
              return false;
            }
            anyUnwrapped = true;
          }
          if (replacements.putIfAbsent(arg, replacement) == null) {
            valueType = Type.union(valueType, scope.typeOf(replacement));
          }
        }
      }

      if (!anyValue || !anyUnwrapped || valueType == null) {
        return false;
      }

      // Keep the phi's ownership: only its promisity (and whatever the union narrows along with
      // it) is in question here, and a register that claims more ownership than it had would
      // change what the ownership passes may elide.
      var newType = valueType.withOwnership(phiType.ownership());
      if (!newType.isValue() || !newType.isWellFormed()) {
        return false;
      }

      phi.setType(newType);
      for (var pred : predecessors) {
        rewritePredecessor(bb, pred, phiIndex, replacements);
      }
      return true;
    }

    /// The argument a `prom{ return v }` incoming from `pred` can be replaced with, or `null` if
    /// `arg` isn't a promise like that or `v` isn't available at `pred`'s jump.
    private @Nullable Argument trivialPromiseValue(Argument arg, BB pred) {
      if (!(arg instanceof Read(var reg))
          || !(reg instanceof AssigneeOf assignee)
          || !(assignee.statement().expression() instanceof Promise(_, _, var code, _))) {
        return null;
      }

      var entry = code.entry();
      if (code.bbs().size() != 1
          || !entry.phiParameters().isEmpty()
          || !entry.statements().isEmpty()
          || !(entry.jump().expression() instanceof Return)
          || entry.jump().argCount() != 1) {
        return null;
      }

      var returned = entry.jump().arg(0);
      return switch (returned) {
        case Constant _ -> returned;
        // The promise's own registers don't exist outside it, and one from an enclosing scope
        // only reaches this edge if it's defined before the jump that carries it.
        case Read(var returnedReg)
            when scope.contains(returnedReg) && domTree().dominates(returnedReg, pred.jump()) ->
            returned;
        // `consume` promises the register is dead afterwards, which the phi edge would break.
        default -> null;
      };
    }

    private void rewritePredecessor(
        BB targetBb, BB pred, int phiIndex, Map<Argument, Argument> replacements) {
      pred.jump()
          .mapTargets(
              target -> {
                if (target.bb() != targetBb) {
                  return target;
                }
                var newArgs = new ArrayList<>(target.phiArgs());
                var oldArg = newArgs.get(phiIndex);
                newArgs.set(phiIndex, replacements.getOrDefault(oldArg, oldArg));
                return new Target(target.bb(), ImmutableList.copyOf(newArgs));
              });
    }

    private DominatorTree domTree() {
      if (domTree == null) {
        domTree = new DominatorTree(scope);
      }
      return domTree;
    }
  }
}
