fun main() {
  () --> I { reg r:I |
    # cfg-error: Local register r is never assigned
    # provenance-error: Read before write: r
    # runtime-error: Uninitialized register: r
    return r;
  }
}
