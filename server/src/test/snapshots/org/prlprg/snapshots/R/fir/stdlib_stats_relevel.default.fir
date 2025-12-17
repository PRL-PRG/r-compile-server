fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner238421359;
    st `relevel.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner238421359(x, ref, `...`) {
  (reg x:*, reg ref:*, reg ddd:dots) -+> V { var x:*, var ref:*, var `...`:dots?, reg stop:cls, reg r:V |
    mkenv;
    st x = x;
    st ref = ref;
    st `...` = ddd;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn stop("'relevel' only for (unordered) factors");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}