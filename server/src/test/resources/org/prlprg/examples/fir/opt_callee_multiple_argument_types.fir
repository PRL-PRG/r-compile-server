fun main() {
  () -+> v1(I) {
    mkenv;
    f< *,* --> I >(<int 1>, <real 2.0>);
    r: I = f< *,* --> I >(<int 3>, <int 4>);
    popenv;
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(a, b) {
  (reg a:*, reg b:*) --> I {
    return 24;
  }
  (reg a:v1(I), reg b:v1(I)) --> I {
    r: I = unbox< v1(I) --> I >(b);
    return 24;
  }
  (reg a:v1(I), reg b:v1(R)) --> I {
    r: I = unbox< v1(I) --> I >(a);
    return 24;
  }
}
