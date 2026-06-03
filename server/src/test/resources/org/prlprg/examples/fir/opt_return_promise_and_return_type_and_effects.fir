fun main() {
  () -+> V { reg p:p(V +), reg r:V |
    mkenv;
    p = prom<V +>{
      return <int 42>;
    };
    r = force p;
    popenv;
    return r;
  }
}
