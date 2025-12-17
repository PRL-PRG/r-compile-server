fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner991933454;
    st `.deleteSubClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner991933454(cdef, subclass) {
  (reg cdef:*, reg subclass:*) -+> V { var cdef:*, var subclass:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg subclass1:*, reg subclass2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg subclasses:*, reg subclasses1:V, reg names:cls, reg r5:V, reg match:cls, reg r6:V, reg ii:*, reg ii1:V, reg r7:V, reg c:L, reg subclasses2:*, reg subclasses3:V, reg c1:L, reg subclasses5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ii2:*, reg ii3:V, reg r8:V, reg __1:cls, reg r9:V, reg l:*, reg ___:cls, reg r10:V, reg cdef1:*, reg cdef2:V |
    mkenv;
    st cdef = cdef;
    st subclass = subclass;
    __ = ldf `@` in base;
    r = dyn __(<sym cdef>, <sym subclasses>);
    st subclasses = r;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st ii = r2;
    ii = ld ii;
    check L12() else D4();
  L4():
    subclass1 = ld subclass;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym subclass>, <lang names(subclasses)>, 0.0);
    goto L0(r1);
  D0():
    deopt 5 [subclass1];
  D4():
    deopt 18 [ii];
  L6():
    subclass2 = force? subclass1;
    checkMissing(subclass2);
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L12():
    ii1 = force? ii;
    checkMissing(ii1);
    r7 = `>`(ii1, 0.0);
    c = `as.logical`(r7);
    if c then L13() else L2();
  L1(r4):
    match = ldf match in base;
    r6 = dyn match(subclass2, r4, 0.0, NULL);
    check L11() else D3();
  L2():
    popenv;
    return NULL;
  L7():
    subclasses = ld subclasses;
    check L9() else D1();
  L8():
    r3 = dyn base1(<sym subclasses>);
    goto L1(r3);
  L13():
    subclasses2 = ld subclasses;
    check L14() else D5();
  D1():
    deopt 9 [subclasses];
  D3():
    deopt 16 [r6];
  D5():
    deopt 22 [subclasses2];
  L9():
    subclasses1 = force? subclasses;
    checkMissing(subclasses1);
    names = ldf names in base;
    r5 = dyn names(subclasses1);
    check L10() else D2();
  L11():
    goto L0(r6);
  L14():
    subclasses3 = force? subclasses2;
    checkMissing(subclasses3);
    c1 = `is.object`(subclasses3);
    if c1 then L15() else L16(subclasses3);
  D2():
    deopt 12 [r5];
  L3(dx1):
    l = ld cdef;
    ___ = ldf `@<-`;
    check L19() else D7();
  L10():
    goto L1(r5);
  L15():
    dr = tryDispatchBuiltin.1("[", subclasses3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(subclasses5):
    ii2 = ld ii;
    check L18() else D6();
  D6():
    deopt 24 [subclasses5, ii2];
  D7():
    deopt 29 [dx1, l, dx1];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    ii3 = force? ii2;
    checkMissing(ii3);
    r8 = `-`(<missing>, ii3);
    __1 = ldf `[` in base;
    r9 = dyn __1(subclasses5, r8);
    goto L3(r9);
  L19():
    r10 = dyn ___(l, NULL, "subclasses", dx1);
    check L20() else D8();
  D8():
    deopt 32 [dx1, r10];
  L20():
    st cdef = r10;
    cdef1 = ld cdef;
    check L21() else D9();
  D9():
    deopt 34 [cdef1];
  L21():
    cdef2 = force? cdef1;
    checkMissing(cdef2);
    popenv;
    return cdef2;
  }
}