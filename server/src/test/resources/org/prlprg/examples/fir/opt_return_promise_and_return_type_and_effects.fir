fun main() {
  # after: () --> v1(I) { reg p:p(v1(I) -), reg r:v1(I) |
  () -+> V { reg p:p(V +), reg r:V |
    mkenv;
    # after: p = prom<v1(I) ->{
    p = prom<V +>{
      return <int 42>;
    };
    r = force p;
    popenv;
    return r;
  }
}
