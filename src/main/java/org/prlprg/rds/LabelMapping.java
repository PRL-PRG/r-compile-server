package org.prlprg.rds;

import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.BcOp;

/**
 * Create labels from GNU-R labels to our labels, or vice versa
 *
 * <p><b>Implementation note:</b> This contains a map of positions in GNU-R bytecode to positions in
 * our bytecode. We need this because every index in our bytecode maps to an instruction, while
 * indexes in GNU-R's bytecode also map to the bytecode version and instruction metadata.
 */
public class LabelMapping {
  private final ImmutableIntArray posMap;

  private LabelMapping(ImmutableIntArray posMap) {
    this.posMap = posMap;
  }

  /** Make a {@link BcLabel} referencing the target from an int referencing the source */
  BcLabel make(int sourceLabel) {
    return new BcLabel(getTarget(sourceLabel));
  }

  /** Extract an int referencing the target from a {@link BcLabel} referencing the source */
  public int extract(BcLabel sourceLabel) {
    return getTarget(sourceLabel.target());
  }

  int getTarget(int sourceLabel) {
    var target = posMap.get(sourceLabel);
    if (target == -1) {
      if (sourceLabel == 0) {
        throw new IllegalArgumentException(
            "Could not get target for source label 0. Note that if"
                + "the source is GNU-R bytecode, GNU-R label 0 is reserved for the version number");
      } else {
        var prev = posMap.get(sourceLabel - 1);
        var next = posMap.get(sourceLabel + 1);
        throw new IllegalArgumentException(
            "Source position "
                + sourceLabel
                + " maps to the middle of target instructions: "
                + " between "
                + prev
                + " and "
                + next);
      }
    }
    return target;
  }

  /** Creates a mapping from GNU-R labels to our labels */
  public static LabelMapping fromGNUR(ImmutableIntArray gnurBC) {
    // add source offset of 1 (position 0 is the version in GNU-R)
    var builder = new LabelMapping.Builder(1, 0);
    for (int i = 1; i < gnurBC.length(); ) {
      try {
        var op = BcOp.valueOf(gnurBC.get(i));
        var size = 1 + op.nArgs();
        builder.step(size, 1);
        i += size;
      } catch (IllegalArgumentException e) {
        throw new IllegalArgumentException(
            "malformed bytecode at " + i + "\nBytecode up to this point: " + builder.build(), e);
      }
    }
    return builder.build();
  }

  /** Creates a mapping from our labels to GNUR labels */
  public static LabelMapping toGNUR(BcCode bc) {
    // add target offset of 1 (position 0 is the version in GNU-R)
    var builder = new LabelMapping.Builder(0, 1);
    for (BcInstr instr : bc) {
      var op = instr.op();
      var size = 1 + op.nArgs();
      builder.step(1, size);
    }
    return builder.build();
  }

  // FIXME: inline
  static class Builder {
    private final ImmutableIntArray.Builder map;
    private int targetPc;

    Builder(int initialSourceOffset, int initialTargetOffset) {
      map = ImmutableIntArray.builder();

      // targetPc should start at initialTargetOffset, and map should be padded by -1 repeated
      // initialSourceOffset times.
      targetPc = initialTargetOffset;
      for (int i = 0; i < initialSourceOffset; i++) {
        map.add(-1);
      }
    }

    /** Step <i>m</i> times in the source bytecode and <i>n</i> times in the target bytecode */
    void step(int sourceOffset, @SuppressWarnings("SameParameteiSexp") int targetOffset) {
      if (sourceOffset < 0 || targetOffset < 0) {
        throw new IllegalArgumentException("offsets must be nonnegative");
      }

      // Add target position
      if (sourceOffset > 0) {
        map.add(targetPc);
      }

      // "allocate" positions for the arguments afterward
      for (int i = 0; i < sourceOffset - 1; i++) {
        map.add(-1);
      }
      targetPc += targetOffset;
    }

    LabelMapping build() {
      // Add the final offset
      map.add(targetPc);
      return new LabelMapping(map.build());
    }
  }
}
