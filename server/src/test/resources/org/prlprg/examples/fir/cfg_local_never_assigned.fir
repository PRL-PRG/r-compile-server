fun main() {
  # cfg-error: Local register r is never assigned
  () --> v1(I) { reg r:I |
    return <int 42>;
  }
}