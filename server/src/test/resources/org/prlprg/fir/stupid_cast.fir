fun main {
  # type-error: Stupid cast: r0 {:v(I)o} as I will always fail
  () --> I { reg r0:v(I)o, reg r1:I |
    r0 = [1, 2, 3];
    # runtime-error: Type mismatch for cast: expected I, got <int 1, 2, 3> {:v(I)}
    r1 = r0 as I;
    return r1;
  }
}
