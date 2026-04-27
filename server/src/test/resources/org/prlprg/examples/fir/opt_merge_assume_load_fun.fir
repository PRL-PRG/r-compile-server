fun main() {
  () -+> V { reg out:V |
    out = call_f< -+> V >();
    return out;
  }
}

fun call_f() {
  () -+> V { reg callee:cls, reg lf:cls |
    callee = clos target;
    check BB1() else BBdeopt1();
  BB1():
    callee ?- target;
    lf = ldf target;
    check BB2() else BBdeopt2();
  BB2():
    lf ?- target;
    return <int 7>;
  BBdeopt1():
    mkenv;
    deopt 0 [callee];
  BBdeopt2():
    mkenv;
    deopt 0 [callee];
  }
}

fun target() {
  () --> v1(I) { |
    return <int 7>;
  }
}
