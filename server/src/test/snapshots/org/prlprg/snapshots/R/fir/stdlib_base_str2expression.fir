fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1625959054;
    st str2expression = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1625959054(text) {
  (reg text:*) -+> V { var text:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg text1:*, reg text2:V, reg str2expression:cls, reg r2:V |
    mkenv;
    st text = text;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    text1 = ld text;
    check L3() else D0();
  L2():
    r = dyn base(<lang str2expression(text)>);
    goto L0(r);
  D0():
    deopt 2 [text1];
  L3():
    text2 = force? text1;
    checkMissing(text2);
    str2expression = ldf str2expression in base;
    r2 = dyn str2expression(text2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}