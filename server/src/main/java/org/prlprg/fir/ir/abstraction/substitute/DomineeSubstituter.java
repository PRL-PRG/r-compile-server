package org.prlprg.fir.ir.abstraction.substitute;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.Collection;
import java.util.HashSet;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.UnreachableError;

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
  private final Multimap<Register, DomSubst> domSubsts = ArrayListMultimap.create();
  private final Set<Register> backwards = new HashSet<>();

  public DomineeSubstituter(DominatorTree domTree, Abstraction scope) {
    super(scope);
    this.domTree = domTree;
  }

  public void stage(Register local, Argument substitution, BB dominator) {
    if (!domSubsts.put(local, new DomSubst(dominator, substitution))) {
      throw new IllegalArgumentException(
          "Local " + local + " has already been marked for substitution in dominator " + dominator);
    }
    super.stage(local, substitution);
  }

  @Override
  protected void doStage(Register local, Argument substitution) {
    if (backwards.contains(local)) {
      throw new IllegalArgumentException("Transitive substitutions aren't allowed: " + local);
    }
    if (substitution.variable() != null && domSubsts.containsKey(substitution.variable())) {
      throw new IllegalArgumentException(
          "Transitive substitutions aren't allowed: " + substitution);
    }

    if (substitution.variable() != null) {
      backwards.add(substitution.variable());
    }
  }

  @Override
  protected void commitAffectLocals() {}

  @Override
  protected void clearSubstitutionData() {
    domSubsts.clear();
    backwards.clear();
  }

  @Override
  protected Register substitutePhi(BB bb, Register phi) {
    var subst = domSubst(bb, phi);
    if (subst == null) {
      return phi;
    }

    if (!(subst instanceof Read(var substReg))) {
      throw new IllegalStateException("Can only substitute phis with `Read`s");
    }
    return substReg;
  }

  @Override
  protected @Nullable Register substituteAssignee(BB bb, @Nullable Register assignee) {
    var subst = domSubst(bb, assignee);
    if (subst == null) {
      return assignee;
    }

    throw new IllegalStateException("`DomineeSubstituter` can't substitute assignees");
  }

  @Override
  protected Argument substitute(BB bb, Argument argument) {
    var subst = domSubst(bb, argument.variable());
    if (subst == null) {
      return argument;
    }

    return switch (argument) {
      case Constant _ -> throw new UnreachableError();
      case Read _ -> subst;
      case Use _ -> convertIntoUse(subst);
    };
  }

  private @Nullable Argument domSubst(BB bb, @Nullable Register local) {
    return local == null ? null : domSubsts.get(local).stream().filter(ds -> {
      assert ds != null;
      return domTree.dominates(ds.dominator, bb);
    }).findAny().map(DomSubst::substitution).orElse(null);
  }

  @Override
  protected Iterable<? extends Entry<Register, ?>> substEntries() {
    return domSubsts.entries();
  }

  private record DomSubst(BB dominator, Argument substitution) {
    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      p.print(substitution);
      p.writer().write(" in ");
      p.print(dominator);
    }
  }
}
