fun main() {
  () --> v1(I) {
    r: I = identity< I --> I >(42);
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun identity(x) {
  (reg x:I) --> I {
    return x;
  }
}
