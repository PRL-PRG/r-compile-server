package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
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
}
