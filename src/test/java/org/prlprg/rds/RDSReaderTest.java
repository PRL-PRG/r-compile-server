package org.prlprg.rds;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.sexp.Coercions.isNA;
import static org.prlprg.util.Tests.printlnIfVerbose;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;

public class RDSReaderTest extends AbstractGNURBasedTest {
  @Test
  public void testInts() {
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

  @Test
  public void testLgls() {
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

  @Test
  public void testReals() {
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

  @Test
  public void testList() {
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
  public void testListWithMissingValues() {
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
  public void testNamedList() {
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
  public void testClosure() {
    var sexp = (CloSXP) R.eval("function(x, y=1) 'abc' + x + length(y)");
    printlnIfVerbose(sexp);

    var formals = sexp.parameters();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));
    assertEquals(new TaggedElem("y", SEXPs.real(1.0)), formals.get(1));

    // TODO: this should really be a snapshot test
    var body = sexp.bodyAST();
    assertThat(body).isInstanceOf(LangSXP.class);
    assertThat(body.toString()).isEqualTo("`+`(`+`(\"abc\", x), length(y))");
  }

  @Test
  public void testClosureWithBC() {
    var sexp = (CloSXP) R.eval("compiler::cmpfun(function(x, y=1) 'abc' + x + length(y))");

    var formals = sexp.parameters();
    assertEquals(2, formals.size());
    assertEquals(new TaggedElem("x", SEXPs.MISSING_ARG), formals.get(0));

    // TODO: this should really be a snapshot test
    var body = sexp.body();
    printlnIfVerbose(body);
    assertThat(body).isInstanceOf(BCodeSXP.class);
  }

  @Test
  public void testExpression() {
    var sexp = R.eval("parse(text='function() {}', keep.source = TRUE)");
    assertThat(sexp).isInstanceOf(ExprSXP.class);
  }

  @Test
  public void testNullInParams() {
    var sexp = R.eval("quote(match('AsIs', cl, 0L, NULL))");
    // FIXME: assert on the number of parameters
    assertThat(sexp).isInstanceOf(LangSXP.class);
  }

  @Test
  public void testNullInParamsInBC() {
    var sexp = (BCodeSXP) R.eval("compiler::compile(quote(match('AsIs', cl, 0L, NULL)))");
    var ast = (LangSXP) sexp.bc().consts().getFirst();
    // here we want to make sure that the trailing NULL did not get lost
    assertThat(ast.args()).hasSize(4);
  }

  @Test
  public void testFormatAsIs() {
    var sexp = R.eval("format.AsIs");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }

  @Test
  public void testComplex() {
    var sexp = R.eval("c(-1+1i, 0+0i, 1+1i)");
    assertThat(sexp).isInstanceOf(ComplexSXP.class);
  }

  @Test
  public void testRoundPOSIXt() {
    var sexp = R.eval("round.POSIXt");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }

  @Test
  public void testLocalFuncationBC() {
    var sexp = R.eval("compiler::cmpfun(function(x) local(x))");
    assertThat(sexp).isInstanceOf(CloSXP.class);
  }
}
