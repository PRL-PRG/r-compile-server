fun main(...) {
  () -+> I { |
    mkenv;
        f(42);
    return 42;
  }
}

fun f(...) {
  # after: (reg r0:I) --> I { |
  (reg r0:I) --> I { reg r1:p(I -), reg r2:I |
    # after:
    r1 = prom<I ->{ return r0; };
    # after:
    r2 = force r1;
    # after: return r0;
    return r2;
  }
}