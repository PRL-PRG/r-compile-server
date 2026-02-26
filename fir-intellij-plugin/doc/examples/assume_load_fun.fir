fun main() {
  () --> I { |
    check BBopt() else BBdeopt();
  BBopt():
    ldf target ?- target;
    return 7;
  BBdeopt():
    mkenv;
    deopt 0 [];
  }
}

fun target() {
  () --> I { |
    return 7;
  }
}
