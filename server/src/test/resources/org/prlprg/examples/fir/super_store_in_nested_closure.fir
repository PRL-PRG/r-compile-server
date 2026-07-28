#? returns(2)
fun main() {
  () -+> v1(I) {
    mkenv;
    st c = <int 1>;
    f: cls = clos f;
    dyn f();
    c1: * = ld c;
    popenv;
    c2: v1(I) = c1 as v1(I);
    return c2;
  }
}

fun f() {
  () -+> V {
    mkenv;
    st-super c = <int 2>;
    popenv;
    return <int 42>;
  }
}
