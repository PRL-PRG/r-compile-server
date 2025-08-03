fun main {
  () --> I { reg r:I |
    # cfg-error: Local register r used before assignment
    x = r;
    # cfg-error: Local register r assigned after use(s)
    r = 42;
    return r;
  }
}