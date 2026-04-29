fun main() {
  () --> v1(I) { reg x:I, reg y:I, reg p:p(v1(I) -), reg xb:v1(I), reg yu:v1(I) |
    x = 42;
    p = prom<v1(I) ->{
      # cfg-error: Local register y assigned after use(s)
      y = 42;
      xb = box<I --> v1(I)>(x);
      return xb;
    };
    # cfg-error: Local register y used before assignment
    # prov-error: Read before write: y
    yu = box< I --> v1(I) >(y);
    return yu;
  }
}
