fun main() {
  () -+> V { reg r:V, reg p:p(v1(I) -), reg p1:p(v1(I) -)? |
    p = prom<v1(I) ->{ return <int 42>; };
    p1 = p as p(v1(I) -)?;
    r = force? p1;
    return r;
  }
}
