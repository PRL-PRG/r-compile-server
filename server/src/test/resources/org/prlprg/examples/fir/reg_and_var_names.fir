fun main() {
  () -~> I { reg x:I, var r:v1(I)?, reg xb:v1(I) |
    x = 0;
    mkenv;
    xb = box<I --> v1(I)>(x);
    st r = xb;
    popenv;
    return x;
  }
}
