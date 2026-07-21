fun main() {
  () -~> V {
    r0: p(v1(I) -) = prom<v1(I) ->{
      return <int 1>;
    };
    r1: p?(v1(I) -) = r0 as p?(v1(I) -);
    v: V = force? r1;
    return v;
  }
}

fun force_no_effect(x) {
  (reg x:p?(V -)) --> V {
    r: V = force? x;
    return r;
  }
}
