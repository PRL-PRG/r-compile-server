fun main() {
  () -+> V {
    out: V = body< -+> V >();
    return out;
  }
}

fun body() {
  () -+> V {
    check BBopt() else BBdeopt();
  BBdeopt():
    mkenv;
    deopt 0 [<int 1>];
  BBopt():
    return <int 1>;
  }
}
