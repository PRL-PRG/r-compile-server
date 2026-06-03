fun main() {
  () -~> v(I)f { reg r:v(I)o |
    r = f%< v1(I) -~> v(I)f >(<int 42>);
    return consume r;
  }
}

fun f(rx) {
  (reg rx:v1(I)) -~> v(I)f { reg r0:p(v1(I) -), reg r1:p(v1(I) -), reg r2:p(v1(I) -), reg r3:p(v1(I) -), reg r4:p(v1(I) -), reg r5:p(v1(I) -), reg r6:v(I)o |
    r0 = prom<v1(I) ->{ return rx; };
    r1 = prom<v1(I) ->{ return <int 0>; };
    g%< *,* -~> V >(r0, r1);

    r2 = prom<v1(I) ->{ return rx; };
    r3 = prom<v1(I) ->{ return <int 4>; };
    g< p(v1(I) -),p(v1(I) -) --> v(I)f >(r2, r3);

    r4 = prom<v1(I) ->{ return <int 5>; };
    g< v1(I),p(v1(I) -) --> v(I)f >(rx, r4);

    r5 = prom<v1(I) ->{ return rx; };
    g< p(v1(I) -),v1(I) --> v(I)f >(r5, <int 6>);

    r6 = g< v1(I),v1(I) --> v(I)f >(rx, <int 7>);
    return consume r6;
  }
}

fun g(ra, rb) {
  (reg ra:*, reg rb:*) -~> v(I) { reg r0:p(v1(I) -), reg r1:p(v1(I) -), reg r2:v1(I), reg r3:v1(I), reg r4:I, reg r5:I, reg r6:v(I)o |
    r0 = ra as p(v1(I) -);
    r1 = rb as p(v1(I) -);
    r2 = force r0;
    r3 = force r1;
    r4 = unbox<v1(I) --> I>(r2);
    r5 = unbox<v1(I) --> I>(r3);
    r6 = v(I)[r4, r5];
    return consume r6;
  }
  (reg ra:p(v1(I) -), reg rb:p(v1(I) -)) --> v(I)f { reg r0:v1(I), reg r1:v1(I), reg r2:I, reg r3:I, reg r4:v(I)o |
    r0 = force ra;
    r1 = force rb;
    r2 = unbox<v1(I) --> I>(r0);
    r3 = unbox<v1(I) --> I>(r1);
    r4 = v(I)[r2, r3];
    return consume r4;
  }
  (reg ra:v1(I), reg rb:p(v1(I) -)) --> v(I)f { reg r0:I, reg r1:v1(I), reg r2:I, reg r3:v(I)o |
    r0 = unbox<v1(I) --> I>(ra);
    r1 = force rb;
    r2 = unbox<v1(I) --> I>(r1);
    r3 = v(I)[r0, r2];
    return consume r3;
  }
  (reg ra:p(v1(I) -), reg rb:v1(I)) --> v(I)f { reg r0:v1(I), reg r1:I, reg r2:I, reg r3:v(I)o |
    r0 = force ra;
    r1 = unbox<v1(I) --> I>(r0);
    r2 = unbox<v1(I) --> I>(rb);
    r3 = v(I)[r1, r2];
    return consume r3;
  }
  (reg ra:v1(I), reg rb:v1(I)) --> v(I)f { reg r0:I, reg r1:I, reg r2:v(I)o |
    r0 = unbox<v1(I) --> I>(ra);
    r1 = unbox<v1(I) --> I>(rb);
    r2 = v(I)[r0, r1];
    return consume r2;
  }
}
