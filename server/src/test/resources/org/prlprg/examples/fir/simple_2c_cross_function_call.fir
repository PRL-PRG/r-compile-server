fun main() {
  () --> v1(I) {
    sum: I = add_pair< I,I --> I >(7, 14);
    doubled: I = double_value< I --> I >(sum);
    doubledu: v1(I) = box< I --> v1(I) >(doubled);
    return doubledu;
  }
}

fun add_pair(lhs, rhs) {
  (reg lhs:I, reg rhs:I) --> I {
    sum: I = `+`< I,I --> I >(lhs, rhs);
    return sum;
  }
}

fun double_value(value) {
  (reg value:I) --> I {
    twice: I = `+`< I,I --> I >(value, value);
    return twice;
  }
}
