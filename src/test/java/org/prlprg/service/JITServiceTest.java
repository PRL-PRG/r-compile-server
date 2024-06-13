package org.prlprg.service;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.Tests;

import java.io.IOException;

public class JITServiceTest extends AbstractGNURBasedTest implements Tests {

  @Test
  public void testJITService() throws IOException, InterruptedException {
    JITService jitService = new JITService(rsession);
    var body = SEXPs.lang(SEXPs.symbol("+"), SEXPs.list(SEXPs.symbol("x"), SEXPs.integer(42)));
    var formals =
        SEXPs.list(new TaggedElem[] {new TaggedElem("x", SEXPs.MISSING_ARG)}, Attributes.NONE);
    var closure = SEXPs.closure(formals, body, rsession.globalEnv());
    var result = jitService.execute(closure);
    System.out.println(result.length);
  }
}
