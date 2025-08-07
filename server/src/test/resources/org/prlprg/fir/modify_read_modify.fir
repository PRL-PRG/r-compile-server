fun main {
  () -+> V { reg r0:p(I -), reg r1:p(V +), reg r2:V, reg r3:v(I)o |
    r0 = prom<I ->{ return 42; };
    r1 = prom<V +>{
      r3 = read(r0);
      return use r3;
    };
    r2 = modify(r1);
    return r2;
  }
}

fun modify {
  (reg r:p(V +)) -+> V { reg r0:v(I)o, reg r1:V, reg r2:V |
    r$y = 1;
    r0 = [10, 20, 30];
    r$x = r0;
    r1 = force r;
    r2 = r$y = r1;
    return r2;
  }
}

fun read {
  (reg r:p(V +)) -+> v(I)f { reg rx0:*, reg rx1:v(I), reg ry0:*, reg ry1:I, reg r1:v(I)o, reg r2:I |
    rx0 = r$x;
    rx1 = rx0 as v(I);
    ry0 = r$y;
    ry1 = ry0 as I;
    r2 = rx1[0];
    r1 = [r2, ry1];
    return use r1;
  }
}
