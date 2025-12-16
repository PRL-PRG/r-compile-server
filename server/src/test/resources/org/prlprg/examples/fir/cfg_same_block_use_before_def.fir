fun main() {
  () --> I { reg r:I, reg x:I |
    # cfg-error: Local register r used before assignment
    # provenance-error: Read before write: r
    x = r;  # Same block: r use before r assignment
    # cfg-error: Local register r assigned after use(s)
    r = 42;
    return x;
  }
}