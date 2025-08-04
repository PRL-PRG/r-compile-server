fun main {
  () --> I { reg r:I, reg x:I |
    r = 42;
    x = r;  # Same block: r assignment dominates x assignment
    return x;
  }
}