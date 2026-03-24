fun main() {
  # after: () -+> I { reg r:I |
  () -+> I { reg r:I |
    mkenv;
    # after: f< v1(I),v1(R) --> I >(1, 2.0);
    f%< *,* --> I >(<int 1>, <real 2.0>);
    # after: r = f< v1(I),v1(I) --> I >(3, 4);
    r = f%< *,* --> I >(<int 3>, <int 4>);
    popenv;
    return r;
  }
}

fun f(a, b) {
  (reg a:*, reg b:*) --> I { |
    return 24;
  }
  (reg a:v1(I), reg b:v1(I)) --> I { reg r:I |
    r = unbox<v1(I) --> I>(b);
    return r;
  }
  (reg a:v1(I), reg b:v1(R)) --> I { reg r:I |
    r = unbox<v1(I) --> I>(a);
    return r;
  }
}
