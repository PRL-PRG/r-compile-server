fun main() {
  () --> v(I) { reg r1:p(v1(I) -), reg r2:p(v1(I) -), reg r:v(I)o, reg r3:p(v(I) -), reg r4:v(I), reg r5:v1(I), reg r5u:I, reg r6:v1(I), reg r6u:I |
    r1 = prom<v1(I) ->{ return <int 100>; };
    r2 = prom<v1(I) ->{ return <int 200>; };

    r3 = prom<v(I) ->{
      r5 = force r1;
      r6 = force r2;
      r5u = unbox<v1(I) --> I>(r5);
      r6u = unbox<v1(I) --> I>(r6);
      r = v(I)[r5u, r6u, 300];
      return consume r;
    };
    r4 = force r3;
    return r4;
  }
}
