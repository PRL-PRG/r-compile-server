fun main() {
  () --> v(I)f {
    r1: v(I)o = g%< v1(I) --> v(I)f >(<int 42>);
    return consume r1;
  }
}

fun g(x) {
  (reg x:*) -+> v(I) {
    r: v(I) = v(I)[1, 2];
    return r;
  }
  (reg x:v1(I)) --> v(I)f {
    r: v(I)o = v(I)[1, 2];
    return consume r;
  }
}
