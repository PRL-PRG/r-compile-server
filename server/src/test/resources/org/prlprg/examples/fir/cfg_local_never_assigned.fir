fun main() {
  # cfg-error: Local register r is never assigned
  () --> I { reg r:I |
    return 42;
  }
}