fun main() {
  () --> v1(I) { reg r:I, reg r1:I, reg ru:v1(I), reg r1u:v1(I) |
    r = 42;
    ru = box< I --> v1(I) >(r);
    return ru;
  # cfg-error: Block UNREACHABLE is unreachable from entry
  UNREACHABLE():
    r1 = 24;
    r1u = box< I --> v1(I) >(r1);
    return r1u;
  }
}