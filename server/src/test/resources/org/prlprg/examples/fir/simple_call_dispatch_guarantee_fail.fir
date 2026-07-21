fun main() {
  # type-error: Function effects mismatch: + don't subset -
  () --> v(I)f {
    # type-error: Can't assign it to r1: can't assign v(I) to v(I)o
    r1: v(I)o = g%< * -+> v(I) >(<int 4>);
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
