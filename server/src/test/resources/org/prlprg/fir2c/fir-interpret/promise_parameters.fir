fun main() {
  () --> I { reg first:p(I -), reg second:p(I -), reg total:I, reg ret:I |
    first = prom<I ->{ return 15; };
    second = prom<I ->{ return 27; };
    total = sum_promises< p(I -),p(I -) --> I >(first, second);
    ret = `+`.1(total, 1);
    return ret;
  }
}

fun sum_promises(`...`) {
  (reg lhs:p(I -), reg rhs:p(I -)) --> I { reg left:I, reg right:I, reg ret:I |
    left = force lhs;
    right = force rhs;
    ret = `+`.1(left, right);
    return ret;
  }
}
