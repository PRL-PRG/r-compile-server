package org.prlprg.util;

public class Math2 {
  private static final int PERMUTE_SEED = 42;

  /// Returns an index that is a permutation of the given `index` in the range `[0, len)`.
  /// If you call this with every index in `[0, len)`, it will return every index in that range
  /// exactly once.
  ///
  /// [Source](https://andrew-helmer.github.io/permute/)
  public static int permuteIndex(int index, int len) {
    if (len <= 0) {
      throw new IllegalArgumentException("Length must be positive, got: " + len);
    }
    if (index < 0 || index >= len) {
      throw new IndexOutOfBoundsException("Index out of bounds: " + index + " for length " + len);
    }

    // Get "next power of 2" - 1 of `len - 1`
    var mask = Integer.MAX_VALUE >> (Integer.numberOfLeadingZeros(len - 1) - 1);

    // Find a hashed index that is in range.
    do {
      index = permuteHash(index, mask);
    } while (index >= len);
    return index;
  }

  private static int permuteHash(int index, int mask) {
    index ^= PERMUTE_SEED;
    index *= 0xe170893d;
    index ^= PERMUTE_SEED >> 16;
    index ^= (index & mask) >> 4;
    index ^= PERMUTE_SEED >> 8;
    index *= 0x0929eb3f;
    index ^= PERMUTE_SEED >> 23;
    index ^= (index & mask) >> 1;
    index *= 0x6935fa69;
    index ^= (index & mask) >> 11;
    index *= 0x74dcb303;
    index ^= (index & mask) >> 2;
    index *= 0x9e501cc3;
    index ^= (index & mask) >> 2;
    index *= 0xc860a3df;
    index &= mask;
    index ^= index >> 5;
    return index;
  }

  private Math2() {}
}
