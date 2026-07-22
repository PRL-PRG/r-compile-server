fun main() {
  () -~> V {
    r1: p?(v1(I) -) = <int 42> as p?(v1(I) -);
    r2: p(v1(I) -) = prom<v1(I) ->{
      return <int 42>;
    };
    r3: p?(v1(I) -) = r2 as p?(v1(I) -);
    r4: V = force? r1;
    r5: V = force? r3;
    return r5;
  }
}
