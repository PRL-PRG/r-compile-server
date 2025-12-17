fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner785164255;
    st `napredict.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner785164255(omit, x, `...`) {
  (reg omit:*, reg x:*, reg ddd:dots) -+> V { var omit:*, var x:*, var `...`:dots?, reg x1:*, reg x2:V |
    mkenv;
    st omit = omit;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}