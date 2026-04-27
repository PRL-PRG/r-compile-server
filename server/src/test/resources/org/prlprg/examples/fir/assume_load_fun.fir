fun main() {
  () -+> V { reg target0:*, var target:* |
    mkenv;
    target0 = clos target;
    st target = target0;
    check BBopt() else BBdeopt();
  BBopt():
    ldf target ?- target;
    popenv;
    return <int 7>;
  BBdeopt():
    deopt 0 [];
  }
}

fun target() {
  () --> v1(I) { |
    return <int 7>;
  }
}
