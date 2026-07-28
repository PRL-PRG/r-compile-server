fun main() {
  () --> v1(I) {
    first: p(v1(I) -) = prom<v1(I) ->{
      return <int 15>;
    };
    second: p(v1(I) -) = prom<v1(I) ->{
      return <int 27>;
    };
    total: I = sum_promises< p(v1(I) -),p(v1(I) -) --> I >(first, second);
    ret: I = `+`< I,I --> I >(total, 1);
    retu: v1(I) = box< I --> v1(I) >(ret);
    return retu;
  }
}

fun sum_promises(lhs, rhs) {
  (reg lhs:p(v1(I) -), reg rhs:p(v1(I) -)) --> I {
    left: v1(I) = force lhs;
    right: v1(I) = force rhs;
    left0: I = unbox< v1(I) --> I >(left);
    right0: I = unbox< v1(I) --> I >(right);
    ret: I = `+`< I,I --> I >(left0, right0);
    return ret;
  }
}
