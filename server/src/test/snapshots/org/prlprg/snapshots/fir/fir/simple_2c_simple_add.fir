fun main() {
  () --> I { reg lhs:I, reg rhs:I, reg sum:I |
    lhs = 40;
    rhs = 2;
    sum = `+`.1(lhs, rhs);
    return sum;
  }
}