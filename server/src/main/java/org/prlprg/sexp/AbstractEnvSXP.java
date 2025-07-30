package org.prlprg.sexp;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Optional;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.Printer;

abstract class AbstractEnvSXP {
  protected EnvSXP parent;
  protected final Map<String, SEXP> bindings;

  public AbstractEnvSXP(EnvSXP parent) {
    this.parent = parent;
    // Preserving the order makes testing and debugging easier and more consistent.
    this.bindings = new LinkedHashMap<>();
  }

  // @Override
  public EnvSXP parent() {
    return parent;
  }

  // @Override
  public void setParent(EnvSXP parent) {
    this.parent = parent;
  }

  // @Override
  public Optional<SEXP> get(String name) {
    return getLocal(name).or(() -> parent.get(name));
  }

  // @Override
  public Optional<SEXP> getLocal(String name) {
    return Optional.ofNullable(bindings.get(name));
  }

  // @Override
  public @UnmodifiableView Set<Entry<String, SEXP>> bindings() {
    return bindings.entrySet();
  }

  // @Override
  public int size() {
    return bindings.size();
  }

  public void set(String name, SEXP value) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException("binding name cannot be empty");
    }

    bindings.put(name, value);
  }

  public void setBindings(Map<String, SEXP> bindings) {
    for (String name : bindings.keySet()) {
      if (name.isEmpty()) {
        throw new IllegalArgumentException("binding name cannot be empty: " + name);
      }
    }

    this.bindings.clear();
    this.bindings.putAll(bindings);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
