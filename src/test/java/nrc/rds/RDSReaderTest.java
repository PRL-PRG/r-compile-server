package nrc.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import org.junit.jupiter.api.Test;

import nrc.RPlatform;
import nrc.sexp.IntSXP;
import nrc.sexp.LglSXP;
import nrc.sexp.RealSXP;
import nrc.sexp.SEXPConsts;

public class RDSReaderTest implements SEXPConsts {

    @Test
    public void testInts() throws Exception {
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("ints.rds"));
        if (sexp instanceof IntSXP ints) {
            assertEquals(-RPlatform.INT_MAX, ints.get(0));
            assertEquals(-1, ints.get(1));
            assertEquals(0, ints.get(2));
            assertEquals(NA_INT, ints.get(3));
            assertEquals(1, ints.get(4));
            assertEquals(RPlatform.INT_MAX, ints.get(5));
        } else {
            fail("Expected IntSXP");
        }
    }

    @Test
    public void testLgls() throws Exception {
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("lgls.rds"));
        if (sexp instanceof LglSXP logs) {
            assertEquals(1, logs.get(0));
            assertEquals(0, logs.get(1));
            assertEquals(NA_LOGICAL, logs.get(2));
        } else {
            fail("Expected LglSXP");
        }
    }

    @Test
    public void testReals() throws Exception {
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("reals.rds"));
        if (sexp instanceof RealSXP reals) {
            // TODO: R double min are different - should be all be based on RPlatform
            // assertEquals(nums[0], Double.MIN_VALUE);
            assertEquals(-1.0, reals.get(1));
            assertEquals(.0, reals.get(2));
            assertEquals(SEXPConsts.NA_REAL, reals.get(3));
            assertEquals(1.0, reals.get(4));
            assertEquals(Double.MAX_VALUE, reals.get(5));
        } else {
            fail("Expected RealSXP");
        }
    }

    @Test
    public void testList() throws Exception {
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("list.rds"));

        System.out.println(sexp);
    }

    @Test
    public void testClosure() throws Exception {
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("closure.rds"));

        System.out.println(sexp);
    }

    @Test
    public void testClosureBC() throws Exception {
        // function(x, y) "abc" + x + length(y)
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("closure-bc.rds"));

        System.out.println(sexp);

    }

    @Test
    public void testClosureBC2() throws Exception {
        // function(a,b,c) f(a+b,length(b),c)
        var sexp = RDSReader.readStream(getClass().getResourceAsStream("closure-bc2.rds"));

        System.out.println(sexp);
    }

    // TODO: "closure-install.packages.rds"
}
