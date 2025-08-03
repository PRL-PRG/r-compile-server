fun main {
  # cleanup: () --> I { |
  () --> I { reg r:p(I +) |
    # cleanup: prom<I +>{
    r = prom<I +>{
      return 1;
    };
    return 42;
  }
}