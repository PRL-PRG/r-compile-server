fun main() {
  () --> I { reg r:I |
    # cfg-error: Local register r used before assignment
    # provenance-error: Read before write: r
    # env-error: No environment to store into
    st x = r;
    # cfg-error: Local register r assigned after use(s)
    # type-error: Can't assign it to r: can't assign * to I
    r = ld y;
    return r;
  }
}