fun main() {
  () -~> v1(I) { var outer:v1(I)?, var inner:v1(I)?, reg outer0:v1(I)?, reg outer1:v1(I), reg outer1u:I, reg inner0:v1(I)?, reg inner1:v1(I), reg inner1u:I, reg combined:I, reg combinedb:v1(I), reg final:v1(I)?, reg final1:v1(I), reg final1u:I, reg ret:I, reg retu:v1(I) |
    mkenv;
    st outer = <int 11>;
    mkenv;
    st inner = <int 9>;
    outer0 = ld outer;
    outer1 = outer0 as v1(I);
    outer1u = unbox<v1(I) --> I>(outer1);
    inner0 = ld inner;
    inner1 = inner0 as v1(I);
    inner1u = unbox<v1(I) --> I>(inner1);
    combined = `+`< I,I --> I >(outer1u, inner1u);
    combinedb = box<I --> v1(I)>(combined);
    st outer = combinedb;
    popenv;
    final = ld outer;
    final1 = final as v1(I);
    final1u = unbox<v1(I) --> I>(final1);
    popenv;
    ret = `+`< I,I --> I >(final1u, 10);
    retu = box< I --> v1(I) >(ret);
    return retu;
  }
}
