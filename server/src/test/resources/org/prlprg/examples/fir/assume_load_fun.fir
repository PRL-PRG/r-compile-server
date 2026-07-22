fun main() {
  () -+> V {
    mkenv;
    target0: * = clos target;
    st target = target0;
    check BBopt() else BBdeopt();
  BBdeopt():
    deopt 0 [];
  BBopt():
    ldf target ?- target;
    popenv;
    return <int 7>;
  }
}

fun target() {
  () --> v1(I) {
    return <int 7>;
  }
}
