fun main() {
  () -+> V {
    mkenv;
    p: p(V +) = prom<V +>{
      return <int 42>;
    };
    r: V = force p;
    popenv;
    return r;
  }
}
