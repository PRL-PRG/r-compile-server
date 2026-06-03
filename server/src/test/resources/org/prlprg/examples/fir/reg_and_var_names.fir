fun main() {
  () -~> v1(I) { reg x:I, var r:v1(I)?, reg xb:v1(I), reg xu:v1(I) |
    x = 0;
    mkenv;
    xb = box<I --> v1(I)>(x);
    st r = xb;
    popenv;
    xu = box< I --> v1(I) >(x);
    return xu;
  }
}
