fun main() {
  () --> I { reg r:p(v1(I) +) |
    r = prom<v1(I) +>{ return <int 1>; };
    return 42;
  }
}
