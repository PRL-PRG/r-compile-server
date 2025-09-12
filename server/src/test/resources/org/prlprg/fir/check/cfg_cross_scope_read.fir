fun main() {
  () --> I { reg x:I, reg y:I, reg p:p(I -) |
    x = 42;
    p = prom<I ->{
      # cfg-error: Local register y assigned after use(s)
      y = 42;
      return x;
    };
    # cfg-error: Local register y used before assignment
    return y;
  }
}