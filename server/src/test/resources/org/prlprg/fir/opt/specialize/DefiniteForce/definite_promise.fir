fun main(...) {
  () --> I { reg r:I, reg p:p(I -) |
    p = prom<I ->{ return 42; };
    # after: r = force p;
    r = force? p;
    return r;
  }
}