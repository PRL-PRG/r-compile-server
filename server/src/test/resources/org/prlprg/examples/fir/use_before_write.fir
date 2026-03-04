fun main() {
  # cfg-error: Local register r is never assigned
  () --> v(I)f { reg r:v(I)o |
    # prov-error: Use before write: r
    return use r;
  }
}
