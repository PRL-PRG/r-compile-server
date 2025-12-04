package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.fail;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import javax.annotation.Nullable;
import org.jetbrains.annotations.NotNull;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

public record ExampleOption(@Nullable ImmutableSet<String> filter, String name, ImmutableList<SEXP> args) {
  public void failUnknown() {
    fail("Unknown option \"" + name + "\"");
  }

  public void expectNoArgs() {
    if (args.isEmpty()) {
      fail("Option \"" + name + "\" expects no arguments, got \"" + args + "\"");
    }
  }

  public SEXP expectOneArg() {
    if (args.size() != 1) {
      fail("Option \"" + name + "\" expects one argument, got \"" + args + "\"");
    }
    return args.getFirst();
  }

  public int expectOneScalarIntegerArg() {
    var arg = expectOneArg();
    if (arg.asScalarInteger().isEmpty()) {
      fail("Option \"" + name + "\" expects one scalar integer argument, got \"" + arg + "\"");
    }
    return arg.asScalarInteger().get();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private static ExampleOption parse(Parser p) {
    var s = p.scanner();

    ImmutableSet<String> filter = null;
    if (s.trySkip('[')) {
      var filterBuilder = ImmutableSet.<String>builder();
      do {
        filterBuilder.add(s.readIdentifierOrKeyword());
      } while (s.trySkip(','));
      s.assertAndSkip(']');
      filter = filterBuilder.build();
    }

    var name = s.readIdentifierOrKeyword();

  var args = s.nextCharIs('(') ? p.parseList("(", ")", SEXP.class) : ImmutableList.<SEXP>of();

    return new ExampleOption(filter, name, args);
  }
}
