fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    r = f< I --> I >(42);
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(r) {
  (reg r:I) --> I { |
    return r;
  }
}
