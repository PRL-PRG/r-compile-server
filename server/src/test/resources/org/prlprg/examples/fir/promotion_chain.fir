fun main() {
  () -~> v(I) {
    mkenv;
    r0: p(v(I) ~) = prom<v(I) ~>{
      r2: p(v1(I) -) = prom<v1(I) ->{
        return <int 10>;
      };
      rx0: v1(I) = force r2;
      st x = rx0;
      r3: p(v1(I) -) = prom<v1(I) ->{
        return <int 20>;
      };
      ry0: v1(I) = force r3;
      st y = ry0;
      rx1: * = ld x;
      r4: v1(I) = rx1 as v1(I);
      r4u: I = unbox< v1(I) --> I >(r4);
      ry1: * = ld y;
      r5: v1(I) = ry1 as v1(I);
      r5u: I = unbox< v1(I) --> I >(r5);
      r: v(I)o = v(I)[r4u, r5u];
      return consume r;
    };
    r1: v(I) = force r0;
    popenv;
    return r1;
  }
}
