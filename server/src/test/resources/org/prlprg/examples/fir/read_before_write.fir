fun main() {
  # cfg-error: Local register r is never assigned
  () --> v1(I) { reg r:I, reg ru:v1(I) |
    # prov-error: Read before write: r
    ru = box< I --> v1(I) >(r);
    return ru;
  }
}
