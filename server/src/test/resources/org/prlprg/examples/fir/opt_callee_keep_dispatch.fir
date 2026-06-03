fun main() {
  () -+> V { reg r:V, reg r1:V |
    r = <int 42> as V;
    r1 = <real 4.2> as V;
    f< V --> I >(r);
    return r;
  }
}

fun f(r) {
  (reg r:V) --> I { |
    return 24;
  }
  (reg r:v1(I)) --> I { reg r1:I |
    r1 = unbox<v1(I) --> I>(r);
    return r1;
  }
}
