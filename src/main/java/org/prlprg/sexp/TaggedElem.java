package org.prlprg.sexp;

import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.parseprint.SEXPParseContext;

/** An R "list" element which consists of an optional string tag (name) and SEXP value. */
// TODO: Replace `String` with `RegSymSXP`, or replace all `@Nullable RegSymSXP` with `String` and
//  permit the empty string.
public record TaggedElem(@Nullable String tag, SEXP value) {
  /** Create a {@link TaggedElem} with an optional (if non-null) tag and value. */
  public TaggedElem {
    if (tag != null && tag.isEmpty()) {
      throw new IllegalArgumentException("Tag cannot be empty, should be null instead");
    }
  }

  /** Create a {@link TaggedElem} with no tag and a value. */
  public TaggedElem(SEXP value) {
    this(null, value);
  }

  /** Whether the tag is non-null. */
  public boolean hasTag() {
    return tag != null;
  }

  public SEXP namedValue() {
    if (tag == null) {
      return value;
    } else {
      return value.withNames(tag);
    }
  }

  /**
   * Returns the tag or an empty string if the tag is null. This is to follow what GNU-R does when
   * printing names.
   *
   * @return the tag or an empty string if the tag is null
   */
  public String tagOrEmpty() {
    return tag == null ? "" : tag;
  }

  /**
   * Returns the tag as a {@link RegSymSXP}.
   *
   * <p>TODO: Refactor so that all tags are {@code @Nullable RegSymSXP} or {@code String} and allow
   * blank.
   */
  public @Nullable RegSymSXP tagAsSymbol() {
    return tag == null ? null : SEXPs.symbol(tag);
  }

  // region serialization and deserialization

  /**
   * Context to print {@link TaggedElem} as they are printed in {@linkplain CloSXP#parameters()
   * closure parameters} and {@linkplain EnvSXP#bindingsAsTaggedElems() environment bindings}.
   *
   * <p>Specifically, in any other context, {@link TaggedElem}s without names print like {@code
   * value}, and those with missing values print like {@code name=}. In this context, {@link
   * TaggedElem}s without names print like {@code =value}, and those with missing values parse and
   * print like {@code name}. In both context, {@link TaggedElem}s with names and non-missing values
   * parse and print like {@code name=value}, and those without names and missing values parse and
   * print the empty string (for parsing, this is determined because the {@link TaggedElem} must be
   * followed by a delimiter like ",", ")", or end-of-input).
   */
  public static class BindingsParsePrintContext {
    private final @Nullable Object valueContext;

    /**
     * Create a {@link BindingsParsePrintContext} that parses and prints the {@linkplain
     * TaggedElem#value() values} in no context.
     */
    public BindingsParsePrintContext() {
      this.valueContext = null;
    }

    /**
     * Create a {@link BindingsParsePrintContext} that parses and prints the {@linkplain
     * TaggedElem#value() values} in the given context (or {@code null} for no context).
     */
    public BindingsParsePrintContext(@Nullable Object valueContext) {
      this.valueContext = valueContext;
    }

    @ParseMethod
    private TaggedElem parse(Parser p) {
      var s = p.scanner();

      if (s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)) {
        return new TaggedElem(null, SEXPs.MISSING_ARG);
      }

      var tag = s.nextCharIs('=') ? null : Names.read(s, true);
      var value =
          s.trySkip('=') ? p.withContext(valueContext).parse(SEXP.class) : SEXPs.MISSING_ARG;
      return new TaggedElem(tag, value);
    }

    @PrintMethod
    private void print(TaggedElem elem, Printer p) {
      var w = p.writer();

      if (elem.tag != null) {
        w.write(Names.quoteIfNecessary(elem.tag));
      }
      if (elem.value != SEXPs.MISSING_ARG) {
        w.write('=');
        p.withContext(valueContext).print(elem.value);
      }
    }
  }

  @ParseMethod
  private static TaggedElem parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)) {
      return new TaggedElem(null, SEXPs.MISSING_ARG);
    }

    var tagOrValue = p.parse(SEXP.class);
    if (!s.trySkip('=')) {
      return new TaggedElem(null, tagOrValue);
    }

    if (!(tagOrValue instanceof RegSymSXP tag)) {
      throw s.fail("Expected tag name before '='");
    }
    var value =
        s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)
            ? SEXPs.MISSING_ARG
            : p.parse(SEXP.class);
    return new TaggedElem(tag.name(), value);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (tag != null) {
      w.write(Names.quoteIfNecessary(tag));
      w.write('=');
    }
    if (value != SEXPs.MISSING_ARG) {
      p.print(value);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion
}
