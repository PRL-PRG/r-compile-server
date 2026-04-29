fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    r = identity< I --> I >(42);
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}

fun identity(x) {
  (reg x:I) --> I { |
    return x;
  }
}