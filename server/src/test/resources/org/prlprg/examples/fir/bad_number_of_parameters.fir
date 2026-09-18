fun main() {
  () --> v1(I) {
    r1: I = g< I --> I >(0);
    r1u: v1(I) = box< I --> v1(I) >(r1);
    return r1u;
  }
}

fun g(r) {
  # type-error: Version has 0 parameters, but function has 1
  () --> I {
    return 0;
  }
  (r0:I) --> I {
    return 1;
  }
  # type-error: Version has 2 parameters, but function has 1
  (r0:I, r1:I) --> I {
    return 2;
  }
  # type-error: Version has 3 parameters, but function has 1
  (r0:I, r1:I, r2:I) --> I {
    return 3;
  }
  # type-error: Version has 4 parameters, but function has 1
  (r0:I, r1:I, r2:I, r3:I) --> I {
    return 3;
  }
}
