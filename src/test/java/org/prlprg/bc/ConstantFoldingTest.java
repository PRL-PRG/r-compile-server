package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.SEXPs;

public class ConstantFoldingTest {

  @Test
  public void testPlus() {
    var a = SEXPs.complex(1, 2);
    var b = SEXPs.integer(5);
    var res = ConstantFolding.add(List.of(a, b)).get();
    var expected = SEXPs.complex(6, 2);
    assertEquals(res, expected);
  }

  @Test
  public void testSub() {
    var a = SEXPs.integer(5);
    var b = SEXPs.complex(1, 2);
    var res = ConstantFolding.sub(List.of(a, b)).get();
    var expected = SEXPs.complex(4, -2);
    assertEquals(res, expected);
  }

  @Test
  public void testMul() {
    var a = SEXPs.integer(2);
    var b = SEXPs.integer(3);
    var res = ConstantFolding.mul(List.of(a, b)).get();
    var expected = SEXPs.integer(6);
    assertEquals(res, expected);
  }

  @Test
  public void testDiv() {
    var a = SEXPs.integer(6);
    var b = SEXPs.integer(3);
    var res = ConstantFolding.div(List.of(a, b)).get();
    var expected = SEXPs.integer(2);
    assertEquals(res, expected);
  }

  @Test
  public void testMinusSingleIntegerVector() {
    var a = SEXPs.integer(5);
    var res = ConstantFolding.minus(List.of(a)).get();
    var expected = SEXPs.integer(-5);
    assertEquals(res, expected);
  }

  @Test
  public void testMinusSingleRealVector() {
    var b = SEXPs.real(3.5);
    var res2 = ConstantFolding.minus(List.of(b)).get();
    var expected2 = SEXPs.real(-3.5);
    assertEquals(res2, expected2);
  }

  @Test
  public void testMinusSingleComplexVector() {
    var c = SEXPs.complex(1, 2);
    var res3 = ConstantFolding.minus(List.of(c)).get();
    var expected3 = SEXPs.complex(-1, -2);
    assertEquals(res3, expected3);
  }

  @Test
  public void testPlusSingleIntegerVector() {
    var a = SEXPs.integer(5);
    var res = ConstantFolding.plus(List.of(a)).get();
    var expected = SEXPs.integer(5);
    assertEquals(res, expected);
  }

  @Test
  public void testPlusSingleRealVector() {
    var b = SEXPs.real(3.5);
    var res2 = ConstantFolding.plus(List.of(b)).get();
    var expected2 = SEXPs.real(3.5);
    assertEquals(res2, expected2);
  }

  @Test
  public void testPlusSingleComplexVector() {
    var c = SEXPs.complex(1, 2);
    var res3 = ConstantFolding.plus(List.of(c)).get();
    var expected3 = SEXPs.complex(1, 2);
    assertEquals(res3, expected3);
  }



  @Test
  public void testLogSingleIntegerVector() {
    var a = SEXPs.integer(8);
    var res = ConstantFolding.log(List.of(a)).get();
    var expected = SEXPs.real(Math.log(8));
    assertEquals(res, expected);
  }

  @Test
  public void testLogSingleRealVector() {
    var b = SEXPs.real(3.5);
    var res2 = ConstantFolding.log(List.of(b)).get();
    var expected2 = SEXPs.real(Math.log(3.5));
    assertEquals(res2, expected2);
  }

  @Test
  public void testLog2SingleIntegerVector() {
    var a = SEXPs.integer(8);
    var res = ConstantFolding.log2(List.of(a)).get();
    var expected = SEXPs.real(Math.log(8) / Math.log(2));
    assertEquals(res, expected);
  }

  @Test
  public void testLog2SingleRealVector() {
    var b = SEXPs.real(3.5);
    var res2 = ConstantFolding.log2(List.of(b)).get();
    var expected2 = SEXPs.real(Math.log(3.5) / Math.log(2));
    assertEquals(res2, expected2);
  }


  @Test
  public void testPow() {
    var a = SEXPs.integer(2);
    var b = SEXPs.integer(3);
    var res = ConstantFolding.pow(List.of(a, b)).get();
    var expected = SEXPs.real(8.0);
    assertEquals(res, expected);
  }

  @Test
  public void testRepSingleIntegerVector() {
    var a = SEXPs.integer(2);
    var times = SEXPs.integer(3);
    var res = ConstantFolding.rep(List.of(a, times)).get();
    var expected = SEXPs.integer(new int[] {2, 2, 2});
    assertEquals(res, expected);
  }

