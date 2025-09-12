fun main() {
  () --> I { reg r:I |
    # type-error: Read before write: r
    # cfg-error: Local register r is never assigned
    # runtime-error: Uninitialized register: r
    return r;
  }
}
