fun main() {
  () --> v1(I) { reg r1:I, reg r1u:v1(I) |
    goto BB1(42);
  # cfg-error: Block with 1 predecessor (which isn't an 'if' whose arguments are different in both branches) can't have phis
  BB1(r1):
    r1u = box< I --> v1(I) >(r1);
    return r1u;
  }
}