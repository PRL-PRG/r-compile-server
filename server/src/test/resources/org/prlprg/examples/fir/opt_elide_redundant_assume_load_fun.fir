fun main() {
  () --> I { reg c:*, var target:* |
    mkenv;
    c = clos target;
    st target = c;
    check BB1() else BBdeopt1();
  BB1():
    ldf target ?- target;
    check BB2() else BBdeopt2();
  BB2():
    ldf target ?- target;
    popenv;
    return 7;
  BBdeopt1():
    deopt 0 [];
  BBdeopt2():
    deopt 0 [];
  }
}

fun target() {
  () --> I { |
    return 7;
  }
}
