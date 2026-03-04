fun main() {
  # cfg-error: Local register r is never assigned
  () --> I { reg r:I |
    # prov-error: Read before write: r
    return r;
  }
}
