fun main() {
  () -~> V {
    r: V = <int 42> as V;
    f< V --> I >(r);
    return r;
  }
}

fun f(r) {
  (reg r:*) --> I {
    return 24;
  }
  (reg r:v1(I)) --> I {
    r1: I = unbox< v1(I) --> I >(r);
    return r1;
  }
}
