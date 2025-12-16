fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `xtfrm.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg stop:cls, reg r:V |
    mkenv;
    st x = x;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn stop("cannot xtfrm data frames");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}