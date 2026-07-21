fun main() {
  () --> v(I)f {
    r: v(I)o = v(I)[1, 2, 3];
    prom<v1(I) ->{
      r1: I = r[0];
      r1b: v1(I) = box< I --> v1(I) >(r1);
      return r1b;
    };
    # prov-error: Consume after capture: r
    return consume r;
  }
}
