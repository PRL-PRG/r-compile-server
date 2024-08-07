package org.prlprg.rds;

import java.util.stream.IntStream;
import org.prlprg.sexp.*;

/**
 * For all the altrep classes defined for base. See: <a
 * href="https://github.com/wch/r-source/blob/abaa89600f4f024a80121ebb95fc4d80ea0a9b12/src/main/altclasses.c">...</a>
 */
public class BaseAltrRep {
  public static class CompactIntSeq implements AltRep {

    @Override
    public SEXPType getType() {
      return SEXPType.INT;
    }

    @Override
    public String getClassName() {
      return "compact_intseq";
    }

    @Override
    public String getPackageName() {
      return "base";
    }

    @Override
    public SEXP unserialize(SEXP state) {
      var l = (RealSXP) state;
      var length = l.get(0).intValue(); // we might need a double there though
      var start = l.get(1).intValue();
      var direction = l.get(2).intValue();

      if (direction == 1) {
        return SEXPs.integer(IntStream.rangeClosed(start, start + length).toArray());
      } else {
        return SEXPs.integer(
            IntStream.rangeClosed(start - length, start)
                .map(i -> start - length + (start - 1 - i))
                .toArray());
      }
    }
  }
}
