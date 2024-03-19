package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterators;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;

public final class UserEnvSXP implements EnvSXP, Iterable<TaggedElem> {
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

  public Iterator<TaggedElem> iterator() {
    // We need to transform the entries to TaggedElem to avoid exposing the internal map.
    // This is not very efficient though.
    return Iterators.transform(
        entries.entrySet().iterator(), e -> new TaggedElem(e.getKey(), e.getValue()));
  }

  public ListSXP frame() {
    return new ListSXPImpl(
        entries.entrySet().stream()
            .map(e -> new TaggedElem(e.getKey(), e.getValue()))
            .collect(ImmutableList.toImmutableList()),
        Attributes.NONE);
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
  public int size() {
    return entries.size();
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

  @Override
  public Attributes attributes() {
    return attributes;
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
