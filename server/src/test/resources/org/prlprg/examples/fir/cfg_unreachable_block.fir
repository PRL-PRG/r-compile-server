fun main() {
  () --> v1(I) {
    ru: v1(I) = box< I --> v1(I) >(42);
    return ru;
  # cfg-error: Block UNREACHABLE is unreachable from entry
  UNREACHABLE():
    r1u: v1(I) = box< I --> v1(I) >(24);
    return r1u;
  }
}
