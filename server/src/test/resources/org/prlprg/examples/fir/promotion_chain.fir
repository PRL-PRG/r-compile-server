fun main() {
  () --> v(I) { var x:v1(I)?, var y:v1(I)?, reg rx0:v1(I), reg ry0:v1(I), reg rx1:v1(I)?, reg ry1:v1(I)?, reg r:v(I)o, reg r0:p(v(I) -), reg r1:v(I), reg r2:p(v1(I) -), reg r3:p(v1(I) -), reg r4:v1(I), reg r4u:I, reg r5:v1(I), reg r5u:I |
    mkenv;
    r0 = prom<v(I) ->{
      r2 = prom<v1(I) ->{ return <int 10>; };
      rx0 = force r2;
      st x = rx0;
      r3 = prom<v1(I) ->{ return <int 20>; };
      ry0 = force r3;
      st y = ry0;
      rx1 = ld x;
      r4 = rx1 as v1(I);
      r4u = unbox<v1(I) --> I>(r4);
      ry1 = ld y;
      r5 = ry1 as v1(I);
      r5u = unbox<v1(I) --> I>(r5);
      r = v(I)[r4u, r5u];
      return consume r;
    };
    r1 = force r0;
    popenv;
    return r1;
  }
}
