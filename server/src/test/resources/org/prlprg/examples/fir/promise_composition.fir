fun main() {
  () --> v(I) {
    r1: p(v1(I) -) = prom<v1(I) ->{
      return <int 100>;
    };
    r2: p(v1(I) -) = prom<v1(I) ->{
      return <int 200>;
    };
    r3: p(v(I) -) = prom<v(I) ->{
      r5: v1(I) = force r1;
      r6: v1(I) = force r2;
      r5u: I = unbox< v1(I) --> I >(r5);
      r6u: I = unbox< v1(I) --> I >(r6);
      r: v(I)o = v(I)[r5u, r6u, 300];
      return consume r;
    };
    r4: v(I) = force r3;
    return r4;
  }
}
