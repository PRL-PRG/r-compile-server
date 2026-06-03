fun main() {
  () -+> V { reg out:V |
    out = call_closure< -+> V >();
    return out;
  }
}

fun call_closure() {
  () -+> V { reg callee:cls, reg result:V |
    callee = clos target;
    check BBopt() else BBdeopt();
  BBopt():
    result = dyn callee();
    return result;
  BBdeopt():
    mkenv;
    deopt 0 [callee];
  }
}

fun target() {
  () --> v1(I) { |
    return <int 7>;
  }
}
