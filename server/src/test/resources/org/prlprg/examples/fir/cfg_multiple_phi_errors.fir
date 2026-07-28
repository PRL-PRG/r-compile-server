fun main() {
  () --> v1(I) {
    goto BB1(42, 24);
  # cfg-error: Block with 1 predecessor (which isn't an 'if' whose arguments are different in both branches) can't have phis
  BB1(phi1: I, phi2: I):
    phi1u: v1(I) = box< I --> v1(I) >(phi1);
    return phi1u;
  }
}
