fun main() {
  () --> v1(I) { reg r:I, reg p:I, reg ru:v1(I) |
    p = 42;
    r = p;
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}