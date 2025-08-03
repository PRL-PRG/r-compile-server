fun main {
  () --> I { reg r:I |
    # cfg-error: Local register r is never assigned
    return 42;
  }
}