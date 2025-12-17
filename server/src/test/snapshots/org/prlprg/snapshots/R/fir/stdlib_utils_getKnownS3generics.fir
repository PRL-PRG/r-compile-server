fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st getKnownS3generics = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg _knownS3Generics:*, reg _knownS3Generics1:V, reg names:cls, reg r4:V, reg ___:cls, reg r5:V, reg r6:cls, reg r7:V, reg c:cls, reg r8:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang names(.knownS3Generics)>, <lang `:::`(tools, .get_internal_S3_generics)()>);
    goto L0(r);
  L1(r3):
    ___ = ldf `:::`;
    check L8() else D2();
  L4():
    _knownS3Generics = ld `.knownS3Generics`;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym .knownS3Generics>);
    goto L1(r2);
  D0():
    deopt 4 [_knownS3Generics];
  D2():
    deopt 9 [];
  L6():
    _knownS3Generics1 = force? _knownS3Generics;
    checkMissing(_knownS3Generics1);
    names = ldf names in base;
    r4 = dyn names(_knownS3Generics1);
    check L7() else D1();
  L8():
    r5 = dyn ___("tools", ".get_internal_S3_generics");
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r5];
  L7():
    goto L1(r4);
  L9():
    checkFun.0(r5);
    r6 = r5 as cls;
    r7 = dyn r6();
    check L10() else D4();
  D4():
    deopt 14 [r7];
  L10():
    c = ldf c in base;
    r8 = dyn c(r3, r7);
    check L11() else D5();
  D5():
    deopt 16 [r8];
  L11():
    goto L0(r8);
  }
}