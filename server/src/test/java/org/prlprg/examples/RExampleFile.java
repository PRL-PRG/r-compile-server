package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.fail;

import com.google.common.collect.ImmutableList;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

/// Parsed R source code that consists of a sequence of checks ([RExample]s).
///
/// Specifically, the R source code must consist of comments and calls to `check`, Each check
/// consists of an R AST and set of options, which are also ASTs. It describes a check (subtest)
/// that runs in a JUnit test; what is specifically checked depends on and is determined by the
/// JUnit test.
public record RExampleFile(ImmutableList<RExample> checks) {
  private static ImmutableList<RExample> parseChecks(String code) {
    var checks = ImmutableList.<RExample>builder();

    try {
      // Dumb parser, instead of creating an R session to parse the AST.
      // We assume a basic structure, otherwise it can fail and/or parse invalid code
      // (the exact structure is undocumented, see examples to get an idea).
      var p = new Parser(code);
      var s = p.scanner();
      while (true) {
        // Skip whitespace and comments
        while (s.nextCharIs('#')) {
          s.readPastEndOfLine();
        }

        if (s.isAtEof()) {
          break;
        }

        s.assertAndSkip("check(");
        var content = s.readCodeItem();

        var compilePromises = false;
        var saveSnapshot = true;
        var options = ImmutableList.<RExampleOption>builder();
        while (!s.trySkip(')')) {
          s.assertAndSkip(',');

          var isDirect = s.trySkip("direct.");
          var name = s.readIdentifierOrKeyword();
          var args = s.nextCharIs('(') ? p.parseList("(", ")", SEXP.class) : ImmutableList.<SEXP>of();

          options.add(new RExampleOption(isDirect, name, args));
        }

        checks.add(new RExample(content, compilePromises, saveSnapshot, options.build()));
      }
    } catch (ParseException e) {
      fail("Malformed R test file:\n" + code, e);
    }

    return checks.build();
  }

  public RExampleFile(String code) {
    this(parseChecks(code));
  }
}
