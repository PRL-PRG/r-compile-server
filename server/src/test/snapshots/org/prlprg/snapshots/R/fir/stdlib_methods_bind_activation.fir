fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2163774920;
    st bind_activation = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2163774920(on) {
  (reg on:*) -+> V { var on:*, reg on_isMissing:L, reg on_orDefault:*, reg stop:cls, reg r:V |
    mkenv;
    on_isMissing = missing.0(on);
    if on_isMissing then L0(TRUE) else L0(on);
  L0(on_orDefault):
    st on = on_orDefault;
    stop = ldf stop;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn stop("methods:::bind_activation() is defunct;\n rather provide methods for cbind2() / rbind2()");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    popenv;
    return r;
  }
}