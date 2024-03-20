package org.prlprg.sexp;

import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import org.prlprg.util.Pair;

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

  public UserEnvSXP(EnvSXP parent, Iterable<Pair<String, SEXP>> frame) {
    this(parent);
    for (var elem : frame) {
      set(elem.first(), elem.second());
    }
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
  public String toString() {
    return "<environment: " + "@" + Integer.toString(hashCode(), 16) + ">";
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
