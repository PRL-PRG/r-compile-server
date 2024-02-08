package org.prlprg.rds;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.RPlatform;
import org.prlprg.RSession;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.*;
import org.prlprg.util.GNUR;
import org.prlprg.util.Tests;

public class RDSReaderTest implements Tests {
  private final RSession rsession = new TestRSession();
  private final GNUR R = new GNUR(rsession);

  // TODO: rewrite using GNUR

  @Test
  public void testInts() throws Exception {
    var sexp = R.eval("c(-.Machine$integer.max, -1L, 0L, NA, 1L, .Machine$integer.max)");

    if (sexp instanceof IntSXP ints) {
      assertEquals(6, ints.size());
      assertEquals(-RPlatform.INT_MAX, ints.get(0));
      assertEquals(-1, ints.get(1));
      assertEquals(0, ints.get(2));
      assertEquals(Constants.NA_INT, ints.get(3));
      assertEquals(1, ints.get(4));
      assertEquals(RPlatform.INT_MAX, ints.get(5));
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testLgls() throws Exception {
    var sexp = R.eval("c(TRUE, FALSE, NA)");

    if (sexp instanceof LglSXP logs) {
      assertEquals(3, logs.size());
      assertEquals(Logical.TRUE, logs.get(0));
      assertEquals(Logical.FALSE, logs.get(1));
      assertEquals(Logical.NA, logs.get(2));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testReals() throws Exception {
    var sexp = R.eval("c(-.Machine$double.xmax, -1, 0, NA, 1, .Machine$double.xmax)");

    if (sexp instanceof RealSXP reals) {
      assertEquals(6, reals.size());
      // TODO: R double min are different - should be all be based on RPlatform
      // assertEquals(Double.MIN_VALUE, reals.get(0));
      assertEquals(-1.0, reals.get(1));
      assertEquals(.0, reals.get(2));
      assertEquals(Constants.NA_REAL, reals.get(3));
      assertEquals(1.0, reals.get(4));
      assertEquals(Double.MAX_VALUE, reals.get(5));
    } else {
      fail("Expected RealSXP");
    }
  }

  @Test
  public void testList() throws Exception {
    var sexp = R.eval("pairlist(a = 1L, 2, c = TRUE)");

    if (sexp instanceof ListSXP list) {
      assertEquals(3, list.size());
      assertEquals(new TaggedElem("a", SEXPs.integer(1)), list.get(0));
      assertEquals(new TaggedElem(SEXPs.real(2)), list.get(1));
      assertEquals(new TaggedElem("c", SEXPs.logical(Logical.TRUE)), list.get(2));
    } else {
      fail("Expected ListSXP");
    }
  }

  @Test
  public void testListWithMissingValues() throws Exception {
    var sexp = R.eval("as.pairlist(alist(a=,b=))");

    if (sexp instanceof ListSXP list) {
      assertEquals(2, list.size());
      assertEquals(new TaggedElem("a", SEXPs.MISSING_ARG), list.get(0));
      assertEquals(new TaggedElem("b", SEXPs.MISSING_ARG), list.get(1));
    } else {
      fail("Expected ListSXP");
    }
  }

  @Test
  public void testNamedList() throws Exception {
    var sexp = R.eval("list(a=1L, 2)");

    if (sexp instanceof VecSXP list) {
      assertEquals(2, list.size());
      assertEquals(SEXPs.integer(1), list.get(0));
      assertEquals(SEXPs.real(2), list.get(1));

      var names = Objects.requireNonNull(list.attributes()).get("names");
      if (names instanceof StrSXP namesStr) {
        assertEquals(2, namesStr.size());
        assertEquals("a", namesStr.get(0));
        assertEquals("", namesStr.get(1));
      } else {
        fail("Expected StrSXP");
      }

    } else {
      fail("Expected ListSXP");
    }
  }

  @Test
  public void testClosure() throws Exception {
    var sexp = (CloSXP) R.eval("function(x, y=1) 'abc' + x + length(y)");

    var formals = sexp.formals();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));

    // TODO: this should really be a snapshot test
    var body = sexp.body();
    assertThat(body).isInstanceOf(LangSXP.class);
    assertThat(body.toString()).isEqualTo("\"abc\" + x + length(y)");
  }

  @Test
  public void testClosureWithBC() throws Exception {
    var sexp = (CloSXP) R.eval("compiler::cmpfun(function(x, y=1) 'abc' + x + length(y))");

    var formals = sexp.formals();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));

    // TODO: this should really be a snapshot test
    var body = sexp.body();
    assertThat(body).isInstanceOf(BCodeSXP.class);
  }
}
