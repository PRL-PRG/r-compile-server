fun main() {
  () -~> v1(I) {
    mkenv;
    xb: v1(I) = box< I --> v1(I) >(0);
    st r = xb;
    popenv;
    xu: v1(I) = box< I --> v1(I) >(0);
    return xu;
  }
}
