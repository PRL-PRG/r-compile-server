fun main() {
  () --> v(I)f { reg r:v(I)o |
    r = f%< I --> v(I)f >(42);
    return consume r;
  }
}

fun f(rx) {
  (reg rx:I) --> v(I)f { reg r0:p(I -), reg r1:p(I -), reg r2:p(I -), reg r3:p(I -), reg r4:p(I -), reg r5:p(I -), reg r6:v(I)o |
    r0 = prom<I ->{ return rx; };
    r1 = prom<I ->{ return 0; };
    g%< *,* --> V >(r0, r1);

    r2 = prom<I ->{ return rx; };
    r3 = prom<I ->{ return 4; };
    g< p(I -),p(I -) --> v(I)f >(r2, r3);

    r4 = prom<I ->{ return 5; };
    g< I,p(I -) --> v(I)f >(rx, r4);

    r5 = prom<I ->{ return rx; };
    g< p(I -),I --> v(I)f >(r5, 6);

    r6 = g< I,I --> v(I)f >(rx, 7);
    return consume r6;
  }
}

fun g(ra, rb) {
  (reg ra:*, reg rb:*) --> v(I)f { reg r0:p(I -), reg r1:p(I -), reg r2:I, reg r3:I, reg r4:v(I)o |
    r0 = ra as p(I -);
    r1 = rb as p(I -);
    r2 = force r0;
    r3 = force r1;
    r4 = v(I)[r2, r3];
    return consume r4;
  }
  (reg ra:p(I -), reg rb:p(I -)) --> v(I)f { reg r0:I, reg r1:I, reg r2:v(I)o |
    r0 = force ra;
    r1 = force rb;
    r2 = v(I)[r0, r1];
    return consume r2;
  }
  (reg ra:I, reg rb:p(I -)) --> v(I)f { reg r0:I, reg r1:v(I)o |
    r0 = force rb;
    r1 = v(I)[ra, r0];
    return consume r1;
  }
  (reg ra:p(I -), reg rb:I) --> v(I)f { reg r0:I, reg r1:v(I)o |
    r0 = force ra;
    r1 = v(I)[r0, rb];
    return consume r1;
  }
  (reg ra:I, reg rb:I) --> v(I)f { reg r0:v(I)o |
    r0 = v(I)[ra, rb];
    return consume r0;
  }
}
