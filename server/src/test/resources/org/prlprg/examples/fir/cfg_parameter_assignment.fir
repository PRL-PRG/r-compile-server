fun main() {
  () --> v1(I) {
    r: I = f< I --> I >(43);
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(x) {
  (reg x:I) --> I {
    return 42;
  }
}
