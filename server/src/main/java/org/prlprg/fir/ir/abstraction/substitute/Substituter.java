package org.prlprg.fir.ir.abstraction.substitute;

import com.google.common.collect.Multimap;
import com.google.common.collect.MultimapBuilder;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.variable.Register;

/// Batch substitutions so they run in `O(#arguments)` instead of `O(#substs * #arguments))`.
///
/// Registers that are substituted are removed from the scope. Assignments to those registers
/// are converted into non-assigning statements. Substitutions are transitive.
///
/// `use`-ness is preserved at the substitution site: `r0 -> r1` implicitly creates the
/// substitution `use r0 -> use r1`. Be aware that substituting with a `use` is tricky, because
/// if there are multiple occurrences, it breaks `use` invariants.
public class Substituter extends AbstractSubstituter {
  private final Map<Register, Argument> locals = new LinkedHashMap<>();
  private final Multimap<Register, PriorSubstitution> backwards =
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
    if (locals.containsKey(local)) {
      throw new IllegalArgumentException(
          "Local " + local + " has already been marked for substitution.");
    }

    // `a -> a` is a no-op
    if (substitution.equals(new Read(local))) {
      return;
    }

    // If `b -> c` and we have `a -> b`, change to `a -> c`.
    var realSubst =
        switch (substitution) {
          case Read(var substReg) when locals.containsKey(substReg) -> locals.get(substReg);
          case Use(var substReg) when locals.containsKey(substReg) ->
              convertIntoUse(locals.get(substReg));
          default -> substitution;
        };
    locals.put(local, realSubst);

    // Maintain O(1) lookup in case we substitute `b` later
    // (or `c`, then we don't need to insert `b` because it can't be substituted again).
    if (realSubst.variable() != null) {
      backwards.put(realSubst.variable(), new PriorSubstitution(local, realSubst instanceof Use));
    }

    // If `z -> a` and we inserted `a -> b`, change the former to `z -> b`
    // (likewise `... -> c`).
    var zToA = backwards.get(local);
    if (!zToA.isEmpty()) {
      for (var a : zToA) {
        assert a != null;
        locals.put(a.local, a.substitutedWithUse ? convertIntoUse(realSubst) : realSubst);
      }

      // If we substitute `b` (or `c`) later, we must update `z` (and still also `a`).
      if (realSubst instanceof Read(var substReg)) {
        backwards.putAll(substReg, zToA);
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
  protected void clearSubstitutionData() {
    locals.clear();
    backwards.clear();
  }

  @Override
  protected @Nullable Register substitutePhi(BB bb, Register phi) {
    return locals.containsKey(phi) ? null : phi;
  }

  @Override
  protected @Nullable Register substituteAssignee(BB bb, @Nullable Register assignee) {
    return assignee != null && locals.containsKey(assignee) ? null : assignee;
  }

  @Override
  protected Argument substitute(BB bb, Argument argument) {
    return switch (argument) {
      case Read(var r) when locals.containsKey(r) -> locals.get(r);
      // Preserve `use`-ness of substituted
      case Use(var r) when locals.containsKey(r) -> convertIntoUse(locals.get(r));
      default -> argument;
    };
  }

  @Override
  protected Iterable<? extends Entry<Register, ?>> substEntries() {
    return locals.entrySet();
  }

  private record PriorSubstitution(Register local, boolean substitutedWithUse) {}
}
