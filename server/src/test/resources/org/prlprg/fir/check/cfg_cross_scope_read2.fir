fun main(...) {
  () --> I { reg x:I, reg y:I, reg z:I |
    x = 42;
    prom<I ->{
      # cfg-error: Local register y assigned after use(s)
      y = 42;
      return x;
    };
    prom<I ->{
      z = 42;
      prom<I ->{ return x; };
      prom<I ->{ return z; };
      # cfg-error: Local register y used before assignment
      return y;
    };
    return x;
  }
}