package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterators;
import java.util.Iterator;
import javax.annotation.Nullable;

public final class UserEnvSXP extends AbstractEnvSXP implements EnvSXP, Iterable<TaggedElem> {
  private @Nullable Attributes attributes;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    super(parent);
  }

  public Iterator<TaggedElem> iterator() {
    // We need to transform the entries to TaggedElem to avoid exposing the internal map.
    // This is not very efficient though.
    return Iterators.transform(
        bindings.entrySet().iterator(), e -> new TaggedElem(e.getKey(), e.getValue()));
  }

  public ListSXP frame() {
    return new ListSXPImpl(
        bindings.entrySet().stream()
            .map(e -> new TaggedElem(e.getKey(), e.getValue()))
            .collect(ImmutableList.toImmutableList()),
        Attributes.NONE);
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

  public void setAttributes(Attributes attributes) {
    this.attributes = attributes;
  }
}
