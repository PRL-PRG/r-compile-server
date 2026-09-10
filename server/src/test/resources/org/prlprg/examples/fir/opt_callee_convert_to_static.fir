fun main() {
  () -+> v1(I) {
    mkenv;
    r: v1(I) = f%< * --> v1(I) >(<int 42>);
    popenv;
    return r;
  }
}

fun f(r) {
  (r:*) --> v1(I) {
    return <int 24>;
  }
  (r:v1(I)) --> v1(I) {
    return r;
  }
}
