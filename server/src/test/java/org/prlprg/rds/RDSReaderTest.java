package org.prlprg.rds;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.sexp.Coercions.isNA;

import java.util.Objects;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURTest;
import org.prlprg.sexp.*;

public class RDSReaderTest {
  @GNURTest
  public void testInts(GNUR R) {
    var sexp = R.eval("c(-.Machine$integer.max, -1L, 0L, NA, 1L, .Machine$integer.max)");

    if (sexp instanceof IntSXP ints) {
      assertEquals(6, ints.size());
      assertEquals(Constants.INT_MIN, ints.get(0));
      assertEquals(-1, ints.get(1));
      assertEquals(0, ints.get(2));
      assertTrue(isNA(ints.get(3)));
      assertEquals(1, ints.get(4));
      assertEquals(Integer.MAX_VALUE, ints.get(5));
    } else {
      fail("Expected IntSXP");
    }
  }

  @GNURTest
  public void testLgls(GNUR R) {
    var sexp = R.eval("c(TRUE, FALSE, NA)");

    if (sexp instanceof LglSXP logs) {
      assertEquals(3, logs.size());
      assertEquals(Logical.TRUE, logs.get(0));
      assertEquals(Logical.FALSE, logs.get(1));
      assertTrue(isNA(logs.get(2)));
    } else {
      fail("Expected LglSXP");
    }
  }

  @GNURTest
  public void testReals(GNUR R) {
    var sexp = R.eval("c(-.Machine$double.xmax, -1, 0, NA, 1, .Machine$double.xmax)");

    if (sexp instanceof RealSXP reals) {
      assertEquals(6, reals.size());
      // TODO: R double min are different - should be all be based on RPlatform
      // assertEquals(Double.MIN_VALUE, reals.get(0));
      assertEquals(-1.0, reals.get(1));
      assertEquals(.0, reals.get(2));
      assertTrue(isNA(reals.get(3)));
      assertEquals(1.0, reals.get(4));
      assertEquals(Double.MAX_VALUE, reals.get(5));
    } else {
      fail("Expected RealSXP");
    }
  }

  @GNURTest
  public void testList(GNUR R) {
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

  @GNURTest
  public void testListWithMissingValues(GNUR R) {
    var sexp = R.eval("as.pairlist(alist(a=,b=))");

    if (sexp instanceof ListSXP list) {
      assertEquals(2, list.size());
      assertEquals(new TaggedElem("a", SEXPs.MISSING_ARG), list.get(0));
      assertEquals(new TaggedElem("b", SEXPs.MISSING_ARG), list.get(1));
    } else {
      fail("Expected ListSXP");
    }
  }

  @GNURTest
  public void testNamedList(GNUR R) {
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

  @GNURTest
  public void testClosure(GNUR R) {
    var sexp = (CloSXP) R.eval("function(x, y=1) 'abc' + x + length(y)");

    var formals = sexp.parameters();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));
    assertEquals(new TaggedElem("y", SEXPs.real(1.0)), formals.get(1));

    // TODO: this should really be a snapshot test
    var body = sexp.bodyAST();
    assertThat(body).isInstanceOf(LangSXP.class);
    assertThat(body.toString()).isEqualTo("`+`(`+`(\"abc\", x), length(y))");
  }

  @GNURTest
  public void testClosureWithBC(GNUR R) {
    var sexp = (CloSXP) R.eval("compiler::cmpfun(function(x, y=1) 'abc' + x + length(y))");

    var formals = sexp.parameters();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));

    var body = sexp.body();
    assertThat(body).isInstanceOf(BCodeSXP.class);
  }

  @GNURTest
  public void testExpression(GNUR R) {
    var sexp = R.eval("parse(text='function() {}', keep.source = TRUE)");
    assertThat(sexp).isInstanceOf(ExprSXP.class);
  }

  @GNURTest
  public void testNullInParams(GNUR R) {
    var sexp = R.eval("quote(match('AsIs', cl, 0L, NULL))");
    // FIXME: assert on the number of parameters
    assertThat(sexp).isInstanceOf(LangSXP.class);
  }

  @GNURTest
  public void testNullInParamsInBC(GNUR R) {
    var sexp = (BCodeSXP) R.eval("compiler::compile(quote(match('AsIs', cl, 0L, NULL)))");
    var ast = (LangSXP) sexp.bc().consts().getFirst();
    // here we want to make sure that the trailing NULL did not get lost
    assertThat(ast.args()).hasSize(4);
  }

  @GNURTest
  public void testFormatAsIs(GNUR R) {
    var sexp = R.eval("format.AsIs");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }

  @GNURTest
  public void testComplex(GNUR R) {
    var sexp = R.eval("c(-1+1i, 0+0i, 1+1i)");
    assertThat(sexp).isInstanceOf(ComplexSXP.class);
  }

  @GNURTest
  public void testRoundPOSIXt(GNUR R) {
    var sexp = R.eval("round.POSIXt");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }

  @GNURTest
  public void testLocalFuncationBC(GNUR R) {
    var sexp = R.eval("compiler::cmpfun(function(x) local(x))");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }
}
