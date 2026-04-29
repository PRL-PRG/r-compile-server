fun main() {
  () -+> v1(I) { reg out:v1(I) |
    out = constant< -+> v1(I) >();
    return out;
  }
}

fun constant() {
  () -+> v1(I) { reg cond:B, reg zero:v1(I) |
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
    deopt 0 [cond];
  }
}
