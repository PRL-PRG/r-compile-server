package org.prlprg.sexp;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/** An R "list" element which consists of an optional string tag (name) and SEXP value. */
public record TaggedElem(String tag, SEXP value) {
  /** Create a {@link TaggedElem} with an optional (if non-empty) tag and value. */
  public TaggedElem {
    Objects.requireNonNull(tag, "Pass the empty string for no tag");
  }

  /** Create a {@link TaggedElem} with no tag and a value. */
  public TaggedElem(SEXP value) {
    this("", value);
  }

  /** Whether the tag is non-empty. */
  public boolean hasTag() {
    return !tag.isEmpty();
  }

  public SEXP namedValue() {
    return hasTag() ? value.withNames(tag) : value;
  }

  /** Returns the tag as a {@link RegSymSXP}, or `null` if the tag is empty. */
  public @Nullable RegSymSXP tagAsSymbol() {
    return hasTag() ? SEXPs.symbol(tag) : null;
  }

  // region serialization and deserialization
  @ParseMethod
  private static TaggedElem parse(Parser p) {
    return p.withContext(new SEXPParseContext()).parse(TaggedElem.class);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new SEXPPrintContext()).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
