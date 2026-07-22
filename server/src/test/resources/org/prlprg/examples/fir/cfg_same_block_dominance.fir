fun main() {
  () --> v1(I) {
    # Same block: r assignment dominates x assignment
    xu: v1(I) = box< I --> v1(I) >(42);
    return xu;
  }
}
