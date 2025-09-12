fun main() {
  () --> v(I)f { reg r1:v(I)o, reg r2:v(I)o, reg r3:v(I)o |
    r1 = v(I)[1, 2, 3];
    r2 = v(I)[4, 5, 6];
    r3 = f.0(use r1, r2);
    return use r3;
  }
}

fun f(...) {
  (reg r1:v(I)o, reg r2:v(I)b) --> v(I)f { reg rx:v(I)o, reg ry:v(I)o |
    rx = use r1;
    ry = dup r2;
    rx[0] = 1;
    ry[2] = 3;
    return use ry;
  }
}
