package org.prlprg.rds;

import java.util.stream.IntStream;
import org.prlprg.sexp.*;

interface AltRep {
  SEXPType getType();

  String getClassName();

  String getPackageName();

  SEXP unserialize(SEXP state);
}

class AltRepUnserializer {
  private final String className;
  private final String packageName;
  private final SEXPType type;
  private final SEXP state;

  public AltRepUnserializer(ListSXP info, SEXP state) {
    className = ((RegSymSXP) info.get(0).value()).name();
    packageName = ((RegSymSXP) info.get(1).value()).name();
    type = SEXPType.valueOf(((IntSXP) info.get(2).value()).get(0));

    this.state = state;
  }

  public void addAltRep(AltRep altRepClass) {
    throw new UnsupportedOperationException("Not implemented");
  }

  public SEXP unserialize() {
    throw new UnsupportedOperationException("Not implemented");
  }
}

class IntCompactSeq implements AltRep {

  @Override
  public SEXPType getType() {
    return SEXPType.INT;
  }

  @Override
  public String getClassName() {
    return "compact_seq_int";
  }

  @Override
  public String getPackageName() {
    return "base";
  }

  @Override
  public SEXP unserialize(SEXP state) {
    var l = (ListSXP) state;
    var length = ((IntSXP) l.get(0).value()).get(0);
    var start = ((IntSXP) l.get(1).value()).get(0);
    var direction = ((IntSXP) l.get(2).value()).get(0);

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
