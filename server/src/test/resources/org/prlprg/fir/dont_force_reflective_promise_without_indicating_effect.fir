fun main(...) {
  # cleanup: () --> I { |
  () --> I { reg r:p(I +) |
    # cleanup:
    r = prom<I +>{ return 1; };
    return 42;
  }
}