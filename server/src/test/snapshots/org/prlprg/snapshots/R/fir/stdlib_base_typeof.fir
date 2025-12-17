fun main() {
  () -+> V { reg r:cls, reg typeof:cls, reg r1:V, reg mode:cls, reg r2:V |
    mkenv;
    r = clos inner2501545716;
    st typeof = r;
    typeof = ldf typeof;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn typeof(2.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    mode = ldf mode;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn mode(2.0);
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    popenv;
    return r2;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg typeof:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang typeof(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}