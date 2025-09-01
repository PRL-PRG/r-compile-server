package org.prlprg.fir.ir.abstraction.substitute;

import com.google.common.collect.Multimap;
import com.google.common.collect.MultimapBuilder;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Register;

/// Batch substitutions so they run in `O(#arguments)` instead of `O(#substs * #arguments))`.
///
/// Registers that are substituted are removed from the scope. Assignments to those registers
/// are converted into non-assigning statements. Substitutions are transitive.
public class Substituter extends AbstractSubstituter {
  private final Multimap<Register, Register> backwards =
      MultimapBuilder.hashKeys().arrayListValues().build();

  public Substituter(Abstraction scope) {
    super(scope);
  }

  // Increase visibility
  @Override
  public void stageAll(Map<Register, Argument> substitutions) {
    super.stageAll(substitutions);
  }

  // Increase visibility
  @Override
  public void stage(Register local, Argument substitution) {
    super.stage(local, substitution);
  }

  @Override
  protected void doStage(Register local, Argument substitution) {
    // `a -> a` is a no-op
    if (substitution.equals(new Read(local))) {
      return;
    }

    // If `b -> c` and we have `a -> b`, change to `a -> c`.
    var realSubst =
        substitution instanceof Read(var substReg) && locals.containsKey(substReg)
            ? locals.get(substReg)
            : substitution;
    locals.put(local, realSubst);

    // Maintain O(1) lookup in case we substitute `b` later
    // (or `c`, then we don't need to insert `b` because it can't be substituted again).
    if (realSubst instanceof Read(var substReg)) {
      backwards.put(substReg, local);
    }

    // If `z -> a` and we inserted `a -> b`, change the former to `z -> b`
    // (likewise `... -> c`).
    var aToLocal = backwards.get(local);
    if (!aToLocal.isEmpty()) {
      for (var a : aToLocal) {
        locals.put(a, realSubst);
      }

      // If we substitute `b` (or `c`) later, we must update `z` (and still also `a`).
      if (realSubst instanceof Read(var substReg)) {
        backwards.putAll(substReg, aToLocal);
      }
    }
  }

  @Override
  protected void commitAffectLocals() {
    for (var local : locals.keySet()) {
      scope.removeLocal(local);
    }
  }

  @Override
  protected void clearOtherSubstitutionData() {
    backwards.clear();
  }

  @Override
  protected @Nullable Register substituteAssignee(@Nullable Register assignee) {
    return assignee != null && locals.containsKey(assignee) ? null : assignee;
  }
}
