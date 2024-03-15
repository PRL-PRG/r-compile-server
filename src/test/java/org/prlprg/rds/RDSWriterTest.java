package org.prlprg.rds;

import static java.lang.Double.NaN;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.*;
import org.prlprg.util.GNUR;
import org.prlprg.util.Tests;

public class RDSWriterTest implements Tests {
  private final RSession rsession = new TestRSession();

  private final GNUR R = new GNUR(rsession);

  @Test
  public void testInts() throws Exception {
    var ints = SEXPs.integer(5, 4, 3, 2, 1);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, ints);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof IntSXP read_ints) {
      assertEquals(5, read_ints.size());
      assertEquals(5, read_ints.get(0));
      assertEquals(4, read_ints.get(1));
      assertEquals(3, read_ints.get(2));
      assertEquals(2, read_ints.get(3));
      assertEquals(1, read_ints.get(4));
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testInts_withRef() throws Exception {
    var ints = SEXPs.integer(5, 4, 3, 2, 1);
    var output =
        R.eval(
            """
        typeof(input) == "integer" && identical(input, c(5L, 4L, 3L, 2L, 1L))
            """,
            ints);

    if (output instanceof LglSXP read_lgls) {
      assertEquals(1, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testVecAttributes() throws Exception {
    var attrs =
        new Attributes.Builder()
            .put("a", SEXPs.integer(1))
            .put("b", SEXPs.logical(Logical.TRUE))
            .build();
    var ints = SEXPs.integer(1, attrs);

    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, ints);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof IntSXP read_ints) {
      assertEquals(1, read_ints.size());
      assertEquals(1, read_ints.get(0));
      assertEquals(attrs, read_ints.attributes());
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testLgls() throws Exception {
    var lgls = SEXPs.logical(Logical.TRUE, Logical.FALSE, Logical.NA);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, lgls);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof LglSXP read_lgls) {
      assertEquals(3, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
      assertEquals(Logical.FALSE, read_lgls.get(1));
      assertEquals(Logical.NA, read_lgls.get(2));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testReals() throws Exception {
    var reals = SEXPs.real(5.2, 4.0, Constants.NA_REAL, 2.0, NaN, 1.0);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, reals);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof RealSXP read_reals) {
      assertEquals(6, read_reals.size());
      assertEquals(5.2, read_reals.get(0));
      assertEquals(4.0, read_reals.get(1));
      assertEquals(Constants.NA_REAL, read_reals.get(2));
      assertEquals(2.0, read_reals.get(3));
      assertEquals(NaN, read_reals.get(4));
      assertEquals(1.0, read_reals.get(5));
    } else {
      fail("Expected RealSXP");
    }
  }

  @Test
  public void testNull() throws Exception {
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, SEXPs.NULL);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    assertEquals(SEXPs.NULL, sexp);
  }

  @Test
  public void testVec() throws Exception {
    var vec =
        SEXPs.vec(SEXPs.integer(1, 2, 3), SEXPs.logical(Logical.TRUE, Logical.FALSE, Logical.NA));
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, vec);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof VecSXP read_vec) {
      assertEquals(2, read_vec.size());
      if (read_vec.get(0) instanceof IntSXP read_ints) {
        assertEquals(3, read_ints.size());
        assertEquals(1, read_ints.get(0));
        assertEquals(2, read_ints.get(1));
        assertEquals(3, read_ints.get(2));
      } else {
        fail("Expected IntSXP for the 1st element of the VecSXP");
      }
      if (read_vec.get(1) instanceof LglSXP read_lgls) {
        assertEquals(3, read_lgls.size());
        assertEquals(Logical.TRUE, read_lgls.get(0));
        assertEquals(Logical.FALSE, read_lgls.get(1));
        assertEquals(Logical.NA, read_lgls.get(2));
      } else {
        fail("Expected LglSXP for the 2nd element of the VecSXP");
      }
    } else {
      fail("Expected VecSXP");
    }
  }

  @Test
  public void testList() throws Exception {
    var elems =
        new TaggedElem[] {
          new TaggedElem("a", SEXPs.integer(1)),
          new TaggedElem("b", SEXPs.logical(Logical.TRUE)),
          new TaggedElem("c", SEXPs.real(3.14, 2.71))
        };
    var list = SEXPs.list(elems, Attributes.NONE);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(rsession, output, list);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof ListSXP l) {
      assertEquals(3, l.size());
      assertEquals("a", l.get(0).tag());
      if (l.get(0).value() instanceof IntSXP i) {
        assertEquals(1, i.get(0));
      } else {
        fail("Expected IntSXP for the 1st element of the ListSXP");
      }
      assertEquals("b", l.get(1).tag());
      if (l.get(1).value() instanceof LglSXP lgl) {
        assertEquals(Logical.TRUE, lgl.get(0));
      } else {
        fail("Expected LglSXP for the 2nd element of the ListSXP");
      }
      assertEquals("c", l.get(2).tag());
      if (l.get(2).value() instanceof RealSXP r) {
        assertEquals(3.14, r.get(0));
        assertEquals(2.71, r.get(1));
      } else {
        fail("Expected RealSXP for the 3rd element of the ListSXP");
      }
    } else {
      fail("Expected ListSXP");
    }
  }
}
