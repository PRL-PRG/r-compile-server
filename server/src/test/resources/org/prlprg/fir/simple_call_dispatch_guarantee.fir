fun main(...) {
  () --> v(I)f { reg r1:v(I)o |
    r1 = g();
    return use r1;
  }
}

fun g(...) {
  () --> v(I)f { reg r:v(I)o |
    r = [1, 2];
    return use r;
  }
  --> v(I)f
}
