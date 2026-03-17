fun main() {
  () --> I { reg lhs:I, reg rhs:I, reg sum:I |
    lhs = 40;
    rhs = 2;
    sum = `+`< I,I --> I >(lhs, rhs);
    return sum;
  }
}
