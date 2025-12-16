fun main() {
  () -+> V { reg out:V |
    out = call_closure();
    return out;
  }
}
fun call_closure() {
  #"after: () -+> V { reg callee:cls, reg result:V, reg callee1:cls |"
  () -+> V { reg callee:cls, reg result:V |
    callee = clos target;
    check BBopt() else BBdeopt();
  BBdeopt():
    mkenv;
    deopt 0 [callee];
  BBopt():
    #"after: callee ?- target;"
    #"after: callee1 = ldf target in global;"
    #"after: result = dyn callee1();"
    result = dyn callee();
    return result;
  }
}
fun target() {
  () --> I { |
    return 7;
  }
}