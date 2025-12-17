fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner657253850;
    st resolvePkgType = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner657253850(type) {
  (reg type:*) -+> V { var type:*, reg type1:*, reg type2:V, reg r:V, reg c:L, reg type3:*, reg type4:V, reg r2:V, reg c1:L, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg type5:*, reg type6:V |
    mkenv;
    st type = type;
    type1 = ld type;
    check L3() else D0();
  D0():
    deopt 0 [type1];
  L3():
    type2 = force? type1;
    checkMissing(type2);
    r = `==`(type2, "both");
    c = `as.logical`(r);
    if c then L4() else L0();
  L0():
    type3 = ld type;
    check L6() else D1();
  L1():
    type5 = ld type;
    check L14() else D3();
  L4():
    st type = "source";
    goto L1();
  D1():
    deopt 7 [type3];
  D3():
    deopt 17 [type5];
  L6():
    type4 = force? type3;
    checkMissing(type4);
    r2 = `==`(type4, "binary");
    c1 = `as.logical`(r2);
    if c1 then L7() else L2();
  L14():
    type6 = force? type5;
    checkMissing(type6);
    popenv;
    return type6;
  L2():
    goto L1();
  L7():
    _Platform = ld `.Platform`;
    check L8() else D2();
  D2():
    deopt 11 [_Platform];
  L8():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L10() else L11(_Platform1);
  L9(dx1):
    st type = dx1;
    goto L1();
  L10():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(_Platform3):
    r3 = `$`(_Platform3, <sym pkgType>);
    goto L9(r3);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  }
}