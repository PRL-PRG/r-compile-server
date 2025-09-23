package org.prlprg.fir.ir.abstraction.substitute;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.variable.Register;

/// Batch substitutions so they run in `O(#arguments)` instead of `O(#substs * #arguments))`.
///
/// Each substitution only applies in blocks that are dominated by another block. Additionally:
/// - Transitive substitutions aren't allowed
/// - Trying to substitute an assignee will raise an exception
/// - No registers are removed from or added to the scope
///
/// Like [Substituter], `use`-ness is preserved at substitution sites.
public class DomineeSubstituter extends AbstractSubstituter {
  private final DominatorTree domTree;
  private final Map<Register, BB> substitutionDominators = new HashMap<>();
  private final Set<Register> backwards = new HashSet<>();

  public DomineeSubstituter(DominatorTree domTree, Abstraction scope) {
    super(scope);
    this.domTree = domTree;
  }

  public void stage(Register local, Argument substitution, BB dominator) {
    substitutionDominators.put(local, dominator);
    super.stage(local, substitution);
  }

  @Override
  protected void doStage(Register local, Argument substitution) {
    if (backwards.contains(local)) {
      throw new IllegalArgumentException("Transitive substitutions aren't allowed: " + local);
    }
    if (substitution.variable() != null && locals.containsKey(substitution.variable())) {
      throw new IllegalArgumentException(
          "Transitive substitutions aren't allowed: " + substitution);
    }

    if (substitution.variable() != null) {
      backwards.add(substitution.variable());
    }

    locals.put(local, substitution);
  }

  @Override
  protected void commitAffectLocals() {}

  @Override
  protected void clearOtherSubstitutionData() {
    substitutionDominators.clear();
    backwards.clear();
  }

  @Override
  protected @Nullable Register substituteAssignee(BB bb, @Nullable Register assignee) {
    var dominator = assignee == null ? null : substitutionDominators.get(assignee);
    if (dominator == null || !domTree.dominates(dominator, bb)) {
      return assignee;
    }

    throw new IllegalStateException("`DomineeSubstituter` can't substitute assignees");
  }

  @Override
  protected Argument substitute(BB bb, Argument argument) {
    var dominator =
        argument.variable() == null ? null : substitutionDominators.get(argument.variable());
    if (dominator == null || !domTree.dominates(dominator, bb)) {
      return argument;
    }

    return super.substitute(bb, argument);
  }
}
