fun main() {
  () -+> V {
    p: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    p1: p(v1(I) -)? = p as p(v1(I) -)?;
    r: V = force? p1;
    return r;
  }
}
