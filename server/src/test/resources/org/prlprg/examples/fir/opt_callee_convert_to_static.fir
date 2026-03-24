fun main() {
  # after: () -+> I { reg r:I |
  () -+> I { reg r:I |
    mkenv;
    # after: r = f< v1(I) --> I >(<int 42>);
    r = f%< * --> I >(<int 42>);
    popenv;
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
