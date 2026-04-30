fun main() {
  () --> v(I)f { reg r1:v(I)o |
    # type-error: Can't assign it to r1: can't assign v(I) to v(I)o
    r1 = g%< v1(I) --> v(I) >(<int 42>);
    return consume r1;
  }
}

fun g(x) {
  (reg x:*) -+> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:V) --> v(I) { reg r:v(I) |
    r = v(I)[1, 2];
    return r;
  }
  (reg x:v1(I)) --> v(I)f { reg r:v(I)o |
    r = v(I)[1, 2];
    return consume r;
  }
}
