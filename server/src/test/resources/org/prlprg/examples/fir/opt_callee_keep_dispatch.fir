fun main() {
  () -+> V {
    r: V = <int 42> as V;
    r1: V = <real 4.2> as V;
    f< V --> I >(r);
    return r;
  }
}

fun f(r) {
  (r:V) --> I {
    return 24;
  }
  (r:v1(I)) --> I {
    r1: I = unbox< v1(I) --> I >(r);
    return r1;
  }
}
