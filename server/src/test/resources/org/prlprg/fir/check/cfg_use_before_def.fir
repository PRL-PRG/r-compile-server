fun main {
  () --> I { reg r:I |
    # cfg-error: Local register r used before assignment
    st x = r;
    # cfg-error: Local register r assigned after use(s)
    r = ld y;
    return r;
  }
}