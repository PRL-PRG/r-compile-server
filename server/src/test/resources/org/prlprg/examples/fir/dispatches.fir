fun main() {
  () -~> v(I)f {
    r: v(I)o = f%< v1(I) -~> v(I)f >(<int 42>);
    return consume r;
  }
}

fun f(rx) {
  (reg rx:v1(I)) -~> v(I)f {
    r0: p(v1(I) -) = prom<v1(I) ->{
      return rx;
    };
    r1: p(v1(I) -) = prom<v1(I) ->{
      return <int 0>;
    };
    g%< *,* -~> V >(r0, r1);
    r2: p(v1(I) -) = prom<v1(I) ->{
      return rx;
    };
    r3: p(v1(I) -) = prom<v1(I) ->{
      return <int 4>;
    };
    g< p(v1(I) -),p(v1(I) -) --> v(I)f >(r2, r3);
    r4: p(v1(I) -) = prom<v1(I) ->{
      return <int 5>;
    };
    g< v1(I),p(v1(I) -) --> v(I)f >(rx, r4);
    r5: p(v1(I) -) = prom<v1(I) ->{
      return rx;
    };
    g< p(v1(I) -),v1(I) --> v(I)f >(r5, <int 6>);
    r6: v(I)o = g< v1(I),v1(I) --> v(I)f >(rx, <int 7>);
    return consume r6;
  }
}

fun g(ra, rb) {
  (reg ra:*, reg rb:*) -~> v(I) {
    r0: p(v1(I) -) = ra as p(v1(I) -);
    r1: p(v1(I) -) = rb as p(v1(I) -);
    r2: v1(I) = force r0;
    r3: v1(I) = force r1;
    r4: I = unbox< v1(I) --> I >(r2);
    r5: I = unbox< v1(I) --> I >(r3);
    r6: v(I)o = v(I)[r4, r5];
    return consume r6;
  }
  (reg ra:p(v1(I) -), reg rb:p(v1(I) -)) --> v(I)f {
    r0: v1(I) = force ra;
    r1: v1(I) = force rb;
    r2: I = unbox< v1(I) --> I >(r0);
    r3: I = unbox< v1(I) --> I >(r1);
    r4: v(I)o = v(I)[r2, r3];
    return consume r4;
  }
  (reg ra:v1(I), reg rb:p(v1(I) -)) --> v(I)f {
    r0: I = unbox< v1(I) --> I >(ra);
    r1: v1(I) = force rb;
    r2: I = unbox< v1(I) --> I >(r1);
    r3: v(I)o = v(I)[r0, r2];
    return consume r3;
  }
  (reg ra:p(v1(I) -), reg rb:v1(I)) --> v(I)f {
    r0: v1(I) = force ra;
    r1: I = unbox< v1(I) --> I >(r0);
    r2: I = unbox< v1(I) --> I >(rb);
    r3: v(I)o = v(I)[r1, r2];
    return consume r3;
  }
  (reg ra:v1(I), reg rb:v1(I)) --> v(I)f {
    r0: I = unbox< v1(I) --> I >(ra);
    r1: I = unbox< v1(I) --> I >(rb);
    r2: v(I)o = v(I)[r0, r1];
    return consume r2;
  }
}
