package org.prlprg.fir.ir.variable;

import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.Printer;

/// The [Register] defined by a [BB]'s phi parameter (MLIR-style block argument). Its incoming
/// values come from the [phi arguments][org.prlprg.fir.ir.phi.Target] of predecessor jumps.
public final class BlockParameter implements Register {
  private final Set<Use> uses = new LinkedHashSet<>();
  private String name;
  private Type type;
  // Backlink, set when added to / removed from a BB.
  private @Nullable BB owner;

  public BlockParameter(String name, Type type) {
    this.name = name;
    this.type = type;
  }

  /// The [BB] this is a phi parameter of, or `null` if not (yet) attached to one.
  public @Nullable BB owner() {
    return owner;
  }

  /// Managed by [BB] when this parameter is added to or removed from it.
  public void setOwner(@Nullable BB owner) {
    this.owner = owner;
  }

  @Override
  public String name() {
    return name;
  }

  public void rename(String name) {
    this.name = name;
  }

  @Override
  public Type type() {
    return type;
  }

  @Override
  public void setType(Type type) {
    this.type = type;
  }

  @Override
  @UnmodifiableView
  public Set<Use> uses() {
    return Collections.unmodifiableSet(uses);
  }

  @Override
  public void addUse(Use use) {
    uses.add(use);
  }

  @Override
  public void removeUse(Use use) {
    uses.remove(use);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
