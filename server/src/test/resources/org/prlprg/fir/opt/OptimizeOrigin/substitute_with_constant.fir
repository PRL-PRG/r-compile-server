fun main() {
  # after: () --> I { |
  () --> I { reg r0:I, reg r1:I, reg r2:I |
    # after:
    r0 = 42;
    # after:
    r1 = r0;
    # after:
    r2 = r1;
    # after: return 42;
    return r2;
  }
}