  @Test
  public void testRepSingleRealVector() {
    var b = SEXPs.real(3.5);
    var times2 = SEXPs.integer(2);
    var res2 = ConstantFolding.rep(List.of(b, times2)).get();
    var expected2 = SEXPs.real(new double[] {3.5, 3.5});
    assertEquals(res2, expected2);
  }


  @Test
  public void testRepVectorWithDifferentTimes() {
    var d = SEXPs.integer(new int[] {1, 2});
    var times4 = SEXPs.integer(new int[] {2, 3});
    var res4 = ConstantFolding.rep(List.of(d, times4)).get();
    var expected4 = SEXPs.integer(new int[] {1, 1, 2, 2, 2});
    assertEquals(res4, expected4);
  }

  @Test
  public void testSeqIntIntegerVector() {
    var from = SEXPs.integer(1);
    var to = SEXPs.integer(5);
    var by = SEXPs.integer(1);
    var res = ConstantFolding.seqInt(List.of(from, to, by)).get();
    var expected = SEXPs.integer(new int[] {1, 2, 3, 4, 5});
    assertEquals(res, expected);
  }

  @Test
  public void testSeqIntRealVector() {
    var from = SEXPs.real(1.0);
    var to = SEXPs.real(5.0);
    var by = SEXPs.real(1.0);
    var res = ConstantFolding.seqInt(List.of(from, to, by)).get();
    var expected = SEXPs.real(new double[] {1.0, 2.0, 3.0, 4.0, 5.0});
    assertEquals(res, expected);
  }


  @Test
  public void testSeqIntRealStep() {
    var from = SEXPs.real(1.0);
    var to = SEXPs.real(2.0);
    var by = SEXPs.real(0.5);
    var res = ConstantFolding.seqInt(List.of(from, to, by)).get();
    var expected = SEXPs.real(new double[] {1.0, 1.5, 2.0});
    assertEquals(res, expected);
  }

  @Test
  public void testSqrtSingleIntegerVector() {
    var a = SEXPs.integer(9);
    var res = ConstantFolding.sqrt(List.of(a)).get();
    var expected = SEXPs.real(3.0);
    assertEquals(res, expected);
  }

  @Test
  public void testSqrtSingleRealVector() {
    var b = SEXPs.real(9.0);
    var res2 = ConstantFolding.sqrt(List.of(b)).get();
    var expected2 = SEXPs.real(3.0);
    assertEquals(res2, expected2);
  }

  @Test
  public void testCIntegerVectors() {
    var a = SEXPs.integer(new int[] {1, 2});
    var b = SEXPs.integer(new int[] {3, 4});
    var res = ConstantFolding.c(List.of(a, b)).get();
    var expected = SEXPs.integer(new int[] {1, 2, 3, 4});
    assertEquals(res, expected);
  }

  @Test
  public void testCRealVectors() {
    var a = SEXPs.real(new double[] {1.1, 2.2});
    var b = SEXPs.real(new double[] {3.3, 4.4});
    var res = ConstantFolding.c(List.of(a, b)).get();
    var expected = SEXPs.real(new double[] {1.1, 2.2, 3.3, 4.4});
    assertEquals(res, expected);
  }


  @Test
  public void testColonIntegerRange() {
    var from = SEXPs.integer(1);
    var to = SEXPs.integer(5);
    var res = ConstantFolding.colon(List.of(from, to)).get();
    var expected = SEXPs.integer(new int[] {1, 2, 3, 4, 5});
    assertEquals(res, expected);
  }

  @Test
  public void testColonDescendingRange() {
    var from = SEXPs.integer(5);
    var to = SEXPs.integer(1);
    var res = ConstantFolding.colon(List.of(from, to)).get();
    var expected = SEXPs.integer(new int[] {5, 4, 3, 2, 1});
    assertEquals(res, expected);
  }

  @Test
  public void testColonRealRange() {
    var from = SEXPs.real(1.0);
    var to = SEXPs.real(5.0);
    var res = ConstantFolding.colon(List.of(from, to)).get();
    var expected = SEXPs.integer(new int[] {1, 2, 3, 4, 5});
    assertEquals(res, expected);
  }


  @Test
  public void textExp() {
    var a = SEXPs.real(new double[] {2, 4});
    var b = SEXPs.real(new double[] {2, 3});
    var res = ConstantFolding.pow(List.of(a, b)).get();
    var expected = SEXPs.real(new double[] {4, 64});
    assertEquals(res, expected);
  }
}
