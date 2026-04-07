fun main() {
  () -~> I { var x:v1(I)?, reg rx0:v1(I)?, reg r1:v1(I), reg r1u:I, reg rx1:I, reg rx1b:v1(I), reg rx2:v1(I)?, reg r:p(v1(I) ~), reg r0:I, reg r2:v1(I) |
    mkenv;
    st x = <int 0>;

    r = prom<v1(I) ~>{
      rx0 = ld x;
      r1 = rx0 as v1(I);
      r1u = unbox<v1(I) --> I>(r1);
      rx1 = `+`< I,I --> I >(1, r1u);
      rx1b = box<I --> v1(I)>(rx1);
      st x = rx1b;
      rx2 = ld x;
      r2 = rx2 as v1(I);
      return r2;
    };

    r0 = force_twice< p(v1(I) ~) -~> I >(r);
    popenv;
    return r0;
  }
}

fun force_twice(r) {
  (reg r:p(v1(I) ~)) -~> I { reg r1:v1(I), reg r1u:I |
    force r;
    r1 = force r;
    r1u = unbox<v1(I) --> I>(r1);
    return r1u;
  }
}


