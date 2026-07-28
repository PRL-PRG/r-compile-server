fun main() {
  # type-error: Function effects mismatch: + don't subset -
  () --> v1(I) {
    r: p(v1(I) +) = prom<v1(I) +>{
      return <int 1>;
    };
    r0: v1(I) = force r;
    return r0;
  }
}
