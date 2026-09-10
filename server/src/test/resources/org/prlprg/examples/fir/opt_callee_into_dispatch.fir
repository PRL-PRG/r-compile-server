fun main() {
  () -~> V {
    r: V = <int 42> as V;
    f< V --> I >(r);
    return r;
  }
}

fun f(r) {
  (r:*) --> I {
    return 24;
  }
  (r:v1(I)) --> I {
    r1: I = unbox< v1(I) --> I >(r);
    return r1;
  }
}
