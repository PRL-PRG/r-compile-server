fun main {
  () -+> I { |
    f(42);
    return 42;
  }
}

fun f {
  # after: (reg r0:I) --> I { |
  (reg r0:I) --> I { reg r1:I |
    # after: r0;
    r1 = force? r0;
    # after: return r0;
    return r1;
  }
}