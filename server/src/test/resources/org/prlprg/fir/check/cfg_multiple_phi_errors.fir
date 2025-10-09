fun main() {
  () --> I { reg phi1:I, reg phi2:I |
    goto BB1(42, 24);
  # cfg-error: Block with 1 predecessor (which isn't an 'if' whose arguments are different in both branches) can't have phis
  BB1(phi1, phi2):
    return phi1;
  }
}