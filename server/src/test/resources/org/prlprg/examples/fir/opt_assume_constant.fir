fun main() {
  () --> I { reg out:I |
    out = constant< --> I >();
    return out;
  }
}

fun constant() {
  () --> I { reg cond:B, reg zero:I |
    cond = TRUE;
    zero = 0;
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
