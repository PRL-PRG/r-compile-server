fun main() {
  () --> v1(I) { reg lhs:I, reg rhs:I, reg sum:I, reg doubled:I, reg doubledu:v1(I) |
    lhs = 7;
    rhs = 14;
    sum = add_pair< I,I --> I >(lhs, rhs);
    doubled = double_value< I --> I >(sum);
    doubledu = box< I --> v1(I) >(doubled);
    return doubledu;
  }
}

fun add_pair(lhs, rhs) {
  (reg lhs:I, reg rhs:I) --> I { reg sum:I |
    sum = `+`< I,I --> I >(lhs, rhs);
    return sum;
  }
}

fun double_value(value) {
  (reg value:I) --> I { reg twice:I |
    twice = `+`< I,I --> I >(value, value);
    return twice;
  }
}
