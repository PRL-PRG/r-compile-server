fun main() {
  () --> I { reg first:p(I -), reg second:p(I -), reg total:I, reg ret:I |
    first = prom<I ->{ return 15; };
    second = prom<I ->{ return 27; };
    total = sum_promises%< p(I -),p(I -) --> I >(first, second);
    ret = `+`< I,I --> I >(total, 1);
    return ret;
  }
}

fun sum_promises(lhs, rhs) {
  (reg lhs:p(I -), reg rhs:p(I -)) --> I { reg left:I, reg right:I, reg ret:I |
    left = force lhs;
    right = force rhs;
    ret = `+`< I,I --> I >(left, right);
    return ret;
  }
}
