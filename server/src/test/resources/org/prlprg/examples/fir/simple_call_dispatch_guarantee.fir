fun main() {
  () --> v(I)f { reg r1:v(I)o |
    r1 = g?< --> v(I)f >();
    return consume r1;
  }
}

fun g() {
  () --> v(I)f { reg r:v(I)o |
    r = v(I)[1, 2];
    return consume r;
  }
}
