fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    r = f< dots --> I >(<missing>);
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}

fun f(`...`) {
  (reg ddd:dots) --> I { |
    return 0;
  }
}
