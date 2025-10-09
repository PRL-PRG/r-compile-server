package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import net.jqwik.api.Arbitrary;
import net.jqwik.api.ForAll;
import net.jqwik.api.Property;
import net.jqwik.api.Provide;
import org.junit.jupiter.api.Test;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

/**
 * Tests for parsing and printing SEXPs.
 *
 * <p>This class tests that SEXPs can be parsed from strings, printed back to strings, and that the
 * original and printed strings match.
 */
public class SEXPParsePrintTest {
  @Test
  public void testScalar() {
    assertRoundTrip("1");
    assertRoundTrip("1.0");
    assertRoundTrip("TRUE");
    assertRoundTrip("\"hello\"");
    assertRoundTrip("1.0+2.0i");
    assertRoundTrip("1.0E100");
    assertRoundTrip("+Infinity");
    assertRoundTrip("-Infinity");
    assertRoundTrip("+Infinityi");
    assertRoundTrip("-1.0+0.0i");
    assertRoundTrip("\"\\n\\\"\\\\\"");

    assertRoundTrip("1", true);
    assertRoundTrip("1.0", true);
    assertRoundTrip("TRUE", true);

    assertRoundTrip("NA_INT");
    assertRoundTrip("NA_REAL");
    assertRoundTrip("NA_LGL");
    assertRoundTrip("NA_STR");
    assertRoundTrip("NA_CPLX");
  }

  @Test
  public void testVector() {
    assertRoundTrip("<int 1, 2, 3>");
    assertRoundTrip("<real 1.0, 2.0, 3.0>");
    assertRoundTrip("<lgl TRUE, FALSE, NA_LGL>");
    assertRoundTrip("<str \"hello\", \"world\">");
    assertRoundTrip("<cplx 1.0+2.0i, 3.0+4.0i>");
    assertRoundTrip("<raw 01, 02, ff>");
    assertRoundTrip("<vec NULL, 1, 2.0, TRUE, NA_STR>");

    assertRoundTrip("<int 1, 2, 3>", true);
    assertRoundTrip("<real 1.0, 2.0, 3.0>", true);
    assertRoundTrip("<lgl TRUE, FALSE, NA_LGL>", true);
    assertRoundTrip("<str \"hello\", \"world\">", true);
    assertRoundTrip("<cplx 1.0+2.0i, 3.0+4.0i>", true);
    assertRoundTrip("<raw 01, 02, ff>", true);
    assertRoundTrip("<vec NULL, 1, 2.0, TRUE, NA_STR>", true);
  }

  @Test
  public void testList() {
    assertRoundTrip("(<int 1, 2, 3>, <str \"hello\", \"world\">)");
    assertRoundTrip("((\"nested\"), NA_LGL)");

    assertRoundTrip("<list <int 1, 2, 3>, <str \"hello\", \"world\">>", true);
    assertRoundTrip("<list (\"nested\"), NA_LGL>", true);
  }

  @Test
  public void testEnvironment() {
    assertRoundTrip("<user#0 parent=<empty> (x=1, y=\"hello\")>");
    assertRoundTrip("<user#0 parent=<global#1 parent=<base#2 ()> ()> (x=1, y=\"hello\")>");
    assertRoundTrip("<user#0 parent=<empty> (x=<user#0>)>");
  }

  @Test
  public void testLanguage() {
    assertRoundTrip("foo()");
    assertRoundTrip("`+`(1, 2)");
    assertRoundTrip("{\n  hello(\"world\");\n  foo(bar(baz))\n}");

    assertRoundTrip("<lang foo()>", true);
    assertRoundTrip("<lang `+`(1, 2)>", true);
    assertRoundTrip("<lang {\n  hello(\"world\");\n  foo(bar(baz))\n}>", true);
  }

  @Test
  public void testSymbol() {
    assertRoundTrip("x");
    assertRoundTrip("if");
    assertRoundTrip("T");
    assertRoundTrip("`+`");
    assertRoundTrip("`NULL`");
    assertRoundTrip("`\\``");

    assertRoundTrip("<sym x>", true);
    assertRoundTrip("<sym if>", true);
    assertRoundTrip("<sym T>", true);
    assertRoundTrip("<sym `+`>", true);
    assertRoundTrip("<sym `NULL`>", true);
    assertRoundTrip("<sym `\\``>", true);

    assertRoundTrip("<missing>");
    assertRoundTrip("<missing>", true);
  }

  @Test
  public void testNull() {
    assertRoundTrip("NULL");
    assertRoundTrip("NULL", true);
  }

  /// Property test that generates random [SEXP]s, prints them, then verifies that when the SEXP
  /// is re-parsed and printed again, both prints are the same.
  @Property(tries = 1000)
  public void testRandomSEXPs(@ForAll("sexps") SEXP sexp) {
    assertRoundTrip(Printer.toString(sexp, SEXPPrintOptions.FULL));
    assertRoundTrip(Printer.toString(sexp, SEXPPrintOptions.FULL_DELIMITED), true);
  }

  @Provide
  public Arbitrary<SEXP> sexps() {
    return ArbitraryProvider.sexps();
  }

  /// Parse the string into an [SEXP], print it, and assert that the original and printed
  /// strings are equal.
  private void assertRoundTrip(String input) {
    assertRoundTrip(input, false);
  }

  /// Same as [#assertRoundTrip(String)] but may change how the [SEXP] is printed.
  private void assertRoundTrip(String input, boolean forceDelimited) {
    try {
      var sexp = Parser.fromString(input, SEXP.class);
      var printed = Printer.toString(sexp, SEXPPrintOptions.FULL.withDelimited(forceDelimited));
      assertEquals(input, printed, "SEXP round-trip failed");
    } catch (ParseException e) {
      fail("Failed to parse '" + input + "'", e);
    }
  }
}
