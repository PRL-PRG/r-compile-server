fun main() {
  () --> v1(I) { reg lhs:I, reg rhs:I, reg sum:I, reg sumu:v1(I) |
    lhs = 40;
    rhs = 2;
    sum = `+`< I,I --> I >(lhs, rhs);
    sumu = box< I --> v1(I) >(sum);
    return sumu;
  }
}
