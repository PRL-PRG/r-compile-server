package org.prlprg.sexp;

import com.google.common.collect.ForwardingMap;
import com.google.common.collect.ImmutableMap;
import com.google.errorprone.annotations.CanIgnoreReturnValue;
import java.util.Map;
import java.util.Objects;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/** Attributes on an {@link SEXP}. */
@Immutable
public final class Attributes extends ForwardingMap<String, SEXP> {
  private final ImmutableMap<String, SEXP> attrs;

  /** Empty attributes map. */
  public static final Attributes NONE = new Attributes();

  /** Attributes map with only {@linkplain CloSXP#getSrcRef() "srcref"}. */
  public static Attributes srcref(SEXP srcref) {
    return new Attributes(ImmutableMap.of("srcref", srcref));
  }

  private Attributes() {
    attrs = ImmutableMap.of();
  }

  public Attributes(Map<String, SEXP> attrs) {
    this(ImmutableMap.copyOf(attrs));
  }

  public Attributes(ImmutableMap<String, SEXP> attrs) {
    for (var name : attrs.keySet()) {
      if (name.isEmpty()) {
        throw new IllegalArgumentException("Attribute name cannot be empty");
      }
    }
    this.attrs = attrs;
  }

  @Override
  protected Map<String, SEXP> delegate() {
    return attrs;
  }

  public Attributes including(String key, SEXP value) {
    return new Attributes(
        new ImmutableMap.Builder<String, SEXP>().putAll(attrs).put(key, value).build());
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof Attributes that)) return false;
    return Objects.equals(attrs, that.attrs);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), attrs);
  }

  public Attributes excluding(String name) {
    var builder = new ImmutableMap.Builder<String, SEXP>();
    attrs.forEach(
        (key, value) -> {
          if (!key.equals(name)) {
            builder.put(key, value);
          }
        });

    return new Attributes(builder.build());
  }

  /** Build an {@link Attributes} instance. */
  public static class Builder {
    private final ImmutableMap.Builder<String, SEXP> attrs = ImmutableMap.builder();

    /** Add an attribute. */
    @CanIgnoreReturnValue
    public Builder put(String key, SEXP value) {
      attrs.put(key, value);
      return this;
    }

    /**
     * Finish building the {@link Attributes} instance.
     *
     * @throws IllegalArgumentException if an attribute with the same name added multiple times.
     */
    public Attributes build() {
      return new Attributes(attrs.buildOrThrow());
    }
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isEmpty()) {
      w.write("{}");
    } else {
      w.write("{ ");
      w.runIndented(() -> p.withContext(new SEXPPrintContext()).print(this));
      w.write(" }");
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  // endregion serialization and deserialization
}
