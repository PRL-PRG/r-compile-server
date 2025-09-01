fun main {
  () -+> I { |
    f(42);
    return 42;
  }
}

fun f {
  # after: (reg r0:I) --> I { |
  (reg r0:I) --> I { reg r1:I, reg r2:I |
    # after:
    r1 = r0;
    # after:
    r2 = r1;
    # after: return r0;
    return r2;
  }
}