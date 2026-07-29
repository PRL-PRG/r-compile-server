package org.prlprg.fir.ir.value;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import org.junit.jupiter.api.Test;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;

/// Tests that every [Value] variant round-trips through [Printer] and [Parser].
///
/// [Value]s are printed into the textual FIŘ (as instruction arguments) and read back by the
/// parser, so a variant the printer emits but the parser rejects makes an optimized module
/// unloadable from its snapshot.
public class ValueParsePrintTest {
  @Test
  public void testUnboxedLogical() {
    assertRoundTrip("TRUE_LGL", new Value.Lgl(Logical.TRUE));
    assertRoundTrip("FALSE_LGL", new Value.Lgl(Logical.FALSE));
    // Regression: `NA_LGL` used to be routed through `SEXP` (like `NA_INT`/`NA_REAL`), which
    // parsed it but then matched no scalar-number case and failed *after* consuming the token.
    assertRoundTrip("NA_LGL", new Value.Lgl(Logical.NA));
  }

  @Test
  public void testBoolean() {
    assertRoundTrip("TRUE", new Value.Bool(true));
    assertRoundTrip("FALSE", new Value.Bool(false));
  }

  @Test
  public void testUnboxedNumber() {
    assertRoundTrip("1", new Value.Int(1));
    assertRoundTrip("-1", new Value.Int(-1));
    assertRoundTrip("NA_INT", new Value.Int(Constants.NA_INT));
    assertRoundTrip("1.0", new Value.Real(1.0));
    assertRoundTrip("NA_REAL", new Value.Real(Constants.NA_REAL));
  }

  @Test
  public void testUnboxedString() {
    assertRoundTrip("\"hello\"", new Value.Str("hello"));
    // The NA string is identity-compared and its contents are a sentinel, so it has no quoted
    // form that reparses to it; it must print as `NA_STR`.
    assertRoundTrip("NA_STR", new Value.Str(Constants.NA_STRING));
  }

  @Test
  public void testSexp() {
    assertRoundTrip("<lgl TRUE>");
    assertRoundTrip("<int 1, 2, 3>");
    assertRoundTrip("<nil>");
  }

  /// Parse `input` into a [Value], print it, and assert both strings are equal.
  private void assertRoundTrip(String input) {
    assertRoundTrip(input, null);
  }

  /// Same as [#assertRoundTrip(String)], and also asserts the parse yields `expected`.
  private void assertRoundTrip(String input, @org.jspecify.annotations.Nullable Value expected) {
    try {
      var value = Parser.fromString(input, Value.class);
      if (expected != null) {
        assertEquals(expected, value, "Value parsed to the wrong variant");
      }
      assertEquals(input, Printer.toString(value), "Value round-trip failed");
    } catch (ParseException e) {
      fail("Failed to parse '" + input + "'", e);
    }
  }
}
