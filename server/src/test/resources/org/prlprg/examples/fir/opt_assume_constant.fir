fun main() {
  () -+> V{ reg out:V|
    out = constant< -+> V>();
    return out;
  }
}

fun constant() {
  () -+> V { reg cond:B, reg zero:V |
    cond = TRUE;
    zero = <int 0>;
    check BBopt() else BBdeopt();
  BBopt():
    if cond then BBtrue() else BBfalse();
  BBtrue():
    return zero;
  BBfalse():
    return zero;
  BBdeopt():
    mkenv;
    deopt 0 [];
  }
}
