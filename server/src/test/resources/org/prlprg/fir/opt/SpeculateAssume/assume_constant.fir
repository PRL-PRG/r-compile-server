fun main() {
  () --> I { reg out:I |
    out = constant();
    return out;
  }
}

fun constant() {
  () --> I { reg cond:L, reg zero:I |
    cond = TRUE;
    zero = 0;
    check BBopt() else BBdeopt();
  BBopt():
    # after: cond ?= TRUE;

    # after: if TRUE then BBtrue() else BBfalse();
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
