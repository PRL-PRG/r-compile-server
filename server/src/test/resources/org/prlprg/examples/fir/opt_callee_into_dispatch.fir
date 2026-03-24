fun main() {
  () --> V { reg r:V |
    r = <int 42> as V;
    # after: f%< V --> I >(r);
    f< V --> I >(r);
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
