fun main() {
  () -+> V { reg out:V |
    out = body< -+> V >();
    return out;
  }
}

fun body() {
  () -+> V { reg val:V |
    val = <int 1>;
    check BBopt() else BBdeopt();
  BBopt():
    return val;
  BBdeopt():
    mkenv;
    deopt 0 [val];
  }
}
