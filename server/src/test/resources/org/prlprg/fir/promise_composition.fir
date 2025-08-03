fun main {
  () --> v(I) { reg r1:p(I -), reg r2:p(I -), reg r:v(I)o, reg r3:p(v(I) -), reg r4:v(I), reg r5:I, reg r6:I |
    r1 = prom<I ->{ return 100; };
    r2 = prom<I ->{ return 200; };

    r3 = prom<v(I) ->{
    r5 = force r1;
    r6 = force r2;
    r = [r5, r6, 300];
    return use r;
    };
    r4 = force r3;
    return r4;
  }
}
