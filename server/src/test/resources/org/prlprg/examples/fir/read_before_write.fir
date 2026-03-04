fun main() {
  () --> I { reg r:I |
    # cfg-error: Local register r is never assigned
    # provenance-error: Read before write: r
    return r;
  }
}
