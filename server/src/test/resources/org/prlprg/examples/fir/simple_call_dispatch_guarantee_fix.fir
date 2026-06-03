fun main() {
  () --> v(I)f { reg r1:v(I)o |
    r1 = g%< v1(I) --> v(I)f >(<int 42>);
    return consume r1;
  }
}

fun g(x) {
  (reg x:*) -+> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:v1(I)) --> v(I)f { reg r:v(I)o |
    r = v(I)[1, 2];
    return consume r;
  }
}
