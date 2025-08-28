fun main {
  () --> I { reg r:I, reg p:I |
    p = 42;
    r = force? p;
    return r;
  }
}