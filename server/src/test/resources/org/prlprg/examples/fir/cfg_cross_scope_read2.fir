fun main() {
  () --> v1(I) { reg x:I, reg y:I, reg z:I, reg xb:v1(I), reg yb:v1(I), reg zb:v1(I), reg xu:v1(I) |
    x = 42;
    xb = box<I --> v1(I)>(x);
    prom<v1(I) ->{
      # cfg-error: Local register y assigned after use(s)
      y = 42;
      return xb;
    };
    prom<v1(I) ->{
      z = 42;
      prom<v1(I) ->{ return xb; };
      prom<v1(I) ->{
        zb = box<I --> v1(I)>(z);
        return zb;
      };
      # cfg-error: Local register y used before assignment
      # prov-error: Read before write: y
      yb = box<I --> v1(I)>(y);
      return yb;
    };
    xu = box< I --> v1(I) >(x);
    return xu;
  }
}
