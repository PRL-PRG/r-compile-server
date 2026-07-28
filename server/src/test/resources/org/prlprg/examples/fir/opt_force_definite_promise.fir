fun main() {
  () --> v1(I) {
    p: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    r: v1(I) = force? p;
    return r;
  }
}
