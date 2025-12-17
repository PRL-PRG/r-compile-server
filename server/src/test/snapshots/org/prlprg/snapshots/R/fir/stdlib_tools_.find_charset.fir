fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.find_charset` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg l10n_info:cls, reg r:V, reg l10n:*, reg l10n1:V, reg c:L, reg l10n3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg c1:L, reg r2:V, reg __1:cls, reg r3:V, reg r4:cls, reg r5:V, reg cat:cls, reg enc:*, reg enc1:V, reg p:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg invisible:cls, reg r10:V |
    mkenv;
    l10n_info = ldf l10n_info;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn l10n_info();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    st l10n = r;
    l10n = ld l10n;
    check L6() else D2();
  D2():
    deopt 4 [l10n];
  L6():
    l10n1 = force? l10n;
    checkMissing(l10n1);
    c = `is.object`(l10n1);
    if c then L7() else L8(l10n1);
  L0(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L10() else L1();
  L7():
    dr = tryDispatchBuiltin.1("[[", l10n1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(l10n3):
    __ = ldf `[[` in base;
    r1 = dyn __(l10n3, "UTF-8");
    goto L0(r1);
  L1():
    __1 = ldf `::`;
    check L12() else D3();
  L2(r2):
    st enc = r2;
    cat = ldf cat;
    check L15() else D6();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    goto L2("UTF-8");
  D3():
    deopt 12 [];
  D6():
    deopt 20 [];
  L12():
    r3 = dyn __1("utils", "localeToCharset");
    check L13() else D4();
  L15():
    p = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r7 = dyn cat[, , , sep]("charset: ", p, "\n", "");
    check L16() else D7();
  D4():
    deopt 15 [r3];
  D7():
    deopt 26 [r7];
  L13():
    checkFun.0(r3);
    r4 = r3 as cls;
    r5 = dyn r4();
    check L14() else D5();
  L16():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  D5():
    deopt 17 [r5];
  L3(r9):
    popenv;
    return r9;
  L14():
    goto L2(r5);
  L17():
    invisible = ldf invisible in base;
    r10 = dyn invisible();
    check L19() else D8();
  L18():
    r8 = dyn base();
    goto L3(r8);
  D8():
    deopt 30 [r10];
  L19():
    goto L3(r10);
  }
}