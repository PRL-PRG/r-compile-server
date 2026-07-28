fun main() {
  () -+> V {
    out: V = call_f< -+> V >();
    return out;
  }
}

fun call_f() {
  () -+> V {
    callee: cls = clos target;
    check BB1() else BBdeopt1();
  BBdeopt1():
    mkenv;
    deopt 0 [callee];
  BB1():
    callee1: cls = callee ?- target;
    mkenv;
    st-super target = callee1;
    popenv;
    lf: cls = ldf target;
    check BB2() else BBdeopt2();
  BB2():
    lf ?- target;
    return <int 7>;
  BBdeopt2():
    mkenv;
    deopt 0 [callee];
  }
}

fun target() {
  () --> v1(I) {
    return <int 7>;
  }
}
