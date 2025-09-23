fun main() {
  () -+> I { reg out:I |
    out = call_closure();
    return out;
  }
}

fun call_closure() {
  () -+> I { reg callee:cls, reg result:I |
    callee = clos target;
    check BBopt() else BBdeopt();
  BBopt():
    # after: callee ?- target;

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
