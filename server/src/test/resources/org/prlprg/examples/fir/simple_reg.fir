fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    r = 0;
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}
