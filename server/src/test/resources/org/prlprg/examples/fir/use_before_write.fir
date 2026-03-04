fun main() {
  () --> v(I)f { reg r:v(I)o |
    # cfg-error: Local register r is never assigned
    # provenance-error: Use before write: r
    return use r;
  }
}
