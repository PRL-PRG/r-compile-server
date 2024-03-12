package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
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
}
