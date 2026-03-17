fun main() {
  () --> I { reg r:I, reg x:I |
    # cfg-error: Local register r used before assignment
    # prov-error: Read before write: r
    x = r;  # Same block: r consume before r assignment
    # cfg-error: Local register r assigned after use(s)
    r = 42;
    return x;
  }
}