package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.escape.Escaper;
import com.google.common.escape.Escapers;
import java.util.Optional;
import javax.annotation.concurrent.Immutable;

/** String vector SEXP. */
@Immutable
public sealed interface StrSXP extends PrimVectorSXP<String>, StrOrRegSymSXP
    permits EmptyStrSXPImpl, ScalarStrSXP, StrSXPImpl {
  @Override
  default SEXPType type() {
    return SEXPType.STR;
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return StrSXP.class;
  }

  @Override
  default boolean hasNaOrNaN() {
    for (var string : this) {
      if (Constants.isNaString(string)) {
        return true;
      }
    }
    return false;
  }

  @Override
  StrSXP withAttributes(Attributes attributes);
}

/** String vector which doesn't fit any of the more specific subclasses. */
record StrSXPImpl(ImmutableList<String> data, @Override Attributes attributes) implements StrSXP {
  @Override
  public UnmodifiableIterator<String> iterator() {
    return data.iterator();
  }

  @Override
  public String get(int i) {
    return data.get(i);
  }

  @Override
  public int size() {
    return data.size();
  }

  @Override
  public String toString() {
    return VectorSXPs.toString(this, data.stream().map(StrSXPs::quoteString));
  }

  @Override
  public StrSXP withAttributes(Attributes attributes) {
    return SEXPs.string(data, attributes);
  }

  @Override
  public Optional<String> reifyString() {
    return size() == 1 ? Optional.of(get(0)) : Optional.empty();
  }
}

final class ScalarStrSXP extends ScalarSXPImpl<String> implements StrSXP {
  ScalarStrSXP(String data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public String value() {
    return data;
  }

  @Override
  public String toString() {
    return StrSXPs.quoteString(data);
  }

  @Override
  public StrSXP withAttributes(Attributes attributes) {
    return SEXPs.string(data, attributes);
  }

  @Override
  public Optional<String> reifyString() {
    return Optional.of(data);
  }
}

/** Empty string vector with no ALTREP, ATTRIB, or OBJECT. */
final class EmptyStrSXPImpl extends EmptyVectorSXPImpl<String> implements StrSXP {
  static final EmptyStrSXPImpl INSTANCE = new EmptyStrSXPImpl();

  private EmptyStrSXPImpl() {}

  @Override
  public StrSXP withAttributes(Attributes attributes) {
    return SEXPs.string(ImmutableList.of(), attributes);
  }

  @Override
  public Optional<String> reifyString() {
    return Optional.empty();
  }
}

final class StrSXPs {
  private static final Escaper rEscaper =
      Escapers.builder()
          .addEscape('"', "\\\"")
          .addEscape('\\', "\\\\")
          .addEscape('\n', "\\n")
          .addEscape('\r', "\\r")
          .addEscape('\t', "\\t")
          .build();

  static String quoteString(String s) {
    return Coercions.isNA(s) ? "NA" : "\"" + rEscaper.escape(s) + "\"";
  }

  private StrSXPs() {}
}
