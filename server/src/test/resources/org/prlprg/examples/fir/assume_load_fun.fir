fun main() {
  () -+> I { reg target0:*, var target:* |
    mkenv;
    target0 = clos target;
    st target = target0;
    check BBopt() else BBdeopt();
  BBopt():
    ldf target ?- target;
    popenv;
    return 7;
  BBdeopt():
    deopt 0 [];
  }
}

fun target() {
  () --> I { |
    return 7;
  }
}
