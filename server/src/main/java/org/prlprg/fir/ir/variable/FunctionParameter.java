package org.prlprg.fir.ir.variable;

import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.Printer;

/// The [Register] defined by an [Abstraction]'s parameter. Only registers can be parameters.
public final class FunctionParameter implements Register {
  private final Set<Use> uses = new LinkedHashSet<>();
  private String name;
  private Type type;
  private boolean strict;
  // Backlink, set when added to an Abstraction.
  private @Nullable Abstraction owner;

  public FunctionParameter(String name, Type type, boolean strict) {
    if (type.isValue() && strict) {
      throw new IllegalArgumentException("Value parameter can't be strict: " + name + ":" + type);
    }
    this.name = name;
    this.type = type;
    this.strict = strict;
  }

  public FunctionParameter(String name, Type type) {
    this(name, type, false);
  }

  /// The [Abstraction] this is a parameter of, or `null` if not (yet) attached to one.
  public @Nullable Abstraction owner() {
    return owner;
  }

  /// Managed by [Abstraction] when this parameter is added to it.
  public void setOwner(@Nullable Abstraction owner) {
    this.owner = owner;
  }

  public boolean strict() {
    return strict;
  }

  public void setStrict(boolean strict) {
    if (type.isValue() && strict) {
      throw new IllegalArgumentException("Value parameter can't be strict: " + name + ":" + type);
    }
    this.strict = strict;
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
    if (type.isValue() && strict) {
      throw new IllegalArgumentException("Value parameter can't be strict: " + name + ":" + type);
    }
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
