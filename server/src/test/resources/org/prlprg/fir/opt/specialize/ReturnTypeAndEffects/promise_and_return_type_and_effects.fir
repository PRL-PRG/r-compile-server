fun main() {
  # after: () --> I { reg p:p(I -), reg r:I |
  () -+> V { reg p:p(V +), reg r:V |
    mkenv;
        # after: p = prom<I ->{
    p = prom<V +>{
      return 42;
    };
    r = force p;
    return r;
  }
}