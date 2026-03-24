fun main() {
  () --> v1(I) { reg x:I, reg r1:v1(I), reg r2:v1(I) |
    x = 42;
    r1 = box< I --> v1(I) >(x);
    r2 = box< I --> v1(I) >(x);
    return r2;
  }
}
