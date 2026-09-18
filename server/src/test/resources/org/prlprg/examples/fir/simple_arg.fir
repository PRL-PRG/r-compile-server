fun main() {
  () --> v1(I) {
    r: I = f< I --> I >(42);
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(r) {
  (r:I) --> I {
    return r;
  }
}
