fun main() {
  () -+> I { reg r:I |
    mkenv;
    f< *,* --> I >(<int 1>, <real 2.0>);
    r = f< *,* --> I >(<int 3>, <int 4>);
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
    return 24;
  }
  (reg a:v1(I), reg b:v1(R)) --> I { reg r:I |
    r = unbox<v1(I) --> I>(a);
    return 24;
  }
}
