fun main() {
  () -+> I { reg out:I |
    out = call_f();
    return out;
  }
}

fun call_f() {
  # after: () -+> I { reg callee:cls |
  () -+> I { reg callee:cls, reg lf:cls |
    callee = clos target;
    # after: ldf target ?- target;
    check BB1() else BBdeopt1();
  BB1():
    callee ?- target;
    # after:
    lf = ldf target;
    check BB2() else BBdeopt2();
  BB2():
    # after:
    lf ?- target;
    return 7;
  BBdeopt1():
    mkenv;
    deopt 0 [callee];
  BBdeopt2():
    mkenv;
    deopt 0 [callee];
  }
}

fun target() {
  () --> I { |
    return 7;
  }
}
