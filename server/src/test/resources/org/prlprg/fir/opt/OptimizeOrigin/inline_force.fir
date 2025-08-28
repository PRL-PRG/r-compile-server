fun main {
  () -+> I { |
    f(42);
    return 42;
  }
}

fun f {
  # after: (reg r0:I) --> I { reg r1:p(I -) |
  (reg r0:I) --> I { reg r1:p(I -), reg r2:I |
    r1 = prom<I ->{
      return r0;
    };
    # after: goto L0();
    r2 = force r1;

    # after: L0():

    # after: return r0;
    return r2;
  }
}