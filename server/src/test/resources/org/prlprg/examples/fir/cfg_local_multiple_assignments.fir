fun main() {
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    # cfg-error: Local register r assigned multiple times
    r = 42;
    # cfg-error: Local register r assigned multiple times
    r = 24;
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}