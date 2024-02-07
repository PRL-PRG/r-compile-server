package org.prlprg.bc;

import com.google.common.base.Objects;
import com.google.common.primitives.ImmutableIntArray;
import com.google.errorprone.annotations.CanIgnoreReturnValue;

/** A branch instruction destination. */
public final class BcLabel {
  /** Index of the instruction the branch instruction jumps to. */
  private int target = -1;

  public BcLabel(int target) {
    this.target = target;
  }

  public int getTarget() {
    return target;
  }

  void setTarget(int target) {
    this.target = target;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BcLabel bcLabel)) return false;
    return target == bcLabel.target;
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(target);
  }

  @Override
  public String toString() {
    return "BcLabel(" + target + ')';
  }

  /**
   * Create labels from GNU-R labels.
   *
   * @implNote This contains a map of positions in GNU-R bytecode to positions in our bytecode. We
   *     need this because every index in our bytecode maps to an instruction, while indexes in
   *     GNU-R's bytecode also map to the bytecode version and instruction metadata.
   */
  static class Factory {
    private final ImmutableIntArray posMap;

    private Factory(ImmutableIntArray posMap) {
      this.posMap = posMap;
    }

    /** Create a label from a GNU-R label. */
    BcLabel make(int gnurLabel) {
      if (gnurLabel == 0) {
        throw new IllegalArgumentException("GNU-R label 0 is reserved for the version number");
      }

      var target = posMap.get(gnurLabel);
      if (target == -1) {
        var gnurEarlier = gnurLabel - 1;
        int earlier;
        do {
          earlier = posMap.get(gnurEarlier);
        } while (earlier == -1);
        var gnurLater = gnurLabel + 1;
        int later;
        do {
          later = posMap.get(gnurLater);
        } while (later == -1);
        throw new IllegalArgumentException(
            "GNU-R position maps to the middle of one of our instructions: "
                + gnurLabel
                + " between "
                + earlier
                + " and "
                + later);
      }
      return new BcLabel(target);
    }

    /**
     * Create an object which creates labels from GNU-R labels, by building the map of positions in
     * GNU-R bytecode to positions in our bytecode (see {@link Factory} implNote).
     */
    static class Builder {
      private final ImmutableIntArray.Builder map = ImmutableIntArray.builder();
      private int targetPc = 0;

      Builder() {
        // Add initial mapping of 1 -> 0 (version # is 0)
        map.add(-1);
        map.add(0);
      }

      /** Step <i>m</i> times in the source bytecode and <i>n</i> times in the target bytecode */
      @CanIgnoreReturnValue
      Builder step(int sourceOffset, @SuppressWarnings("SameParameterValue") int targetOffset) {
        if (sourceOffset < 0 || targetOffset < 0) {
          throw new IllegalArgumentException("offsets must be nonnegative");
        }

        targetPc += targetOffset;
        // Offsets before sourceOffset map to the middle of the previous instruction
        for (int i = 0; i < sourceOffset - 1; i++) {
          map.add(-1);
        }
        // Add target position
        if (sourceOffset > 0) {
          map.add(targetPc);
        }

        return this;
      }

      Factory build() {
        return new Factory(map.build());
      }
    }
  }
}
