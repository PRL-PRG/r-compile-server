fun main() {
  () --> v1(I) { reg r:I, reg x:I, reg xu:v1(I) |
    r = 42;
    x = r;  # Same block: r assignment dominates x assignment
    xu = box< I --> v1(I) >(x);
    return xu;
  }
}