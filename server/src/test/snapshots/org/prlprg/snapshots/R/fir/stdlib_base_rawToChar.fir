fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner718658783;
    st rawToChar = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner718658783(x, multiple) {
  (reg x:*, reg multiple:*) -+> V { var x:*, var multiple:*, reg multiple_isMissing:L, reg multiple_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg multiple1:*, reg multiple2:V, reg rawToChar:cls, reg r2:V |
    mkenv;
    st x = x;
    multiple_isMissing = missing.0(multiple);
    if multiple_isMissing then L0(FALSE) else L0(multiple);
  L0(multiple_orDefault):
    st multiple = multiple_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang rawToChar(x, multiple)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    multiple1 = ld multiple;
    check L5() else D1();
  D1():
    deopt 4 [multiple1];
  L5():
    multiple2 = force? multiple1;
    checkMissing(multiple2);
    rawToChar = ldf rawToChar in base;
    r2 = dyn rawToChar(x2, multiple2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}