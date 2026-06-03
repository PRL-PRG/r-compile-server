fun main() {
  () --> v1(I) { reg r0:I, reg r1:I, reg r2:I, reg r2u:v1(I) |
    r0 = 42;
    r1 = r0;
    r2 = r1;
    r2u = box< I --> v1(I) >(r2);
    return r2u;
  }
}