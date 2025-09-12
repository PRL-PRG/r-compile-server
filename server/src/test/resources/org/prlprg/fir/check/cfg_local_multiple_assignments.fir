fun main(...) {
  () --> I { reg r:I |
    r = 42;
    # cfg-error: Local register r assigned multiple times
    r = 24;
    return r;
  }
}