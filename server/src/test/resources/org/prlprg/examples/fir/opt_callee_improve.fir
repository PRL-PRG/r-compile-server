fun main() {
  () --> I { reg r:I |
    r = f< * --> I >(<int 42>);
    return r;
  }
}

fun f(r) {
  (reg r:*) --> I { |
    return 24;
  }
  (reg r:v1(I)) --> I { reg r1:I |
    r1 = unbox<v1(I) --> I>(r);
    return r1;
  }
}