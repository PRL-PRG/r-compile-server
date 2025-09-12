fun main(...) {
  () --> v(I)f { reg r:v(I)o, reg r0:I, reg r1:I, reg r2:I |
    r = [1, 2, 3, 4, 5];
    r0 = r[2];
    r[0] = r0;
    r1 = r[1];
    r2 = inc.0(r1);
    r[4] = r2;
    return use r;
  }
}

fun inc(...) {
  (reg r:I) --> I { ... }
}
