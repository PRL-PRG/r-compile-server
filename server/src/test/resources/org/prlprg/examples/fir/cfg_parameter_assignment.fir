fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    r = f< I --> I >(43);
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(x) {
  (reg x:I) --> I { |
    # cfg-error: Parameter reg x:I can't be assigned
    x = 42;
    return x;
  }
}