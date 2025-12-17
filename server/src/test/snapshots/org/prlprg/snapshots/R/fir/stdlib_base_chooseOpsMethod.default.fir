fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2249744929;
    st `chooseOpsMethod.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2249744929(x, y, mx, my, cl, reverse) {
  (reg x:*, reg y:*, reg mx:*, reg my:*, reg cl:*, reg reverse:*) -+> V { var x:*, var y:*, var mx:*, var my:*, var cl:*, var reverse:* |
    mkenv;
    st x = x;
    st y = y;
    st mx = mx;
    st my = my;
    st cl = cl;
    st reverse = reverse;
    popenv;
    return FALSE;
  }
}