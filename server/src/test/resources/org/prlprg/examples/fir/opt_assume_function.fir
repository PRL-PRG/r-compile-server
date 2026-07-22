fun main() {
  () -+> V {
    out: V = call_closure< -+> V >();
    return out;
  }
}

fun call_closure() {
  () -+> V {
    callee: cls = clos target;
    check BBopt() else BBdeopt();
  BBdeopt():
    mkenv;
    deopt 0 [callee];
  BBopt():
    result: V = dyn callee();
    return result;
  }
}

fun target() {
  () --> v1(I) {
    return <int 7>;
  }
}
