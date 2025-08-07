fun main {
  () -+> v(I) { reg r0:v(I)o, reg r1:p(I -), reg r2:p(I -), reg r3:v(I)o, var x:v(I)?, reg rx0:v(I)?, reg rx1:v(I) |
    r0 = [0, 1, 2];
    x = use r0;

    r1 = prom<I ->{ return 42; };
    f(r1);

    # type-error: Can't assign it to r2: expected p(I -), got p(I +)
    r2 = prom<I +>{
      r3 = [3, 4, 5];
      r1$x = r3;
      return 42;
    };
    # runtime-error: No versions match signature and arguments:
    f(r2);

    rx0 = x;
    rx1 = rx0 as v(I);
    return rx1;
  }
}

fun f {
  (reg r:p(I -)) --> I { reg r0:I |
    r0 = force r;
    return r0;
  }
}
