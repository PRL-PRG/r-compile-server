fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:V |
    mkenv;
    st x = NULL;
    r = clos inner2708337952;
    checkFun.0(r);
    r1 = r as cls;
    r2 = dyn r1();
    check L0() else D0();
  D0():
    deopt 6 [r2];
  L0():
    popenv;
    return r2;
  }
}
fun inner2708337952() {
  () -+> V { reg x:*, reg x1:V |
    mkenv;
    x = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}