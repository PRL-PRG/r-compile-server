package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.Tests;

public class RDSReaderTest implements Tests {

  @Test
  public void testInts() throws Exception {
    var sexp = RDSReader.readStream(getResourceAsStream("ints.rds"));
    if (sexp instanceof IntSXP ints) {
      assertEquals(6, ints.size());
      assertEquals(Constants.INT_MIN, ints.get(0));
      assertEquals(-1, ints.get(1));
      assertEquals(0, ints.get(2));
      assertEquals(Constants.NA_INT, ints.get(3));
      assertEquals(1, ints.get(4));
      assertEquals(Integer.MAX_VALUE, ints.get(5));
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testLgls() throws Exception {
    var sexp = RDSReader.readStream(getResourceAsStream("lgls.rds"));
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
    var sexp = RDSReader.readStream(getResourceAsStream("reals.rds"));
    if (sexp instanceof RealSXP reals) {
      assertEquals(6, reals.size());
      // TODO: R double min are different - should be all be based on RPlatform
      // assertEquals(nums[0], Double.MIN_VALUE);
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
  public void testFakeList() throws Exception {
    var sexp = RDSReader.readStream(getResourceAsStream("list.rds"));
    if (sexp instanceof ListSXP list) {
      assertEquals(3, list.size());
      assertEquals(new TaggedElem("a", SEXPs.integer(4)), list.get(0));
      assertEquals(new TaggedElem(SEXPs.real(3.5)), list.get(1));
      assertEquals(new TaggedElem("c", SEXPs.logical(Logical.TRUE)), list.get(2));
    } else if (sexp instanceof VecSXP fakeList) {
      // ???: R reads and writes the lists as a vector with the "names" attr?
      assertEquals(3, fakeList.size());
      assertEquals(SEXPs.integer(4), fakeList.get(0));
      assertEquals(SEXPs.real(3.5), fakeList.get(1));
      assertEquals(SEXPs.logical(Logical.TRUE), fakeList.get(2));
      var names = Objects.requireNonNull(fakeList.attributes()).get("names");
      if (names instanceof StrSXP namesStrs) {
        assertEquals(3, namesStrs.size());
        assertEquals("a", namesStrs.get(0));
        assertEquals("", namesStrs.get(1));
        assertEquals("c", namesStrs.get(2));
      } else {
        fail("Expected names attribute in \"fake list\" VecSXP");
      }
    } else {
      fail("Expected ListSXP or \"fake list\" VecSXP with names");
    }
  }

  @Test
  public void testList2() throws Exception {
    var sexp = RDSReader.readStream(getResourceAsStream("list2.rds"));

    System.out.println(sexp);
  }

  @Test
  public void testClosure() throws Exception {
    // function(x, y) "abc" + x + length(y)
    var sexp = RDSReader.readStream(getResourceAsStream("closure.rds"));

    System.out.println(sexp);
  }

  @Test
  public void testClosureBC() throws Exception {
    // function(x, y) "abc" + x + length(y) <bytecode>
    var sexp = RDSReader.readStream(getResourceAsStream("closure-bc.rds"));

    System.out.println(sexp);
  }

  @Test
  public void testClosureBC2() throws Exception {
    // function(a,b,c) f(a+b,length(b),c) <bytecode>
    var sexp = RDSReader.readStream(getResourceAsStream("closure-bc2.rds"));

    System.out.println(sexp);
  }

  // TODO: "closure-install.packages.rds"
}
