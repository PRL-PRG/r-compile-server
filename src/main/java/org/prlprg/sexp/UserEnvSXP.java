package org.prlprg.sexp;

import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;

public final class UserEnvSXP implements EnvSXP {
  private EnvSXP parent;
  private final Map<String, SEXP> entries;
  private @Nullable Attributes attributes;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    this.parent = parent;
    this.entries = new HashMap<>();
  }

  @Override
  public EnvSXP parent() {
    return parent;
  }

  @Override
  public Optional<SEXP> get(String name) {
    return getLocal(name).or(() -> parent.get(name));
  }

  @Override
  public Optional<SEXP> getLocal(String name) {
    return Optional.ofNullable(entries.get(name));
  }

  @Override
  public Iterable<? extends Map.Entry<? extends String, ? extends SEXP>> bindings() {
    return entries.entrySet();
  }

  @Override
  public String toString() {
    return "<environment: " + hashCode() + ">";
  }

  @Override
  public UserEnvSXP withAttributes(Attributes attributes) {
    this.attributes = attributes;
    return this;
  }

  public void setParent(EnvSXP parent) {
    this.parent = parent;
  }

  public void set(String name, SEXP value) {
    entries.put(name, value);
  }

  public void setAttributes(Attributes attributes) {
    this.attributes = attributes;
  }
}
