fun main() {
  () --> v1(I) { reg r:p(v1(I) +) |
    r = prom<v1(I) +>{ return <int 1>; };
    return <int 42>;
  }
}
