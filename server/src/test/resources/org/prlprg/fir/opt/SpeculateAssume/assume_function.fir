fun main() {
  () -+> V { reg out:V |
    out = call_closure();
    return out;
  }
}

fun call_closure() {
  # after: () -+> V { reg callee:cls, reg result:V, reg r0:cls |
  () -+> V { reg callee:cls, reg result:V |
    callee = clos target;
    check BBopt() else BBdeopt();
  BBopt():
    # after: callee ?- target;

    # after: r0 = ldf target in global;

    # after: result = dyn r0();
    result = dyn callee();
    return result;
  BBdeopt():
    mkenv;
    deopt 0 [callee];
  }
}

fun target() {
  () --> I { |
    return 7;
  }
}
