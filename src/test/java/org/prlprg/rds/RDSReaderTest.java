package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import org.junit.jupiter.api.Test;

import org.prlprg.RPlatform;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.RealSXP;

import java.util.Objects;

public class RDSReaderTest {

    @Test
    public void testInts() throws Exception {
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("ints.rds")));
        if (sexp instanceof IntSXP ints) {
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
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("lgls.rds")));
        if (sexp instanceof LglSXP logs) {
            assertEquals(Logical.FALSE, logs.get(0));
            assertEquals(Logical.TRUE, logs.get(1));
            assertEquals(Logical.NA, logs.get(2));
        } else {
            fail("Expected LglSXP");
        }
    }

    @Test
    public void testReals() throws Exception {
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("reals.rds")));
        if (sexp instanceof RealSXP reals) {
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
    public void testList() throws Exception {
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("list.rds")));

        System.out.println(sexp);
    }

    @Test
    public void testClosure() throws Exception {
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("closure.rds")));

        System.out.println(sexp);
    }

    @Test
    public void testClosureBC() throws Exception {
        // function(x, y) "abc" + x + length(y)
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("closure-bc.rds")));

        System.out.println(sexp);

    }

    @Test
    public void testClosureBC2() throws Exception {
        // function(a,b,c) f(a+b,length(b),c)
        var sexp = RDSReader.readStream(Objects.requireNonNull(getClass().getResourceAsStream("closure-bc2.rds")));

        System.out.println(sexp);
    }

    // TODO: "closure-install.packages.rds"
}
