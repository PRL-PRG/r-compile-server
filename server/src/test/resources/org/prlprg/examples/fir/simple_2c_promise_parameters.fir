fun main() {
  () --> I { reg first:p(v1(I) -), reg second:p(v1(I) -), reg total:I, reg ret:I |
    first = prom<v1(I) ->{ return <int 15>; };
    second = prom<v1(I) ->{ return <int 27>; };
    total = sum_promises%< p(v1(I) -),p(v1(I) -) --> I >(first, second);
    ret = `+`< I,I --> I >(total, 1);
    return ret;
  }
}

fun sum_promises(lhs, rhs) {
  (reg lhs:p(v1(I) -), reg rhs:p(v1(I) -)) --> I { reg left:v1(I), reg right:v1(I), reg left0:I, reg right0:I, reg ret:I |
    left = force lhs;
    right = force rhs;
    left0 = unbox<v1(I) --> I>(left);
    right0 = unbox<v1(I) --> I>(right);
    ret = `+`< I,I --> I >(left0, right0);
    return ret;
  }
}
