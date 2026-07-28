fun main() {
  () -~> v1(I) {
    mkenv;
    st outer = <int 11>;
    mkenv;
    st inner = <int 9>;
    outer0: * = ld outer;
    outer1: v1(I) = outer0 as v1(I);
    outer1u: I = unbox< v1(I) --> I >(outer1);
    inner0: * = ld inner;
    inner1: v1(I) = inner0 as v1(I);
    inner1u: I = unbox< v1(I) --> I >(inner1);
    combined: I = `+`< I,I --> I >(outer1u, inner1u);
    combinedb: v1(I) = box< I --> v1(I) >(combined);
    st outer = combinedb;
    popenv;
    final: * = ld outer;
    final1: v1(I) = final as v1(I);
    final1u: I = unbox< v1(I) --> I >(final1);
    popenv;
    ret: I = `+`< I,I --> I >(final1u, 10);
    retu: v1(I) = box< I --> v1(I) >(ret);
    return retu;
  }
}
