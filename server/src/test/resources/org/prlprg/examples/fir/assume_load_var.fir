fun main() {
  () -+> V {
    mkenv;
    st x = <int 7>;
    check BBopt() else BBdeopt();
  BBdeopt():
    deopt 0 [];
  BBopt():
    ld x ?= <int 7>;
    popenv;
    return <int 7>;
  }
}
