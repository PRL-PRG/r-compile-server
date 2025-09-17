fun main() {
  () --> I { var x:I?, reg rx0:I?, reg rx1:I, reg rx2:I?, reg r:p(I -), reg r0:I, reg r1:I, reg r2:I |
    mkenv;
    st x = 0;

    r = prom<I ->{
      rx0 = ld x;
      r1 = rx0 as I;
      rx1 = inc.0(r1);
      st x = rx1;
      rx2 = ld x;
      r2 = rx2 as I;
      return r2;
    };

    r0 = force_twice< p(I -) --> I >(r);
    popenv;
    return r0;
  }
}

fun force_twice(...) {
  (reg r:p(I -)) --> I { reg r1:I |
    force r;
    r1 = force r;
    return r1;
  }
}

fun inc(...) {
  (reg r:I) --> I { ... }
}
