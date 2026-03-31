fun main() {
  () --> v1(I) { reg r:v1(I), reg p:p(v1(I) -) |
    p = prom<v1(I) ->{ return <int 42>; };
    r = force? p;
    return r;
  }
}
