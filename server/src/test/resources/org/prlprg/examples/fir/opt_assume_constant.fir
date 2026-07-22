fun main() {
  () -+> V {
    out: V = constant< -+> V >();
    return out;
  }
}

fun constant() {
  () -+> V {
    check BBopt() else BBdeopt();
  BBdeopt():
    mkenv;
    deopt 0 [];
  BBopt():
    if TRUE then BBtrue() else BBfalse();
  BBfalse():
    return <int 0>;
  BBtrue():
    return <int 0>;
  }
}
