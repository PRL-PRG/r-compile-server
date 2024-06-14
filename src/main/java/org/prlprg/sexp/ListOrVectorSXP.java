package org.prlprg.sexp;

import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

/** A list or vector SEXP (the 2 main collection types in R) */
public sealed interface ListOrVectorSXP<T> extends SEXP, Iterable<T> permits ListSXP, VectorSXP {
  /**
   * Get the element at index i.
   *
   * @throws IndexOutOfBoundsException if i is out of bounds.
   */
  T get(int i);

  /** The number of elements in this collection. */
  int size();

  /** Is the collection empty? */
  default boolean isEmpty() {
    return size() == 0;
  }

  @Override
  ListOrVectorSXP<T> withAttributes(Attributes attributes);

  default Stream<T> stream() {
    return StreamSupport.stream(spliterator(), false);
  }

  @ParseMethod
  private static ListOrVectorSXP<?> parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharIs('(')) {
      return p.parse(ListSXP.class);
    } else if (s.nextCharsAre("NULL")) {
      return p.parse(NilSXP.class);
    } else if (s.nextCharSatisfies(Character::isDigit)
        || s.nextCharsAre("TRUE")
        || s.nextCharsAre("FALSE")
        || s.nextCharsAre("NA")
        || s.nextCharsAre("<lgl")
        || s.nextCharsAre("<int")
        || s.nextCharsAre("<real")
        || s.nextCharsAre("<cplx")
        || s.nextCharsAre("<raw")
        || s.nextCharsAre("<str")
        || s.nextCharsAre("<vec")
        || s.nextCharsAre("<expr")) {
      return p.parse(VectorSXP.class);
    } else if (s.trySkip('<')) {
      throw s.fail("Not a list or vector SEXP type: " + s.readJavaIdentifierOrKeyword());
    } else {
      throw s.fail("Expected start of list or vector SEXP");
    }
  }
}
