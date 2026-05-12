fun main() {
  () -+> V { var x:* |
    mkenv;
    st x = <int 7>;
    check BBopt() else BBdeopt();
  BBopt():
    ld x ?= <int 7>;
    popenv;
    return <int 7>;
  BBdeopt():
    deopt 0 [];
  }
}
