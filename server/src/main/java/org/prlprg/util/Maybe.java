package org.prlprg.util;

/// 3-way boolean
public enum Maybe {
  YES,
  NO,
  MAYBE;

  public Maybe union(Maybe o) {
    return this == o ? this : MAYBE;
  }
}
