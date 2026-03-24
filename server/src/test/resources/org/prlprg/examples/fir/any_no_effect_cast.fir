fun main() {
  () --> V { reg r0:v1(I), reg r1:p?(v1(I) -), reg r2:p(v1(I) -), reg r3:p?(v1(I) -), reg r4:V, reg r5:V |
    r0 = <int 42>;
    r1 = r0 as p?(v1(I) -);
    r2 = prom<v1(I) ->{ return <int 42>; };
    r3 = r2 as p?(v1(I) -);
    r4 = force? r1;
    r5 = force? r3;
    return r5;
  }
}
