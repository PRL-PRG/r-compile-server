package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.fail;

import com.google.common.collect.ImmutableList;
import org.prlprg.sexp.SEXP;

public record RExampleOption(boolean isDirect, String name, ImmutableList<SEXP> args) {

  public void failUnknown() {
    fail("Unknown option \"" + name + "\"");
  }

  public void expectNoArgs() {
    if (args != null) {
      fail("Option \"" + name + "\" expects no arguments, got \"" + args + "\"");
    }
  }

  public SEXP expectOneArg() {
    if (args == null || args.size() != 1) {
      fail("Option \"" + name + "\" expects one argument, got \"" + args + "\"");
    }
    return args.getFirst();
  }
}
