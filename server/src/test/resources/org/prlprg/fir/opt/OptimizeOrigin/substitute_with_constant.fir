fun main {
  # after: () --> I { |
  () --> I { reg r0:I, reg r1:I, reg r2:I |
    # after: 42;
    r0 = 42;
    # after: 42;
    r1 = r0;
    # after: 42;
    r2 = r1;
    # after: return 42;
    return r2;
  }
}