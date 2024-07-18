package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterators;
import java.util.Iterator;
import java.util.Map;
import javax.annotation.Nonnull;

/** An environment inside a closure or explicitly defined by the user. */
public final class UserEnvSXP extends AbstractEnvSXP implements EnvSXP, Iterable<TaggedElem> {
  private Attributes attributes = Attributes.NONE;

  public UserEnvSXP() {
    this(EmptyEnvSXP.INSTANCE);
  }

  public UserEnvSXP(EnvSXP parent) {
    super(parent);
  }

  public UserEnvSXP(EnvSXP parent, Map<String, SEXP> bindings) {
    this(parent);
    this.bindings.putAll(bindings);
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
  public EnvType envType() {
    return EnvType.USER;
  }

  @Override
  public UserEnvSXP withAttributes(Attributes attributes) {
    this.attributes = attributes;
    return this;
  }

  @Override
  public @Nonnull Attributes attributes() {
    return attributes;
  }

  @Override
  public String toString() {
    return "<environment: " + hashCode() + ">";
  }
}
