package org.prlprg.fir.ir.abstraction.substitute;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.variable.Register;

/// Batch substitutions so they run in `O(#arguments)` instead of `O(#substs * #arguments))`.
///
/// This substitutes registers "belonging to" a different scope, whereas [Substituter] substitute
/// those belonging to the same scope. Specifically, this class is used to inline calls, you
/// probably need [Substituter] everywhere else.
///
/// Unlike [Substituter], this:
/// - Only allows you to substitute registers.
/// - Replaces substituted assignees instead of removing them.
/// - Adds substituted registers into the scope (like [Substituter], registers that are
///   substituted are removed from the scope, unless they're the target of another substitution).
/// - Doesn't do transitive substitutions.
///
/// Like [Substituter], `use`-ness is preserved at substitution sites.
public class InlineSubstituter extends AbstractSubstituter {
  private final Map<Register, Argument> locals = new LinkedHashMap<>();

  public InlineSubstituter(Abstraction scope) {
    super(scope);
  }

  public void stage(Register local, Register substitution) {
    stage(local, new Read(substitution));
  }

  @Override
  protected void doStage(Register local, Argument substitution) {
    if (locals.containsKey(local)) {
      throw new IllegalArgumentException(
          "Local " + local + " has already been marked for substitution.");
    }
    assert substitution instanceof Read;
    locals.put(local, substitution);
  }

  @Override
  protected void commitAffectLocals() {
    var newLocals = new ArrayList<Local>();
    for (var entry : locals.entrySet()) {
      var oldRegister = entry.getKey();
      var newRegister = ((Read) entry.getValue()).variable();
      var type = scope.removeLocal(oldRegister).type();
      newLocals.add(new Local(newRegister, type));
    }
    // Must add new locals after,
    // otherwise we may add a local that already exists, but will be removed later.
    for (var local : newLocals) {
      scope.addLocal(local);
    }
  }

  @Override
  protected void clearSubstitutionData() {
    locals.clear();
  }

  @Override
  protected Register substitutePhi(BB bb, Register phi) {
    if (!locals.containsKey(phi)) {
      return phi;
    }
    if (!(locals.get(phi) instanceof Read(var substReg))) {
      throw new IllegalStateException("Can only substitute phis with `Read`s");
    }
    return substReg;
  }

  @Override
  protected @Nullable Register substituteAssignee(BB bb, @Nullable Register assignee) {
    if (assignee == null) {
      return null;
    }
    var substitution = locals.get(assignee);
    if (substitution == null) {
      return assignee;
    }

    return ((Read) substitution).variable();
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
}
