package org.prlprg.fir.ir.type;

import java.util.Objects;
import java.util.function.Consumer;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public final class Promisity implements Comparable<Promisity> {
  public static final Promisity VALUE = new Promisity(Tag.VALUE, Effects.NONE);
  public static final Promisity ANY = maybe(Effects.REFLECT);

  public static Promisity maybe(Effects effects) {
    return new Promisity(Tag.MAYBE, effects);
  }

  public static Promisity promise(Effects effects) {
    return new Promisity(Tag.PROMISE, effects);
  }

  private final Tag tag;
  private final Effects effects;

  private Promisity(Tag tag, Effects effects) {
    this.tag = tag;
    this.effects = effects;
  }

  /// Whether the type is definitely a value
  public boolean isValue() {
    return tag == Tag.VALUE;
  }

  /// Whether the type may be a value or a promise
  public boolean isMaybe() {
    return tag == Tag.MAYBE;
  }

  /// Whether the type is definitely a promise
  public boolean isPromise() {
    return tag == Tag.PROMISE;
  }

  /// If this is maybe or definitely a promise, the possible effects, otherwise [Effects#NONE]
  public Effects effects() {
    return effects;
  }

  public boolean isSubtypeOf(Promisity other) {
    return switch (other.tag) {
      case VALUE -> tag == Tag.VALUE;
      case MAYBE -> effects.isSubsetOf(other.effects);
      case PROMISE -> tag == Tag.PROMISE && effects.isSubsetOf(other.effects);
    };
  }

  public Promisity union(Promisity other) {
    return switch (other.tag) {
      case VALUE -> tag == Tag.VALUE ? VALUE : maybe(effects);
      case MAYBE -> maybe(effects().union(other.effects));
      case PROMISE ->
          tag == Tag.PROMISE
              ? promise(effects.union(other.effects))
              : maybe(effects.union(other.effects));
    };
  }

  /// Comparison is subtyping arbitrarily extended to be totally ordered
  @Override
  public int compareTo(Promisity o) {
    var cmp = tag.compareTo(o.tag);
    if (cmp != 0) return cmp;
    return effects.compareTo(o.effects);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof Promisity promisity)) {
      return false;
    }
    return tag == promisity.tag && effects == promisity.effects;
  }

  @Override
  public int hashCode() {
    return Objects.hash(tag, effects);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  record PrintContext(Consumer<Printer> printInside) {}

  record ParseContext(Consumer<Parser> parseInside) {}

  @ParseMethod(SkipWhitespace.NONE)
  private static Promisity parse(Parser p) {
    return parse(p, new ParseContext(p1 -> p1.scanner().assertAndSkip('_')));
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Promisity parse(Parser p, ParseContext ctx) {
    var s = p.scanner();
    var parseInside = ctx.parseInside;

    if (s.trySkip("p?(")) {
      parseInside.accept(p);
      s.assertAndSkip(' ');
      var effects = p.parse(Effects.class);
      s.assertAndSkip(')');
      return maybe(effects);
    } else if (s.trySkip("p(")) {
      parseInside.accept(p);
      s.assertAndSkip(' ');
      var effects = p.parse(Effects.class);
      s.assertAndSkip(')');
      return promise(effects);
    } else {
      parseInside.accept(p);
      return VALUE;
    }
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new PrintContext(p1 -> p1.writer().write('_')));
  }

  @PrintMethod
  private void print(Printer p, PrintContext ctx) {
    var w = p.writer();
    var printInside = ctx.printInside;

    switch (tag) {
      case VALUE -> printInside.accept(p);
      case MAYBE -> {
        w.write("p?(");
        printInside.accept(p);
        w.write(' ');
        p.print(effects);
        w.write(')');
      }
      case PROMISE -> {
        w.write("p(");
        printInside.accept(p);
        w.write(' ');
        p.print(effects);
        w.write(')');
      }
    }
  }

  private enum Tag implements Comparable<Tag> {
    VALUE,
    PROMISE,
    MAYBE,
  }
}
