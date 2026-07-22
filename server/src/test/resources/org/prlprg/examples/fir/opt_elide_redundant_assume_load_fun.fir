fun main() {
  () -+> V {
    mkenv;
    c: * = clos target;
    st target = c;
    check BB1() else BBdeopt1();
  BBdeopt1():
    deopt 0 [];
  BB1():
    ldf target ?- target;
    check BB2() else BBdeopt2();
  BB2():
    ldf target ?- target;
    popenv;
    return <int 7>;
  BBdeopt2():
    deopt 0 [];
  }
}

fun target() {
  () --> v1(I) {
    return <int 7>;
  }
}
