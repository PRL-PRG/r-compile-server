fun main() {
  () --> v1(I) {
    r: I = f< dots --> I >(<missing>);
    ru: v1(I) = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(`...`) {
  (reg ddd:dots) --> I {
    return 0;
  }
}
