fun main() {
  # type-error: Function effects mismatch: + don't subset -
  () --> v1(I) { reg r:p(v1(I) +), reg r0:v1(I) |
    r = prom<v1(I) +>{ return <int 1>; };
    r0 = force r;
    return r0;
  }
}
